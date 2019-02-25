#ifndef CPPNET2_HEADER_DETAILS_SIGN_HPP
#define CPPNET2_HEADER_DETAILS_SIGN_HPP

#include <CppNet2/System/Int32.hpp>

namespace CppNet2::Details
{
	template<typename T>
	CppNet2::System::Int32 Sign(const T& value)
	{
		return value == 0 ? 0 : (value > 0 ? 1 : -1);
	}
}

#endif