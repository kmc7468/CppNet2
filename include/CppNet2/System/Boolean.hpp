#ifndef CPPNET2_HEADER_SYSTEM_BOOLEAN_HPP
#define CPPNET2_HEADER_SYSTEM_BOOLEAN_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>

#include <string>

namespace CppNet2::System
{
	class Int32;
	
	class CPPNET2_EXPORT Boolean final : public IComparable<Boolean>, public IEquatable<Boolean>
	{
	public:
		Boolean() noexcept = default;
		Boolean(bool boolean) noexcept;
		Boolean(const Boolean& boolean) noexcept;
		virtual ~Boolean() override = default;

	public:
		Boolean& operator=(const Boolean& boolean) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!(const Boolean& boolean) noexcept;
		operator bool() const noexcept;

	public:
		virtual Int32 CompareTo(const Boolean& other) const override;
		virtual Boolean Equals(const Boolean& other) const override;

	private:
		bool value_ = false;

	public:
		static const std::u16string TrueString;
		static const std::u16string FalseString;
	};
}

#endif