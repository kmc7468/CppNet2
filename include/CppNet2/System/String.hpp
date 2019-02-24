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
#include <string>

namespace CppNet2::System
{
	class Boolean;

	class CPPNET2_EXPORT String : public Object,
		public ICloneable, public IComparable<>, public IComparable<String>, public IEquatable<String>
	{
	public:
		String() noexcept = default;
		String(const char16_t* string);
		String(const char16_t* string, Int32 length);
		String(const char16_t* string, Int32 offset, Int32 length);
		String(Char character);
		String(Char character, Int32 length);
		String(const Char* string);
		String(const Char* string, Int32 length);
		String(const Char* string, Int32 offset, Int32 length);
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
		Int32 Length() const noexcept;

	private:
		std::basic_string<Char> m_String;
		
	public:
		static const String Empty;
	};

	inline const String String::Empty;
}

namespace CppNet2
{
	inline namespace Literals
	{
		namespace StringLiterals
		{
			CPPNET2_EXPORT System::String operator""_s(const char16_t* string, std::size_t size);
		}
	}
}

#endif