#include <CppNet2/System/String.hpp>

#include <CppNet2/System/ArgumentException.hpp>
#include <CppNet2/System/Boolean.hpp>

#include <algorithm>
#include <codecvt>
#include <cstring>
#include <functional>
#include <stdexcept>
#include <utility>

namespace CppNet2::System
{
	CharEnumeratorConst::CharEnumeratorConst(const CharEnumerator& enumerator) noexcept
		: m_String(enumerator.m_String), m_Index(enumerator.m_Index)
	{}
	CharEnumeratorConst::CharEnumeratorConst(const CharEnumeratorConst& enumerator) noexcept
		: m_String(enumerator.m_String), m_Index(enumerator.m_Index)
	{}

	CharEnumeratorConst::CharEnumeratorConst(const String* string) noexcept
		: m_String(string)
	{}

	CharEnumeratorConst& CharEnumeratorConst::operator=(const CharEnumeratorConst& enumerator) noexcept
	{
		m_String = enumerator.m_String;
		m_Index = enumerator.m_Index;

		return *this;
	}

	Boolean operator==(const CharEnumerator& lhs, const CharEnumeratorConst& rhs) noexcept
	{
		return lhs.m_String == rhs.m_String && lhs.m_Index == rhs.m_Index;
	}
	Boolean operator==(const CharEnumeratorConst& lhs, const CharEnumerator& rhs) noexcept
	{
		return lhs.m_String == rhs.m_String && lhs.m_Index == rhs.m_Index;
	}
	Boolean operator==(const CharEnumeratorConst& lhs, const CharEnumeratorConst& rhs) noexcept
	{
		return lhs.m_String == rhs.m_String && lhs.m_Index == rhs.m_Index;
	}
	Boolean operator!=(const CharEnumerator& lhs, const CharEnumeratorConst& rhs) noexcept
	{
		return lhs.m_String != rhs.m_String || lhs.m_Index != rhs.m_Index;
	}
	Boolean operator!=(const CharEnumeratorConst& lhs, const CharEnumerator& rhs) noexcept
	{
		return lhs.m_String != rhs.m_String || lhs.m_Index != rhs.m_Index;
	}
	Boolean operator!=(const CharEnumeratorConst& lhs, const CharEnumeratorConst& rhs) noexcept
	{
		return lhs.m_String != rhs.m_String || lhs.m_Index != rhs.m_Index;
	}

	Object* CharEnumeratorConst::Clone() const
	{
		return new CharEnumeratorConst(*this);
	}
	void CharEnumeratorConst::Dispose()
	{
		m_String = nullptr;
		m_Index = -1;
	}
	Boolean CharEnumeratorConst::MoveNext()
	{
		if (m_String && m_Index < m_String->Length() - 1) return ++m_Index, true;
		else return false;
	}
	void CharEnumeratorConst::Reset()
	{
		m_Index = -1;
	}

	const Char& CharEnumeratorConst::Current() const
	{
		return (*m_String)[m_Index];
	}
}

namespace CppNet2::System
{
	CharEnumerator::CharEnumerator(const CharEnumerator& enumerator) noexcept
		: m_String(enumerator.m_String), m_Index(enumerator.m_Index)
	{}

	CharEnumerator::CharEnumerator(String* string) noexcept
		: m_String(string)
	{}

	CharEnumerator& CharEnumerator::operator=(const CharEnumerator& enumerator) noexcept
	{
		m_String = enumerator.m_String;
		m_Index = enumerator.m_Index;

		return *this;
	}
	
	Boolean operator==(const CharEnumerator& lhs, const CharEnumerator& rhs) noexcept
	{
		return lhs.m_String == rhs.m_String && lhs.m_Index == rhs.m_Index;
	}
	Boolean operator!=(const CharEnumerator& lhs, const CharEnumerator& rhs) noexcept
	{
		return lhs.m_String != rhs.m_String || lhs.m_Index != rhs.m_Index;
	}

	Object* CharEnumerator::Clone() const
	{
		return new CharEnumerator(*this);
	}
	void CharEnumerator::Dispose()
	{
		m_String = nullptr;
		m_Index = -1;
	}
	Boolean CharEnumerator::MoveNext()
	{
		if (m_String&& m_Index < m_String->Length() - 1) return ++m_Index, true;
		else return false;
	}
	void CharEnumerator::Reset()
	{
		m_Index = -1;
	}

	const Char& CharEnumerator::Current() const
	{
		return (*m_String)[m_Index];
	}
	Char& CharEnumerator::Current()
	{
		return (*m_String)[m_Index];
	}
}

namespace CppNet2::System
{
	String::String(const char* string)
		: String(string, static_cast<Int32>(std::strlen(string)))
	{}
	String::String(const char* string, Int32 length)
	{
		FromStdString(std::string(string, static_cast<std::size_t>(length)));
	}
	String::String(const char* string, Int32 offset, Int32 length)
		: String(string + offset, length)
	{}
	String::String(const wchar_t* string)
		: String(string, static_cast<Int32>(std::wcslen(string)))
	{}
	String::String(const wchar_t* string, Int32 length)
	{
		FromStdWString(std::wstring(string, static_cast<std::size_t>(length)));
	}
	String::String(const wchar_t* string, Int32 offset, Int32 length)
		: String(string + offset, length)
	{}
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
	String::String(const std::string& string)
	{
		FromStdString(string);
	}
	String::String(const std::wstring& string)
	{
		FromStdWString(string);
	}
	String::String(const std::u16string& string)
	{
		FromStdU16String(string);
	}
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
	const Char& String::operator[](Int32 index) const
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
	Collections::Generic::IEnumeratorConst<Char>* String::GetEnumerator() const
	{
		return new CharEnumeratorConst(this);
	}
	Collections::Generic::IEnumerator<Char>* String::GetEnumerator()
	{
		return new CharEnumerator(this);
	}

	std::string String::ToStdString() const
	{
		const std::wstring wstring = ToStdWString();
		std::wstring_convert<std::codecvt<wchar_t, char, std::mbstate_t>> converter;
		return converter.to_bytes(wstring);
	}
	std::wstring String::ToStdWString() const
	{
		const std::u16string u16string = ToStdU16String();
		std::wstring_convert<std::codecvt_utf16<wchar_t, 0x10FFFF, std::little_endian>> converter;
		return converter.from_bytes(reinterpret_cast<const char*>(u16string.c_str()), reinterpret_cast<const char*>(u16string.c_str()) + u16string.size() * 2);
	}
	std::u16string String::ToStdU16String() const
	{
		return std::u16string(m_String.begin(), m_String.end());
	}
	void String::FromStdString(const std::string& string)
	{
		std::wstring_convert<std::codecvt<wchar_t, char, std::mbstate_t>> converter;
		FromStdWString(converter.from_bytes(string));
	}
	void String::FromStdWString(const std::wstring& string)
	{
		std::wstring_convert<std::codecvt_utf16<wchar_t, 0x10FFFFF, std::little_endian>> converter;
		const std::string converter_output = converter.to_bytes(string);
		std::u16string converted(converter_output.size() / 2, 0);
		std::memcpy(converted.data(), converter_output.c_str(), converter_output.size());

		FromStdU16String(converted);
	}
	void String::FromStdU16String(const std::u16string& string)
	{
		m_String = std::basic_string<Char>(string.begin(), string.end());
	}

	Int32 String::Length() const noexcept
	{
		return static_cast<Int32>(m_String.size());
	}

	std::ostream& operator<<(std::ostream& stream, const String& string)
	{
		return stream << string.ToStdString();
	}
	std::istream& operator>>(std::istream& stream, String& string)
	{
		std::string input;
		stream >> input;
		if (!stream.good()) return stream;
		else return string.FromStdString(input), stream;
	}
	std::wostream& operator<<(std::wostream& stream, const String& string)
	{
		return stream << string.ToStdWString();
	}
	std::wistream& operator>>(std::wistream& stream, String& string)
	{
		std::wstring input;
		stream >> input;
		if (!stream.good()) return stream;
		else return string.FromStdWString(input), stream;
	}
}

namespace CppNet2::Literals::StringLiterals
{
	System::String operator""_s(const char* string, std::size_t size)
	{
		return System::String(string, static_cast<System::Int32>(size));
	}
	System::String operator""_s(const wchar_t* string, std::size_t size)
	{
		return System::String(string, static_cast<System::Int32>(size));
	}
	System::String operator""_s(const char16_t* string, std::size_t size)
	{
		return System::String(string, static_cast<System::Int32>(size));
	}
}