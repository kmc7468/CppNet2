#include <CppNet2/System/Object.hpp>

#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/Int32.hpp>

#include <cstdint>
#include <functional>

namespace CppNet2::System
{
	Boolean Object::Equals(const Object& other) const
	{
		return this == &other;
	}
	Int32 Object::GetHashCode() const
	{
		return static_cast<std::int32_t>(std::hash<std::uintptr_t>()(reinterpret_cast<std::uintptr_t>(this)));
	}
	std::u16string Object::ToString() const
	{
		return u"CppNet2::System::Object";
	}

	Boolean Object::Equals(const Object& a, const Object& b)
	{
		return a.Equals(b);
	}
	Boolean Object::ReferenceEquals(const Object& a, const Object& b)
	{
		return &a == &b;
	}
}