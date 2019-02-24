#ifndef CPPNET2_HEADER_SYSTEM_INT32_HPP
#define CPPNET2_HEADER_SYSTEM_INT32_HPP
#include <CppNet2/Config.hpp>

#include <cstdint>

namespace CppNet2::System
{
	class CPPNET2_EXPORT Int32 final
	{
	public:
		Int32() noexcept = default;
		Int32(std::int32_t integer) noexcept;
		Int32(const Int32& integer) noexcept;
		virtual ~Int32() = default;

	public:
		Int32& operator=(std::int32_t integer) noexcept;
		Int32& operator=(const Int32& integer) noexcept;
		CPPNET2_EXPORT friend bool operator==(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend bool operator!=(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend bool operator>(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend bool operator>=(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend bool operator<(const Int32& lhs, const Int32& rhs) noexcept;
		CPPNET2_EXPORT friend bool operator<=(const Int32& lhs, const Int32& rhs) noexcept;
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

	private:
		std::int32_t value_ = 0;

	public:
		static const Int32 MaxValue;
		static const Int32 MinValue;
	};
}

#endif