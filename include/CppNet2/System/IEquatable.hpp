#ifndef CPPNET2_HEADER_SYSTEM_IEQUATABLE_HPP
#define CPPNET2_HEADER_SYSTEM_IEQUATABLE_HPP

namespace CppNet2::System
{
	class Boolean;

	template<typename T>
	struct IEquatable
	{
		virtual ~IEquatable() = default;

		virtual Boolean Equals(const T& other) const = 0;
	};
}

#endif