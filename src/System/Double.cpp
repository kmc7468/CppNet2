#include <CppNet2/System/Double.hpp>

#include <CppNet2/Details/Hash32.hpp>
#include <CppNet2/Details/Sign.hpp>
#include <CppNet2/System/ArgumentException.hpp>

#include <cmath>

namespace CppNet2::System
{
	Double::Double(double decimal) noexcept
		: m_Value(decimal)
	{}
	Double::Double(const Double& decimal) noexcept
		: m_Value(decimal.m_Value)
	{}

	Double& Double::operator=(double decimal) noexcept
	{
		return m_Value = decimal, *this;
	}
	Double& Double::operator=(const Double& decimal) noexcept
	{
		return m_Value = decimal.m_Value, *this;
	}
	Boolean operator==(double lhs, const Double& rhs) noexcept
	{
		return lhs == rhs.m_Value;
	}
	Boolean operator==(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value == rhs;
	}
	Boolean operator==(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value == rhs.m_Value;
	}
	Boolean operator!=(double lhs, const Double& rhs) noexcept
	{
		return lhs != rhs.m_Value;
	}
	Boolean operator!=(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value != rhs;
	}
	Boolean operator!=(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value != rhs.m_Value;
	}
	Boolean operator>(double lhs, const Double& rhs) noexcept
	{
		return lhs > rhs.m_Value;
	}
	Boolean operator>(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value > rhs;
	}
	Boolean operator>(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value > rhs.m_Value;
	}
	Boolean operator>=(double lhs, const Double& rhs) noexcept
	{
		return lhs >= rhs.m_Value;
	}
	Boolean operator>=(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value >= rhs;
	}
	Boolean operator>=(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value >= rhs.m_Value;
	}
	Boolean operator<(double lhs, const Double& rhs) noexcept
	{
		return lhs < rhs.m_Value;
	}
	Boolean operator<(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value < rhs;
	}
	Boolean operator<(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value < rhs.m_Value;
	}
	Boolean operator<=(double lhs, const Double& rhs) noexcept
	{
		return lhs <= rhs.m_Value;
	}
	Boolean operator<=(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value <= rhs;
	}
	Boolean operator<=(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value <= rhs.m_Value;
	}
	Double operator+(double lhs, const Double& rhs) noexcept
	{
		return lhs + rhs.m_Value;
	}
	Double operator+(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value + rhs;
	}
	Double operator+(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value + rhs.m_Value;
	}
	Double operator-(double lhs, const Double& rhs) noexcept
	{
		return lhs - rhs.m_Value;
	}
	Double operator-(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value - rhs;
	}
	Double operator-(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value - rhs.m_Value;
	}
	Double operator*(double lhs, const Double& rhs) noexcept
	{
		return lhs * rhs.m_Value;
	}
	Double operator*(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value * rhs;
	}
	Double operator*(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value * rhs.m_Value;
	}
	Double operator/(double lhs, const Double& rhs) noexcept
	{
		return lhs / rhs.m_Value;
	}
	Double operator/(const Double& lhs, double rhs) noexcept
	{
		return lhs.m_Value / rhs;
	}
	Double operator/(const Double& lhs, const Double& rhs) noexcept
	{
		return lhs.m_Value / rhs.m_Value;
	}
	Double operator%(double lhs, const Double& rhs) noexcept
	{
		return std::fmod(lhs, rhs.m_Value);
	}
	Double operator%(const Double& lhs, double rhs) noexcept
	{
		return std::fmod(lhs.m_Value, rhs);
	}
	Double operator%(const Double& lhs, const Double& rhs) noexcept
	{
		return std::fmod(lhs.m_Value, rhs.m_Value);
	}
	Double& Double::operator+=(double decimal) noexcept
	{
		return m_Value += decimal, *this;
	}
	Double& Double::operator+=(const Double& decimal) noexcept
	{
		return m_Value += decimal.m_Value, *this;
	}
	Double& Double::operator-=(double decimal) noexcept
	{
		return m_Value -= decimal, *this;
	}
	Double& Double::operator-=(const Double& decimal) noexcept
	{
		return m_Value -= decimal.m_Value, *this;
	}
	Double& Double::operator*=(double decimal) noexcept
	{
		return m_Value *= decimal, *this;
	}
	Double& Double::operator*=(const Double& decimal) noexcept
	{
		return m_Value *= decimal.m_Value, *this;
	}
	Double& Double::operator/=(double decimal) noexcept
	{
		return m_Value /= decimal, *this;
	}
	Double& Double::operator/=(const Double& decimal) noexcept
	{
		return m_Value /= decimal.m_Value, *this;
	}
	Double& Double::operator%=(double decimal) noexcept
	{
		return m_Value = std::fmod(m_Value, decimal), *this;
	}
	Double& Double::operator%=(const Double& decimal) noexcept
	{
		return m_Value = std::fmod(m_Value, decimal.m_Value), *this;
	}
	Double operator+(const Double& decimal) noexcept
	{
		return decimal.m_Value;
	}
	Double operator-(const Double& decimal) noexcept
	{
		return -decimal.m_Value;
	}
	Double& Double::operator++() noexcept
	{
		return ++m_Value, *this;
	}
	Double Double::operator++(int) noexcept
	{
		const Double temp(*this);
		return ++m_Value, temp;
	}
	Double& Double::operator--() noexcept
	{
		return --m_Value, *this;
	}
	Double Double::operator--(int) noexcept
	{
		const Double temp(*this);
		return --m_Value, temp;
	}
	Double::operator double() const noexcept
	{
		return m_Value;
	}

	Int32 Double::GetHashCode() const
	{
		return Details::Hash32(m_Value);
	}
	String Double::ToString() const
	{
		return {}; // TODO
	}
	Int32 Double::CompareTo(const Double& other) const
	{
		return Details::Sign(m_Value - other.m_Value);
	}
	Int32 Double::CompareTo(const Object& other) const
	{
		if (const Double* other_double = dynamic_cast<const Double*>(&other);
			other_double) return CompareTo(*other_double);
		throw ArgumentException(u"Object must be of type CppNet2::System::Double.", u"other");
	}
	Boolean Double::Equals(const Double& other) const
	{
		return *this == other;
	}
	Boolean Double::Equals(const Object& other) const
	{
		if (const Double* other_double = dynamic_cast<const Double*>(&other);
			other_double) return Equals(*other_double);
		else return false;
	}
}