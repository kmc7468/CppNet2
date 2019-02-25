#include <CppNet2/System/Boolean.hpp>

#include <CppNet2/Details/Hash32.hpp>
#include <CppNet2/Details/Sign.hpp>
#include <CppNet2/System/ArgumentException.hpp>
#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/Int32.hpp>

namespace CppNet2::System
{
	Boolean::Boolean(bool boolean) noexcept
		: m_Value(boolean)
	{}
	Boolean::Boolean(const Boolean& boolean) noexcept
		: m_Value(boolean.m_Value)
	{}

	Boolean& Boolean::operator=(bool boolean) noexcept
	{
		return m_Value = boolean, *this;
	}
	Boolean& Boolean::operator=(const Boolean& boolean) noexcept
	{
		return m_Value = boolean.m_Value, *this;
	}
	Boolean operator==(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs == rhs.m_Value;
	}
	Boolean operator==(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value == rhs;
	}
	Boolean operator==(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value == rhs.m_Value;
	}
	Boolean operator!=(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs != rhs.m_Value;
	}
	Boolean operator!=(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value != rhs;
	}
	Boolean operator!=(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value != rhs.m_Value;
	}
	Boolean operator&(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs & rhs.m_Value;
	}
	Boolean operator&(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value & rhs;
	}
	Boolean operator&(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value & rhs.m_Value;
	}
	Boolean operator|(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs | rhs.m_Value;
	}
	Boolean operator|(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value | rhs;
	}
	Boolean operator|(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value | rhs.m_Value;
	}
	Boolean operator^(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs ^ rhs.m_Value;
	}
	Boolean operator^(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value ^ rhs;
	}
	Boolean operator^(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value ^ rhs.m_Value;
	}
	Boolean operator&&(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs && rhs.m_Value;
	}
	Boolean operator&&(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value && rhs;
	}
	Boolean operator&&(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value && rhs.m_Value;
	}
	Boolean operator||(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs || rhs.m_Value;
	}
	Boolean operator||(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.m_Value || rhs;
	}
	Boolean operator||(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.m_Value || rhs.m_Value;
	}
	Boolean operator!(const Boolean& boolean) noexcept
	{
		return !boolean.m_Value;
	}
	Boolean::operator bool() const noexcept
	{
		return m_Value;
	}

	Int32 Boolean::GetHashCode() const
	{
		return Details::Hash32(m_Value);
	}
	String Boolean::ToString() const
	{
		return m_Value ? Boolean::TrueString : Boolean::FalseString;
	}
	Int32 Boolean::CompareTo(const Boolean& other) const
	{
		return Details::Sign(static_cast<int>(m_Value) - other.m_Value);
	}
	Int32 Boolean::CompareTo(const Object& other) const
	{
		if (const Boolean* const other_boolean = dynamic_cast<const Boolean*>(&other);
			other_boolean) return CompareTo(*other_boolean);
		throw ArgumentException(u"Object must be of type CppNet2::System::Boolean.", u"other");
	}
	Boolean Boolean::Equals(const Boolean& other) const
	{
		return *this == other;
	}
	Boolean Boolean::Equals(const Object& other) const
	{
		if (const Boolean* other_boolean = dynamic_cast<const Boolean*>(&other);
			other_boolean) return Equals(*other_boolean);
		else return false;
	}
}