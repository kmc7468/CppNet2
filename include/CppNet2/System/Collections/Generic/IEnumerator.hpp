#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HPP

#include <CppNet2/System/IDisposable.hpp>

namespace CppNet2::System
{
	class Boolean;
}

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IEnumeratorConst : virtual IDisposable
	{
		virtual ~IEnumeratorConst() = default;

		virtual Boolean MoveNext() = 0;
		virtual void Reset() = 0;

		virtual const T& Current() const = 0;
	};

	template<typename T>
	struct IEnumerator : virtual IEnumeratorConst<T>
	{
		virtual ~IEnumerator() override = default;

		virtual T& Current() = 0;
	};
}

#endif