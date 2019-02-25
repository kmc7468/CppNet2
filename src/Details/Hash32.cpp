#include <CppNet2/Details/Hash32.hpp>

#include <CppNet2/System/Boolean.hpp>

namespace CppNet2::Details
{
	CppNet2::System::Int32 Hash32(const char* address, CppNet2::System::Int32 length) noexcept
	{
		CppNet2::System::Int32 result = 574308723U;

		for (CppNet2::System::Int32 i = 0; i < length; ++i)
		{
			result ^= address[i];
			result *= 830723872U;
		}

		return result;
	}
}