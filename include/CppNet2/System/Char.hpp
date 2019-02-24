#ifndef CPPNET2_HEADER_SYSTEM_CHAR_HPP
#define CPPNET2_HEADER_SYSTEM_CHAR_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/IComparable.hpp>
#include <CppNet2/System/IEquatable.hpp>
#include <CppNet2/System/Int32.hpp>
#include <CppNet2/System/Object.hpp>

namespace CppNet2::System
{
	class CPPNET2_EXPORT Char final : public Object,
		public IComparable<>, public IComparable<Char>, public IEquatable<Char>
	{
	public:
		Char() noexcept = default;
		Char(char16_t character) noexcept;
		Char(const Char& character) noexcept;
		virtual ~Char() override = default;

	public:
		Char& operator=(char16_t character) noexcept;
		Char& operator=(const Char& character) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator==(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator!=(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator>=(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Boolean operator<=(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator+(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator+(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator+(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator-(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator-(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator-(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator*(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator*(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator*(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator/(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator/(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator/(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator%(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator%(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator%(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator&(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator&(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator&(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator|(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator|(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator|(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator^(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator^(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator^(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator<<(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator<<(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator<<(const Char& lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator>>(char16_t lhs, const Char& rhs) noexcept;
		CPPNET2_EXPORT friend Char operator>>(const Char& lhs, char16_t rhs) noexcept;
		CPPNET2_EXPORT friend Char operator>>(const Char& lhs, const Char& rhs) noexcept;
		Char& operator+=(char16_t character) noexcept;
		Char& operator+=(const Char& character) noexcept;
		Char& operator-=(char16_t character) noexcept;
		Char& operator-=(const Char& character) noexcept;
		Char& operator*=(char16_t character) noexcept;
		Char& operator*=(const Char& character) noexcept;
		Char& operator/=(char16_t character) noexcept;
		Char& operator/=(const Char& character) noexcept;
		Char& operator%=(char16_t character) noexcept;
		Char& operator%=(const Char& character) noexcept;
		Char& operator&=(char16_t character) noexcept;
		Char& operator&=(const Char& character) noexcept;
		Char& operator|=(char16_t character) noexcept;
		Char& operator|=(const Char& character) noexcept;
		Char& operator^=(char16_t character) noexcept;
		Char& operator^=(const Char& character) noexcept;
		Char& operator<<=(char16_t character) noexcept;
		Char& operator<<=(const Char& character) noexcept;
		Char& operator>>=(char16_t character) noexcept;
		Char& operator>>=(const Char& character) noexcept;
		CPPNET2_EXPORT friend Char operator~(const Char& character) noexcept;
		operator char16_t() const noexcept;
		
	public:
		virtual Int32 GetHashCode() const override;
		virtual std::u16string ToString() const override;
		virtual Int32 CompareTo(const Char& other) const override;
		virtual Int32 CompareTo(const Object& other) const override;
		virtual Boolean Equals(const Char& other) const override;
		virtual Boolean Equals(const Object& other) const override;
		
	private:
		char16_t m_Value = 0;

	public:
		static const Char MaxValue;
		static const Char MinValue;
	};
}

#endif