#ifndef CPPNET2_HEADER_SYSTEM_ICLONEABLE_HPP
#define CPPNET2_HEADER_SYSTEM_ICLONEABLE_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Object.hpp>

#include <memory>

namespace CppNet2::System
{
	struct CPPNET2_EXPORT ICloneable
	{
		virtual ~ICloneable() = default;

		virtual std::unique_ptr<Object> Clone() const = 0;
	};
}

#endif