#ifndef CPPNET2_HEADER_SYSTEM_IDISPOSABLE_HPP
#define CPPNET2_HEADER_SYSTEM_IDISPOSABLE_HPP
#include <CppNet2/Config.hpp>

namespace CppNet2::System
{
	struct CPPNET2_EXPORT IDisposable
	{
		virtual ~IDisposable() = default;

		virtual void Dispose() = 0;
	};
}

#endif