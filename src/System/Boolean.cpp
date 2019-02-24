#include <CppNet2/System/Boolean.hpp>

#include <CppNet2/System/Int32.hpp>

namespace CppNet2::System
{
	Boolean::Boolean(bool boolean) noexcept
		: value_(boolean)
	{}
	Boolean::Boolean(const Boolean& boolean) noexcept
		: value_(boolean.value_)
	{}

	Boolean& Boolean::operator=(const Boolean& boolean) noexcept
	{
		return value_ = boolean.value_, *this;
	}
	Boolean operator==(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs == rhs.value_;
	}
	Boolean operator==(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.value_ == rhs;
	}
	Boolean operator==(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.value_ == rhs.value_;
	}
	Boolean operator!=(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs != rhs.value_;
	}
	Boolean operator!=(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.value_ != rhs;
	}
	Boolean operator!=(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.value_ != rhs.value_;
	}
	Boolean operator&&(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs && rhs.value_;
	}
	Boolean operator&&(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.value_ && rhs;
	}
	Boolean operator&&(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.value_ && rhs.value_;
	}
	Boolean operator||(bool lhs, const Boolean& rhs) noexcept
	{
		return lhs || rhs.value_;
	}
	Boolean operator||(const Boolean& lhs, bool rhs) noexcept
	{
		return lhs.value_ || rhs;
	}
	Boolean operator||(const Boolean& lhs, const Boolean& rhs) noexcept
	{
		return lhs.value_ || rhs.value_;
	}
	Boolean operator!(const Boolean& boolean) noexcept
	{
		return !boolean.value_;
	}
	Boolean::operator bool() const noexcept
	{
		return value_;
	}

	Int32 Boolean::CompareTo(const Boolean& other) const
	{
		return static_cast<int>(value_) - other.value_;
	}
	Boolean Boolean::Equals(const Boolean& other) const
	{
		return *this == other;
	}

	const std::u16string Boolean::TrueString = u"True";
	const std::u16string Boolean::FalseString = u"False";
}