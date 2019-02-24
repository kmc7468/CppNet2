#ifndef CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP
#define CPPNET2_HEADER_SYSTEM_ICOMPARABLE_HPP

namespace CppNet2::System
{
	class Int32;

	template<typename T>
	struct IComparable
	{
		virtual ~IComparable() = default;

		virtual Int32 CompareTo(const T& other) = 0;
	};
}

#endif