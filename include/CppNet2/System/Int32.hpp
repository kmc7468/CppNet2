#ifndef CPPNET2_HEADER_SYSTEM_INT32_HPP
#define CPPNET2_HEADER_SYSTEM_INT32_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Object.hpp>

#include <cstdint>
#include <limits>
#include <string>

namespace CppNet2::System
{
	class Boolean;
	class String;

	class CPPNET2_EXPORT Int32 final : public Object,
		public IComparable<>, public IComparable<Int32>, public IEquatable<Int32>
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
		Int32& operator++() noexcept;
		Int32 operator++(int) noexcept;
		Int32& operator--() noexcept;
		Int32 operator--(int) noexcept;
		operator std::int32_t() const noexcept;

	public:
		virtual Int32 GetHashCode() const override;
		virtual String ToString() const override;
		virtual Int32 CompareTo(const Int32& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const Int32& other) const override;
		virtual Boolean Equals(const Object& other) const override;

	private:
		std::int32_t m_Value = 0;

	public:
		static const Int32 MaxValue;
		static const Int32 MinValue;
	};

#ifdef CPPNET2_INTERNAL
	inline const Int32 Int32::MaxValue = std::numeric_limits<std::int32_t>::max();
	inline const Int32 Int32::MinValue = std::numeric_limits<std::int32_t>::min();
#endif
}

#endif