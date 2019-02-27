#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HPP

#include <CppNet2/System/Collections/Generic/IReadOnlyEnumerator.hpp>

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IEnumerator : virtual IReadOnlyEnumerator<T>
	{
		virtual ~IEnumerator() override = default;

		virtual T& Current() = 0;
	};
}

#endif