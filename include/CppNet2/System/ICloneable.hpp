#ifndef CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP
#define CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP

#include <CppNet2/System/Object.hpp>

namespace CppNet2::System
{
	struct ICloneable
	{
		virtual ~ICloneable() = default;

		virtual Object* Clone() const = 0;
	};
}

#endif