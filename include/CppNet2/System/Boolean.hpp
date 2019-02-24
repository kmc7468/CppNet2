#ifndef CPPNET2_HEADER_SYSTEM_BOOLEAN_HPP
#define CPPNET2_HEADER_SYSTEM_BOOLEAN_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Object.hpp>
#include <CppNet2/System/String.hpp>

namespace CppNet2::System
{
	class Int32;
	
	class CPPNET2_EXPORT Boolean final : public Object,
		public IComparable<>, public IComparable<Boolean>, public IEquatable<Boolean>
	{
	public:
		Boolean() noexcept = default;
		Boolean(bool boolean) noexcept;
		Boolean(const Boolean& boolean) noexcept;
		virtual ~Boolean() override = default;

	public:
		Boolean& operator=(bool boolean) noexcept;
		Boolean& operator=(const Boolean& boolean) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator|(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator|(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator|(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator^(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator^(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator^(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator&&(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(bool lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(const Boolean& lhs, bool rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator||(const Boolean& lhs, const Boolean& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!(const Boolean& boolean) noexcept;
		operator bool() const noexcept;

	public:
		virtual Int32 GetHashCode() const override;
		virtual String ToString() const override;
		virtual Int32 CompareTo(const Boolean& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const Boolean& other) const override;
		virtual Boolean Equals(const Object& other) const override;

	private:
		bool m_Value = false;

	public:
		static const String TrueString;
		static const String FalseString;
	};

	inline const String Boolean::TrueString = u"True";
	inline const String Boolean::FalseString = u"False";
}

#endif