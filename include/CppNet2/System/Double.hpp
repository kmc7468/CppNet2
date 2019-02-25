#ifndef CPPNET2_HEADER_SYSTEM_DOUBLE_HPP
#define CPPNET2_HEADER_SYSTEM_DOUBLE_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Int32.hpp>
#include <CppNet2/System/Object.hpp>

#include <limits>

namespace CppNet2::System
{
	class CPPNET2_EXPORT Double : public Object,
		public IComparable<>, public IComparable<Double>, public IEquatable<Double>
	{
	public:
		Double() noexcept = default;
		Double(double decimal) noexcept;
		Double(const Double& decimal) noexcept;
		virtual ~Double() override = default;

	public:
		Double& operator=(double decimal) noexcept;
		Double& operator=(const Double& decimal) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator+(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator+(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Double operator+(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator-(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator-(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Double operator-(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator*(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator*(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Double operator*(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator/(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator/(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Double operator/(const Double& lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator%(double lhs, const Double& rhs) noexcept;
		CPPNET2_EXPORT friend Double operator%(const Double& lhs, double rhs) noexcept;
		CPPNET2_EXPORT friend Double operator%(const Double& lhs, const Double& rhs) noexcept;
		Double& operator+=(double decimal) noexcept;
		Double& operator+=(const Double& decimal) noexcept;
		Double& operator-=(double decimal) noexcept;
		Double& operator-=(const Double& decimal) noexcept;
		Double& operator*=(double decimal) noexcept;
		Double& operator*=(const Double& decimal) noexcept;
		Double& operator/=(double decimal) noexcept;
		Double& operator/=(const Double& decimal) noexcept;
		Double& operator%=(double decimal) noexcept;
		Double& operator%=(const Double& decimal) noexcept;
		CPPNET2_EXPORT friend Double operator+(const Double& decimal) noexcept;
		CPPNET2_EXPORT friend Double operator-(const Double& decimal) noexcept;
		Double& operator++() noexcept;
		Double operator++(int) noexcept;
		Double& operator--() noexcept;
		Double operator--(int) noexcept;
		operator double() const noexcept;

	public:
		virtual Int32 GetHashCode() const override;
		virtual String ToString() const override;
		virtual Int32 CompareTo(const Double& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const Double& other) const override;
		virtual Boolean Equals(const Object& other) const override;

	private:
		double m_Value = 0.;

	public:
		static const Double Epsilon;
		static const Double MaxValue;
		static const Double MinValue;
		static const Double NaN;
		static const Double NegativeInfinity;
		static const Double PositiveInfinity;
	};

	inline const Double Double::Epsilon = std::numeric_limits<double>::epsilon();
	inline const Double Double::MaxValue = std::numeric_limits<double>::max();
	inline const Double Double::MinValue = std::numeric_limits<double>::min();
	inline const Double Double::NaN = std::numeric_limits<double>::quiet_NaN();
	inline const Double Double::NegativeInfinity = -std::numeric_limits<double>::infinity();
	inline const Double Double::PositiveInfinity = std::numeric_limits<double>::infinity();
}

#endif