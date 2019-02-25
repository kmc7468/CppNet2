#ifndef CPPNET2_HEADER_DETAILS_ENDIAN_HPP
#define CPPNET2_HEADER_DETAILS_ENDIAN_HPP
#include <CppNet2/Config.hpp>

namespace CppNet2::Details
{
	enum class Endian
	{
		None,
		Little,
		Big,
	};

	CPPNET2_EXPORT Endian GetEndian();
}

#endif