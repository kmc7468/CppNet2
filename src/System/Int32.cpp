#include <CppNet2/System/Int32.hpp>

#include <limits>

namespace CppNet2::System
{
	Int32::Int32(std::int32_t integer) noexcept
		: value_(integer)
	{}
	Int32::Int32(const Int32& integer) noexcept
		: value_(integer.value_)
	{}

	Int32& Int32::operator=(std::int32_t integer) noexcept
	{
		return value_ = integer, *this;
	}
	Int32& Int32::operator=(const Int32& integer) noexcept
	{
		return value_ = integer.value_, *this;
	}
	bool operator==(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ == rhs.value_;
	}
	bool operator!=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ != rhs.value_;
	}
	bool operator>(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ > rhs.value_;
	}
	bool operator>=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ >= rhs.value_;
	}
	bool operator<(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ < rhs.value_;
	}
	bool operator<=(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ <= rhs.value_;
	}
	Int32::operator std::int32_t() const noexcept
	{
		return value_;
	}
	Int32 operator+(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs + rhs.value_;
	}
	Int32 operator+(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ + rhs;
	}
	Int32 operator+(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ + rhs.value_;
	}
	Int32 operator-(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs - rhs.value_;
	}
	Int32 operator-(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ - rhs;
	}
	Int32 operator-(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ - rhs.value_;
	}
	Int32 operator*(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs * rhs.value_;
	}
	Int32 operator*(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ * rhs;
	}
	Int32 operator*(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ * rhs.value_;
	}
	Int32 operator/(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs / rhs.value_;
	}
	Int32 operator/(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ / rhs;
	}
	Int32 operator/(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ / rhs.value_;
	}
	Int32 operator%(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs % rhs.value_;
	}
	Int32 operator%(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ % rhs;
	}
	Int32 operator%(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ % rhs.value_;
	}
	Int32 operator&(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs & rhs.value_;
	}
	Int32 operator&(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ & rhs;
	}
	Int32 operator&(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ & rhs.value_;
	}
	Int32 operator|(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs | rhs.value_;
	}
	Int32 operator|(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ | rhs;
	}
	Int32 operator|(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ | rhs.value_;
	}
	Int32 operator^(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs ^ rhs.value_;
	}
	Int32 operator^(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ ^ rhs;
	}
	Int32 operator^(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ ^ rhs.value_;
	}
	Int32 operator<<(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs << rhs.value_;
	}
	Int32 operator<<(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ << rhs;
	}
	Int32 operator<<(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ << rhs.value_;
	}
	Int32 operator>>(std::int32_t lhs, const Int32& rhs) noexcept
	{
		return lhs >> rhs.value_;
	}
	Int32 operator>>(const Int32& lhs, std::int32_t rhs) noexcept
	{
		return lhs.value_ >> rhs;
	}
	Int32 operator>>(const Int32& lhs, const Int32& rhs) noexcept
	{
		return lhs.value_ >> rhs.value_;
	}
	Int32& Int32::operator+=(std::int32_t integer) noexcept
	{
		return value_ += integer, *this;
	}
	Int32& Int32::operator+=(const Int32& integer) noexcept
	{
		return value_ += integer.value_, *this;
	}
	Int32& Int32::operator-=(std::int32_t integer) noexcept
	{
		return value_ -= integer, *this;
	}
	Int32& Int32::operator-=(const Int32& integer) noexcept
	{
		return value_ -= integer.value_, *this;
	}
	Int32& Int32::operator*=(std::int32_t integer) noexcept
	{
		return value_ *= integer, *this;
	}
	Int32& Int32::operator*=(const Int32& integer) noexcept
	{
		return value_ *= integer.value_, *this;
	}
	Int32& Int32::operator/=(std::int32_t integer) noexcept
	{
		return value_ /= integer, *this;
	}
	Int32& Int32::operator/=(const Int32& integer) noexcept
	{
		return value_ /= integer.value_, *this;
	}
	Int32& Int32::operator%=(std::int32_t integer) noexcept
	{
		return value_ %= integer, *this;
	}
	Int32& Int32::operator%=(const Int32& integer) noexcept
	{
		return value_ %= integer.value_, *this;
	}
	Int32& Int32::operator&=(std::int32_t integer) noexcept
	{
		return value_ &= integer, *this;
	}
	Int32& Int32::operator&=(const Int32& integer) noexcept
	{
		return value_ &= integer.value_, *this;
	}
	Int32& Int32::operator|=(std::int32_t integer) noexcept
	{
		return value_ |= integer, *this;
	}
	Int32& Int32::operator|=(const Int32& integer) noexcept
	{
		return value_ |= integer.value_, *this;
	}
	Int32& Int32::operator^=(std::int32_t integer) noexcept
	{
		return value_ ^= integer, *this;
	}
	Int32& Int32::operator^=(const Int32& integer) noexcept
	{
		return value_ ^= integer.value_, *this;
	}
	Int32& Int32::operator<<=(std::int32_t integer) noexcept
	{
		return value_ <<= integer, *this;
	}
	Int32& Int32::operator<<=(const Int32& integer) noexcept
	{
		return value_ <<= integer.value_, *this;
	}
	Int32& Int32::operator>>=(std::int32_t integer) noexcept
	{
		return value_ >>= integer, *this;
	}
	Int32& Int32::operator>>=(const Int32& integer) noexcept
	{
		return value_ >>= integer.value_, *this;
	}
	Int32 operator+(const Int32& integer) noexcept
	{
		return integer;
	}
	Int32 operator-(const Int32& integer) noexcept
	{
		return -integer.value_;
	}
	Int32 operator~(const Int32& integer) noexcept
	{
		return ~integer.value_;
	}

	const Int32 Int32::MaxValue = std::numeric_limits<std::int32_t>::max();
	const Int32 Int32::MinValue = std::numeric_limits<std::int32_t>::min();
}