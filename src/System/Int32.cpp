#include <CppNet2/System/Int32.hpp>

#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/String.hpp>

#include <typeinfo>

namespace CppNet2::System
{
	Int32::Int32(std::int32_t integer) noexcept
		: m_Value(integer)
	{}
	Int32::Int32(const Int32& integer) noexcept
		: m_Value(integer.m_Value)
	{}

	Int32& Int32::operator=(std::int32_t integer) noexcept
	{
		return m_Value = integer, *this;
	}
	Int32& Int32::operator=(const Int32& integer) noexcept
	{
		return m_Value = integer.m_Value, *this;
	}
	Boolean operator==(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs == rhs.m_Value;
	}
	Boolean operator==(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value == rhs;
	}
	Boolean operator==(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value == rhs.m_Value;
	}
	Boolean operator!=(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs != rhs.m_Value;
	}
	Boolean operator!=(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value != rhs;
	}
	Boolean operator!=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value != rhs.m_Value;
	}
	Boolean operator>(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs > rhs.m_Value;
	}
	Boolean operator>(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value > rhs;
	}
	Boolean operator>(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value > rhs.m_Value;
	}
	Boolean operator>=(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs >= rhs.m_Value;
	}
	Boolean operator>=(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value >= rhs;
	}
	Boolean operator>=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value >= rhs.m_Value;
	}
	Boolean operator<(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs < rhs.m_Value;
	}
	Boolean operator<(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value < rhs;
	}
	Boolean operator<(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value < rhs.m_Value;
	}
	Boolean operator<=(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs <= rhs.m_Value;
	}
	Boolean operator<=(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value <= rhs;
	}
	Boolean operator<=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value <= rhs.m_Value;
	}
	Int32::operator std::int32_t() const noexcept
	{
		return m_Value;
	}
	Int32 operator+(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs + rhs.m_Value;
	}
	Int32 operator+(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value + rhs;
	}
	Int32 operator+(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value + rhs.m_Value;
	}
	Int32 operator-(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs - rhs.m_Value;
	}
	Int32 operator-(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value - rhs;
	}
	Int32 operator-(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value - rhs.m_Value;
	}
	Int32 operator*(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs * rhs.m_Value;
	}
	Int32 operator*(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value * rhs;
	}
	Int32 operator*(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value * rhs.m_Value;
	}
	Int32 operator/(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs / rhs.m_Value;
	}
	Int32 operator/(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value / rhs;
	}
	Int32 operator/(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value / rhs.m_Value;
	}
	Int32 operator%(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs % rhs.m_Value;
	}
	Int32 operator%(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value % rhs;
	}
	Int32 operator%(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value % rhs.m_Value;
	}
	Int32 operator&(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs & rhs.m_Value;
	}
	Int32 operator&(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value & rhs;
	}
	Int32 operator&(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value & rhs.m_Value;
	}
	Int32 operator|(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs | rhs.m_Value;
	}
	Int32 operator|(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value | rhs;
	}
	Int32 operator|(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value | rhs.m_Value;
	}
	Int32 operator^(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs ^ rhs.m_Value;
	}
	Int32 operator^(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value ^ rhs;
	}
	Int32 operator^(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value ^ rhs.m_Value;
	}
	Int32 operator<<(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs << rhs.m_Value;
	}
	Int32 operator<<(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value << rhs;
	}
	Int32 operator<<(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value << rhs.m_Value;
	}
	Int32 operator>>(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs >> rhs.m_Value;
	}
	Int32 operator>>(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.m_Value >> rhs;
	}
	Int32 operator>>(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.m_Value >> rhs.m_Value;
	}
	Int32& Int32::operator+=(std::int32_t integer) noexcept
	{
		return m_Value += integer, *this;
	}
	Int32& Int32::operator+=(const Int32& integer) noexcept
	{
		return m_Value += integer.m_Value, *this;
	}
	Int32& Int32::operator-=(std::int32_t integer) noexcept
	{
		return m_Value -= integer, *this;
	}
	Int32& Int32::operator-=(const Int32& integer) noexcept
	{
		return m_Value -= integer.m_Value, *this;
	}
	Int32& Int32::operator*=(std::int32_t integer) noexcept
	{
		return m_Value *= integer, *this;
	}
	Int32& Int32::operator*=(const Int32& integer) noexcept
	{
		return m_Value *= integer.m_Value, *this;
	}
	Int32& Int32::operator/=(std::int32_t integer) noexcept
	{
		return m_Value /= integer, *this;
	}
	Int32& Int32::operator/=(const Int32& integer) noexcept
	{
		return m_Value /= integer.m_Value, *this;
	}
	Int32& Int32::operator%=(std::int32_t integer) noexcept
	{
		return m_Value %= integer, *this;
	}
	Int32& Int32::operator%=(const Int32& integer) noexcept
	{
		return m_Value %= integer.m_Value, *this;
	}
	Int32& Int32::operator&=(std::int32_t integer) noexcept
	{
		return m_Value &= integer, *this;
	}
	Int32& Int32::operator&=(const Int32& integer) noexcept
	{
		return m_Value &= integer.m_Value, *this;
	}
	Int32& Int32::operator|=(std::int32_t integer) noexcept
	{
		return m_Value |= integer, *this;
	}
	Int32& Int32::operator|=(const Int32& integer) noexcept
	{
		return m_Value |= integer.m_Value, *this;
	}
	Int32& Int32::operator^=(std::int32_t integer) noexcept
	{
		return m_Value ^= integer, *this;
	}
	Int32& Int32::operator^=(const Int32& integer) noexcept
	{
		return m_Value ^= integer.m_Value, *this;
	}
	Int32& Int32::operator<<=(std::int32_t integer) noexcept
	{
		return m_Value <<= integer, *this;
	}
	Int32& Int32::operator<<=(const Int32& integer) noexcept
	{
		return m_Value <<= integer.m_Value, *this;
	}
	Int32& Int32::operator>>=(std::int32_t integer) noexcept
	{
		return m_Value >>= integer, *this;
	}
	Int32& Int32::operator>>=(const Int32& integer) noexcept
	{
		return m_Value >>= integer.m_Value, *this;
	}
	Int32 operator+(const Int32& integer) noexcept
	{
		return integer;
	}
	Int32 operator-(const Int32& integer) noexcept
	{
		return -integer.m_Value;
	}
	Int32 operator~(const Int32& integer) noexcept
	{
		return ~integer.m_Value;
	}
	Int32& Int32::operator++() noexcept
	{
		return ++m_Value, *this;
	}
	Int32 Int32::operator++(int) noexcept
	{
		const Int32 temp(*this);
		return ++m_Value, temp;
	}
	Int32& Int32::operator--() noexcept
	{
		return --m_Value, * this;
	}
	Int32 Int32::operator--(int) noexcept
	{
		const Int32 temp(*this);
		return --m_Value, temp;
	}

	Int32 Int32::GetHashCode() const
	{
		return m_Value;
	}
	String Int32::ToString() const
	{
		return {}; // TODO
	}
	Int32 Int32::CompareTo(const Int32& other) const
	{
		return m_Value - other.m_Value;
	}
	Int32 Int32::CompareTo(const Object& other) const
	{
		if (const Int32* const other_int32 = dynamic_cast<const Int32*>(&other);
			other_int32) return CompareTo(*other_int32);
		throw std::bad_cast();
	}
	Boolean Int32::Equals(const Int32& other) const
	{
		return *this == other;
	}
	Boolean Int32::Equals(const Object& other) const
	{
		if (const Int32* other_int32 = dynamic_cast<const Int32*>(&other);
			other_int32) return Equals(*other_int32);
		else return false;
	}
}