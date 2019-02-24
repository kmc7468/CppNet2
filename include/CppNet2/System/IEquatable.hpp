#ifndef CPPNET2_HEADER_SYSTEM_IEQUATABLE_HPP
#define CPPNET2_HEADER_SYSTEM_IEQUATABLE_HPP

namespace CppNet2::System
{
	template<typename T>
	struct IEquatable
	{
		virtual ~IEquatable() = default;

		virtual bool Equals(const T& other) = 0;
	};
}

#endif