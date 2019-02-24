#include <CppNet2/System/Char.hpp>

#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/String.hpp>

#include <typeinfo>

namespace CppNet2::System
{
	Char::Char(char16_t character) noexcept
		: m_Value(character)
	{}
	Char::Char(const Char& character) noexcept
		: m_Value(character.m_Value)
	{}

	Char& Char::operator=(char16_t character) noexcept
	{
		return m_Value = character, *this;
	}
	Char& Char::operator=(const Char& character) noexcept
	{
		return m_Value = character.m_Value, *this;
	}
	Boolean operator==(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs == rhs.m_Value;
	}
	Boolean operator==(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value == rhs;
	}
	Boolean operator==(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value == rhs.m_Value;
	}
	Boolean operator!=(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs != rhs.m_Value;
	}
	Boolean operator!=(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value != rhs;
	}
	Boolean operator!=(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value != rhs.m_Value;
	}
	Boolean operator>(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs > rhs.m_Value;
	}
	Boolean operator>(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value > rhs;
	}
	Boolean operator>(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value > rhs.m_Value;
	}
	Boolean operator>=(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs >= rhs.m_Value;
	}
	Boolean operator>=(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value >= rhs;
	}
	Boolean operator>=(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value >= rhs.m_Value;
	}
	Boolean operator<(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs < rhs.m_Value;
	}
	Boolean operator<(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value < rhs;
	}
	Boolean operator<(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value < rhs.m_Value;
	}
	Boolean operator<=(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs <= rhs.m_Value;
	}
	Boolean operator<=(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value <= rhs;
	}
	Boolean operator<=(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value <= rhs.m_Value;
	}
	Char operator+(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs + rhs.m_Value;
	}
	Char operator+(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value + rhs;
	}
	Char operator+(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value + rhs.m_Value;
	}
	Char operator-(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs - rhs.m_Value;
	}
	Char operator-(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value - rhs;
	}
	Char operator-(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value - rhs.m_Value;
	}
	Char operator*(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs * rhs.m_Value;
	}
	Char operator*(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value * rhs;
	}
	Char operator*(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value * rhs.m_Value;
	}
	Char operator/(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs / rhs.m_Value;
	}
	Char operator/(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value / rhs;
	}
	Char operator/(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value / rhs.m_Value;
	}
	Char operator%(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs % rhs.m_Value;
	}
	Char operator%(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value % rhs;
	}
	Char operator%(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value % rhs.m_Value;
	}
	Char operator&(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs & rhs.m_Value;
	}
	Char operator&(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value & rhs;
	}
	Char operator&(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value & rhs.m_Value;
	}
	Char operator|(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs | rhs.m_Value;
	}
	Char operator|(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value | rhs;
	}
	Char operator|(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value | rhs.m_Value;
	}
	Char operator^(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs ^ rhs.m_Value;
	}
	Char operator^(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value ^ rhs;
	}
	Char operator^(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value ^ rhs.m_Value;
	}
	Char operator<<(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs << rhs.m_Value;
	}
	Char operator<<(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value << rhs;
	}
	Char operator<<(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value << rhs.m_Value;
	}
	Char operator>>(char16_t lhs, const Char& rhs) noexcept
	{
		return lhs >> rhs.m_Value;
	}
	Char operator>>(const Char& lhs, char16_t rhs) noexcept
	{
		return lhs.m_Value >> rhs;
	}
	Char operator>>(const Char& lhs, const Char& rhs) noexcept
	{
		return lhs.m_Value >> rhs.m_Value;
	}
	Char& Char::operator+=(char16_t character) noexcept
	{
		return m_Value += character, *this;
	}
	Char& Char::operator+=(const Char& character) noexcept
	{
		return m_Value += character.m_Value, *this;
	}
	Char& Char::operator-=(char16_t character) noexcept
	{
		return m_Value -= character, *this;
	}
	Char& Char::operator-=(const Char& character) noexcept
	{
		return m_Value -= character.m_Value, *this;
	}
	Char& Char::operator*=(char16_t character) noexcept
	{
		return m_Value *= character, *this;
	}
	Char& Char::operator*=(const Char& character) noexcept
	{
		return m_Value *= character.m_Value, *this;
	}
	Char& Char::operator/=(char16_t character) noexcept
	{
		return m_Value /= character, *this;
	}
	Char& Char::operator/=(const Char& character) noexcept
	{
		return m_Value /= character.m_Value, *this;
	}
	Char& Char::operator%=(char16_t character) noexcept
	{
		return m_Value %= character, *this;
	}
	Char& Char::operator%=(const Char& character) noexcept
	{
		return m_Value %= character.m_Value, *this;
	}
	Char& Char::operator&=(char16_t character) noexcept
	{
		return m_Value &= character, *this;
	}
	Char& Char::operator&=(const Char& character) noexcept
	{
		return m_Value &= character.m_Value, *this;
	}
	Char& Char::operator|=(char16_t character) noexcept
	{
		return m_Value |= character, *this;
	}
	Char& Char::operator|=(const Char& character) noexcept
	{
		return m_Value |= character.m_Value, *this;
	}
	Char& Char::operator^=(char16_t character) noexcept
	{
		return m_Value ^= character, *this;
	}
	Char& Char::operator^=(const Char& character) noexcept
	{
		return m_Value ^= character.m_Value, *this;
	}
	Char& Char::operator<<=(char16_t character) noexcept
	{
		return m_Value <<= character, *this;
	}
	Char& Char::operator<<=(const Char& character) noexcept
	{
		return m_Value <<= character.m_Value, *this;
	}
	Char& Char::operator>>=(char16_t character) noexcept
	{
		return m_Value >>= character, *this;
	}
	Char& Char::operator>>=(const Char& character) noexcept
	{
		return m_Value >>= character.m_Value, *this;
	}
	Char operator~(const Char& character) noexcept
	{
		return ~character.m_Value;
	}
	Char& Char::operator++() noexcept
	{
		return ++m_Value, * this;
	}
	Char Char::operator++(int) noexcept
	{
		const Char temp(*this);
		return ++m_Value, temp;
	}
	Char& Char::operator--() noexcept
	{
		return --m_Value, * this;
	}
	Char Char::operator--(int) noexcept
	{
		const Char temp(*this);
		return --m_Value, temp;
	}
	Char::operator char16_t() const noexcept
	{
		return m_Value;
	}

	Int32 Char::GetHashCode() const
	{
		return m_Value;
	}
	String Char::ToString() const
	{
		return {}; // TODO
	}
	Int32 Char::CompareTo(const Char& other) const
	{
		return m_Value - other.m_Value;
	}
	Int32 Char::CompareTo(const Object& other) const
	{
		if (const Int32* other_int32 = dynamic_cast<const Int32*>(&other);
			other_int32) return CompareTo(*other_int32);
		throw std::bad_cast();
	}
	Boolean Char::Equals(const Char& other) const
	{
		return m_Value == other.m_Value;
	}
	Boolean Char::Equals(const Object& other) const
	{
		if (const Char* other_char = dynamic_cast<const Char*>(&other);
			other_char) return Equals(*other_char);
		else return false;
	}
}