#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IREADONLYENUMERATOR_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IREADONLYENUMERATOR_HPP

#include <CppNet2/System/IDisposable.hpp>

namespace CppNet2::System
{
	class Boolean;
}

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IReadOnlyEnumerator : virtual IDisposable
	{
		virtual ~IReadOnlyEnumerator() = default;

		virtual Boolean MoveNext() = 0;
		virtual void Reset() = 0;

		virtual const T& Current() const = 0;
	};
}

#endif