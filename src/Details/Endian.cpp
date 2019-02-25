#include <CppNet2/Details/Endian.hpp>

#include <CppNet2/System/Exception.hpp>

#include <cstdint>

namespace CppNet2::Details
{
	Endian GetEndian()
	{
		static Endian endian = Endian::None;

		if (endian == Endian::None)
		{
			const std::uint32_t temp = 0x12345678U;
			if (*reinterpret_cast<const char*>(&temp) == 0x78) endian = Endian::Little;
			else if (*reinterpret_cast<const char*>(&temp) == 0x12) endian = Endian::Big;
			else throw CppNet2::System::Exception("Not supported system.");
		}

		return endian;
	}
}