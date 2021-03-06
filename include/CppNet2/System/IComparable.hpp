#ifndef CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP
#define CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP

#include <CppNet2/System/Object.hpp>

namespace CppNet2::System
{
	class Int32;

	template<typename T = Object>
	struct IComparable
	{
		virtual ~IComparable() = default;

		virtual Int32 CompareTo(const T& other) const = 0;
	};
}

#endif