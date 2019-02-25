#include <CppNet2/System/String.hpp>

#include <CppNet2/System/ArgumentException.hpp>
#include <CppNet2/System/Boolean.hpp>

#include <algorithm>
#include <functional>
#include <stdexcept>
#include <utility>

namespace CppNet2::System
{
	String::String(const char16_t* string)
		: String(string, [](const char16_t* string)
			{
				Int32 result = 0;
				while (*string++) ++result;
				return result;
			}(string))
	{}
	String::String(const char16_t* string, Int32 length)
		: m_String(string, string + length)
	{}
	String::String(const char16_t* string, Int32 offset, Int32 length)
		: String(string + offset, length)
	{}
	String::String(Char character)
		: String(character, 1)
	{}
	String::String(Char character, Int32 length)
		: m_String(static_cast<std::size_t>(length), character)
	{}
	String::String(const Char* string)
		: m_String(string)
	{}
	String::String(const Char* string, Int32 length)
		: m_String(string, length)
	{}
	String::String(const Char* string, Int32 offset, Int32 length)
		: m_String(string + offset, length)
	{}
	String::String(std::basic_string<Char> string)
		: m_String(std::move(string))
	{}
	String::String(const String& string)
		: m_String(string.m_String)
	{}
	String::String(String&& string) noexcept
		: m_String(std::move(string.m_String))
	{}

	String& String::operator=(const String& string)
	{
		return m_String = string.m_String, *this;
	}
	String& String::operator=(String&& string) noexcept
	{
		return m_String = std::move(string.m_String), *this;
	}
	Char String::operator[](Int32 index) const
	{
		if (index < 0 || index >= Length()) throw std::out_of_range("");

		return m_String[static_cast<std::size_t>(index)];
	}
	Char& String::operator[](Int32 index)
	{
		if (index < 0 || index >= Length()) throw std::out_of_range("");

		return m_String[static_cast<std::size_t>(index)];
	}
	Boolean operator==(const String& lhs, const String& rhs) noexcept
	{
		return lhs.m_String == rhs.m_String;
	}
	Boolean operator!=(const String& lhs, const String& rhs) noexcept
	{
		return lhs.m_String != rhs.m_String;
	}
	String operator+(Char lhs, const String& rhs)
	{
		return lhs + rhs.m_String;
	}
	String operator+(const String& lhs, Char rhs)
	{
		return lhs.m_String + rhs;
	}
	String operator+(const String& lhs, const String& rhs)
	{
		return lhs.m_String + rhs.m_String;
	}
	String& String::operator+=(Char character)
	{
		return m_String += character, *this;
	}
	String& String::operator+=(const String& string)
	{
		return m_String += string.m_String, *this;
	}

	Int32 String::GetHashCode() const
	{
		const std::u16string temp(m_String.begin(), m_String.end());
		return static_cast<Int32>(std::hash<std::u16string>()(temp));
	}
	String String::ToString() const
	{
		return m_String;
	}
	Object* String::Clone() const
	{
		return new String(*this);
	}
	Int32 String::CompareTo(const String& other) const
	{
		const Int32 min_length = std::min(Length(), other.Length());
		
		for (Int32 i = 0; i < min_length; ++i)
		{
			if (const Int32 compared = static_cast<Int32>((*this)[i]) - static_cast<Int32>(other[i]);
				compared) return compared;
		}

		return Length() > other.Length() ? 1 : (Length() < other.Length() ? -1 : 0);
	}
	Int32 String::CompareTo(const Object& other) const
	{
		if (const String* other_string = dynamic_cast<const String*>(&other);
			other_string) return CompareTo(*other_string);
		throw ArgumentException(u"Object must be of type CppNet2::System::String.", u"other");
	}
	Boolean String::Equals(const String& other) const
	{
		return *this == other;
	}
	Boolean String::Equals(const Object& other) const
	{
		if (const String* other_string = dynamic_cast<const String*>(&other);
			other_string) return Equals(*other_string);
		else return false;
	}

	Int32 String::Length() const noexcept
	{
		return static_cast<Int32>(m_String.size());
	}
}

namespace CppNet2::Literals::StringLiterals
{
	System::String operator""_s(const char16_t* string, std::size_t size)
	{
		return std::basic_string<System::Char>(string, string + size);
	}
}