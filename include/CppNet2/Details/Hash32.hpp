#ifndef CPPNET2_HEADER_DETAILS_HASH32_HPP
#define CPPNET2_HEADER_DETAILS_HASH32_HPP

#include <CppNet2/System/Int32.hpp>

namespace CppNet2::Details
{
	CppNet2::System::Int32 Hash32(const char* address, CppNet2::System::Int32 length) noexcept;
	template<typename T>
	CppNet2::System::Int32 Hash32(const T& value) noexcept
	{
		return Hash32(reinterpret_cast<const char*>(&value), sizeof(T));
	}
}

#endif