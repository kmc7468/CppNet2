#include <CppNet2/System/Object.hpp>

#include <CppNet2/Details/Hash32.hpp>
#include <CppNet2/System/Boolean.hpp>
#include <CppNet2/System/Int32.hpp>
#include <CppNet2/System/String.hpp>

namespace CppNet2::System
{
	Boolean Object::Equals(const Object& other) const
	{
		return this == &other;
	}
	Int32 Object::GetHashCode() const
	{
		return Details::Hash32(this);
	}
	String Object::ToString() const
	{
		using namespace StringLiterals;

		return u"CppNet2::System::Object"_s;
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