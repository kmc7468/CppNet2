#ifndef CPPNET2_HEADER_SYSTEM_STRING_HPP
#define CPPNET2_HEADER_SYSTEM_STRING_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Char.hpp>
#include <CppNet2/System/ICloneable.hpp>
#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Int32.hpp>
#include <CppNet2/System/Object.hpp>
#include <CppNet2/System/Collections/Generic/IEnumerable.hpp>
#include <CppNet2/System/Collections/Generic/IEnumerator.hpp>
#include <CppNet2/System/Collections/Generic/IReadOnlyEnumerable.hpp>
#include <CppNet2/System/Collections/Generic/IReadOnlyEnumerator.hpp>

#include <cstddef>
#include <istream>
#include <memory>
#include <ostream>
#include <string>

#if defined(_MSC_VER) && defined(CPPNET2_DISABLE_SOME_WARNINGS)
#	pragma warning(disable: 4251)
#endif

namespace CppNet2::System
{
	class ReadOnlyCharEnumerator;
	class CharEnumerator;
}

namespace CppNet2::Details::System
{
	struct CPPNET2_EXPORT StringBase1 : CppNet2::System::Collections::Generic::IEnumerable<CppNet2::System::Char>
	{
	protected:
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IReadOnlyEnumerator<CppNet2::System::Char>> GetEnumeratorBase1() const = 0;
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IEnumerator<CppNet2::System::Char>> GetEnumeratorBase1() = 0;

	private:
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IReadOnlyEnumerator<CppNet2::System::Char>> GetEnumerator() const override;
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IEnumerator<CppNet2::System::Char>> GetEnumerator() override;
	};

	struct CPPNET2_EXPORT StringBase2
	{
		CppNet2::System::ReadOnlyCharEnumerator GetEnumerator() const;
		CppNet2::System::CharEnumerator GetEnumerator();

	protected:
		virtual CppNet2::System::ReadOnlyCharEnumerator GetEnumeratorBase2() const = 0;
		virtual CppNet2::System::CharEnumerator GetEnumeratorBase2() = 0;
	};
}

namespace CppNet2::System
{
	class Boolean;
	class String;

	class CPPNET2_EXPORT ReadOnlyCharEnumerator final : public Object,
		public ICloneable, public Collections::Generic::IReadOnlyEnumerator<Char>
	{
		friend class String;
		
	public:
		ReadOnlyCharEnumerator(const CharEnumerator& enumerator) noexcept;
		ReadOnlyCharEnumerator(const ReadOnlyCharEnumerator& enumerator) noexcept;
		virtual ~ReadOnlyCharEnumerator() override = default;

	private:
		ReadOnlyCharEnumerator(const String* string) noexcept;

	public:
		ReadOnlyCharEnumerator& operator=(const ReadOnlyCharEnumerator& enumerator) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const CharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const ReadOnlyCharEnumerator& lhs, const CharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const ReadOnlyCharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const CharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const ReadOnlyCharEnumerator& lhs, const CharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const ReadOnlyCharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;

	public:
		virtual std::unique_ptr<Object> Clone() const override;
		virtual void Dispose() override;
		virtual Boolean MoveNext() override;
		virtual void Reset() override;

		virtual const Char& Current() const override;

	private:
		const String* m_String = nullptr;
		Int32 m_Index = -1;
	};

	class CPPNET2_EXPORT CharEnumerator final : public Object,
		public ICloneable, public Collections::Generic::IEnumerator<Char>
	{
		friend class String;
		friend class ReadOnlyCharEnumerator;

		CPPNET2_EXPORT friend Boolean operator==(const CharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const ReadOnlyCharEnumerator& lhs, const CharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const CharEnumerator& lhs, const ReadOnlyCharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const ReadOnlyCharEnumerator& lhs, const CharEnumerator& rhs) noexcept;

	public:
		CharEnumerator(const CharEnumerator& enumerator) noexcept;
		virtual ~CharEnumerator() override = default;

	private:
		CharEnumerator(String* string) noexcept;

	public:
		CharEnumerator& operator=(const CharEnumerator& enumerator) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const CharEnumerator& lhs, const CharEnumerator& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const CharEnumerator& lhs, const CharEnumerator& rhs) noexcept;
		
	public:
		virtual std::unique_ptr<Object> Clone() const override;
		virtual void Dispose() override;
		virtual Boolean MoveNext() override;
		virtual void Reset() override;

		virtual const Char& Current() const override;
		virtual Char& Current() override;

	private:
		String* m_String = nullptr;
		Int32 m_Index = -1;
	};

	class CPPNET2_EXPORT String final : public Object, public Details::System::StringBase1, public Details::System::StringBase2,
		public ICloneable, public IComparable<>, public IComparable<String>, public IEquatable<String>
	{
		friend class ReadOnlyCharEnumerator;
		friend class CharEnumerator;

		CPPNET2_EXPORT friend std::ostream& operator<<(std::ostream& stream, const String& string);
		CPPNET2_EXPORT friend std::istream& operator>>(std::istream& stream, String& string);
		CPPNET2_EXPORT friend std::wostream& operator<<(std::wostream& stream, const String& string);
		CPPNET2_EXPORT friend std::wistream& operator>>(std::wistream& stream, String& string);

	public:
		String() noexcept = default;
		String(const char* string);
		String(const char* string, Int32 length);
		String(const char* string, Int32 offset, Int32 length);
		String(const wchar_t* string);
		String(const wchar_t* string, Int32 length);
		String(const wchar_t* string, Int32 offset, Int32 length);
		String(const char16_t* string);
		String(const char16_t* string, Int32 length);
		String(const char16_t* string, Int32 offset, Int32 length);
		String(Char character);
		String(Char character, Int32 length);
		String(const Char* string);
		String(const Char* string, Int32 length);
		String(const Char* string, Int32 offset, Int32 length);
		String(const std::string& string);
		String(const std::wstring& string);
		String(const std::u16string& string);
		String(std::basic_string<Char> string);
		String(const String& string);
		String(String&& string) noexcept;
		virtual ~String() override = default;

	public:
		String& operator=(const String& string);
		String& operator=(String&& string) noexcept;
		const Char& operator[](Int32 index) const;
		Char& operator[](Int32 index);
		CPPNET2_EXPORT friend Boolean operator==(const String& lhs, const String& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const String& lhs, const String& rhs) noexcept;
		CPPNET2_EXPORT friend String operator+(Char lhs, const String& rhs);
		CPPNET2_EXPORT friend String operator+(const String& lhs, Char rhs);
		CPPNET2_EXPORT friend String operator+(const String& lhs, const String& rhs);
		String& operator+=(Char character);
		String& operator+=(const String& string);

	public:
		virtual Int32 GetHashCode() const override;
		virtual String ToString() const override;
		virtual std::unique_ptr<Object> Clone() const override;
		virtual Int32 CompareTo(const String& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const String& other) const override;
		virtual Boolean Equals(const Object& other) const override;
		using Details::System::StringBase2::GetEnumerator;

	protected:
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IReadOnlyEnumerator<CppNet2::System::Char>> GetEnumeratorBase1() const override;
		virtual std::unique_ptr<CppNet2::System::Collections::Generic::IEnumerator<CppNet2::System::Char>> GetEnumeratorBase1() override;
		virtual ReadOnlyCharEnumerator GetEnumeratorBase2() const override;
		virtual CharEnumerator GetEnumeratorBase2() override;

	public:
		std::string ToStdString() const;
		std::wstring ToStdWString() const;
		std::u16string ToStdU16String() const;
		void FromStdString(const std::string& string);
		void FromStdWString(const std::wstring& string);
		void FromStdU16String(const std::u16string& string);

	public:
		Int32 Length() const noexcept;

	private:
		std::basic_string<Char> m_String;
		
	public:
		static const String Empty;
	};

#ifdef CPPNET2_INTERNAL
	inline const String String::Empty;
#endif

	CPPNET2_EXPORT std::ostream& operator<<(std::ostream& stream, const String& string);
	CPPNET2_EXPORT std::istream& operator>>(std::istream& stream, String& string);
	CPPNET2_EXPORT std::wostream& operator<<(std::wostream& stream, const String& string);
	CPPNET2_EXPORT std::wistream& operator>>(std::wistream& stream, String& string);
}

namespace CppNet2
{
	inline namespace Literals
	{
		namespace StringLiterals
		{
			CPPNET2_EXPORT System::String operator""_s(const char* string, std::size_t size);
			CPPNET2_EXPORT System::String operator""_s(const wchar_t* string, std::size_t size);
			CPPNET2_EXPORT System::String operator""_s(const char16_t* string, std::size_t size);
		}
	}
}

#endif