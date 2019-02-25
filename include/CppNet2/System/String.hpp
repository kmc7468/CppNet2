#ifndef CPPNET2_HEADER_SYSTEM_STRING_HPP
#define CPPNET2_HEADER_SYSTEM_STRING_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Char.hpp>
#include <CppNet2/System/ICloneable.hpp>
#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Int32.hpp>
#include <CppNet2/System/Object.hpp>

#include <cstddef>
#include <istream>
#include <ostream>
#include <string>

namespace CppNet2::System
{
	class Boolean;

	class CPPNET2_EXPORT String : public Object,
		public ICloneable, public IComparable<>, public IComparable<String>, public IEquatable<String>
	{
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
		Char operator[](Int32 index) const;
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
		virtual Object* Clone() const override;
		virtual Int32 CompareTo(const String& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const String& other) const override;
		virtual Boolean Equals(const Object& other) const override;

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

	inline const String String::Empty;

	std::ostream& operator<<(std::ostream& stream, const String& string);
	std::istream& operator>>(std::istream& stream, String& string);
	std::wostream& operator<<(std::wostream& stream, const String& string);
	std::wistream& operator>>(std::wistream& stream, String& string);
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