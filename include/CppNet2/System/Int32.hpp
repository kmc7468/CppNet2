#ifndef CPPNET2_HEADER_SYSTEM_INT32_HPP
#define CPPNET2_HEADER_SYSTEM_INT32_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>

#include <cstdint>

namespace CppNet2::System
{
	class Boolean;

	class CPPNET2_EXPORT Int32 final : public IComparable<Int32>, public IEquatable<Int32>
	{
	public:
		Int32() noexcept = default;
		Int32(std::int32_t integer) noexcept;
		Int32(const Int32& integer) noexcept;
		virtual ~Int32() override = default;

	public:
		Int32& operator=(std::int32_t integer) noexcept;
		Int32& operator=(const Int32& integer) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator+(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator+(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator+(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator-(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator-(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator-(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator*(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator*(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator*(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator/(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator/(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator/(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator%(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator%(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator%(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator&(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator&(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator&(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator|(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator|(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator|(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator^(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator^(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator^(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator<<(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator<<(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator<<(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator>>(std::int32_t lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator>>(const Int32& lhs, std::int32_t rhs) noexcept;
		CPPNET2_EXPORT friend Int32 operator>>(const Int32& lhs, const Int32& rhs) noexcept;
		Int32& operator+=(std::int32_t integer) noexcept;
		Int32& operator+=(const Int32& integer) noexcept;
		Int32& operator-=(std::int32_t integer) noexcept;
		Int32& operator-=(const Int32& integer) noexcept;
		Int32& operator*=(std::int32_t integer) noexcept;
		Int32& operator*=(const Int32& integer) noexcept;
		Int32& operator/=(std::int32_t integer) noexcept;
		Int32& operator/=(const Int32& integer) noexcept;
		Int32& operator%=(std::int32_t integer) noexcept;
		Int32& operator%=(const Int32& integer) noexcept;
		Int32& operator&=(std::int32_t integer) noexcept;
		Int32& operator&=(const Int32& integer) noexcept;
		Int32& operator|=(std::int32_t integer) noexcept;
		Int32& operator|=(const Int32& integer) noexcept;
		Int32& operator^=(std::int32_t integer) noexcept;
		Int32& operator^=(const Int32& integer) noexcept;
		Int32& operator<<=(std::int32_t integer) noexcept;
		Int32& operator<<=(const Int32& integer) noexcept;
		Int32& operator>>=(std::int32_t integer) noexcept;
		Int32& operator>>=(const Int32& integer) noexcept;
		CPPNET2_EXPORT friend Int32 operator+(const Int32& integer) noexcept;
		CPPNET2_EXPORT friend Int32 operator-(const Int32& integer) noexcept;
		CPPNET2_EXPORT friend Int32 operator~(const Int32& integer) noexcept;
		operator std::int32_t() const noexcept;

	public:
		virtual Int32 CompareTo(const Int32& other) const override;
		virtual Boolean Equals(const Int32& other) const override;

	private:
		std::int32_t value_ = 0;

	public:
		static const Int32 MaxValue;
		static const Int32 MinValue;
	};
}

#endif