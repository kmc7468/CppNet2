#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HPP

#include <CppNet2/System/Collections/Generic/IEnumerator.hpp>
#include <CppNet2/System/Collections/Generic/IReadOnlyEnumerable.hpp>

#include <memory>

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IEnumerable : virtual IReadOnlyEnumerable<T>
	{
		virtual ~IEnumerable() override = default;

		using IReadOnlyEnumerable<T>::GetEnumerator;
		virtual std::unique_ptr<IEnumerator<T>> GetEnumerator() = 0;
	};
}

#endif