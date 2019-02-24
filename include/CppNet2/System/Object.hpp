#ifndef CPPNET2_HEADER_SYSTEM_OBJECT_HPP
#define CPPNET2_HEADER_SYSTEM_OBJECT_HPP
#include <CppNet2/Config.hpp>

#include <string>

namespace CppNet2::System
{
	class Boolean;
	class Int32;

	class CPPNET2_EXPORT Object
	{
	public:
		Object() noexcept = default;
		Object(const Object& object) = delete;
		virtual ~Object() = default;

	public:
		Object& operator=(const Object&) = delete;

	public:
		virtual Boolean Equals(const Object& other) const;
		virtual Int32 GetHashCode() const;
		virtual std::u16string ToString() const;

	public:
		static Boolean Equals(const Object& a, const Object& b);
		static Boolean ReferenceEquals(const Object& a, const Object& b);
	};
}

#endif