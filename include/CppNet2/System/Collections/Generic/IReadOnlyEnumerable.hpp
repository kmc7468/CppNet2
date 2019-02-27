#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IREADONLYENUMERABLE_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IREADONLYENUMERABLE_HPP

#include <CppNet2/System/Collections/Generic/IReadOnlyEnumerator.hpp>

#include <memory>

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IReadOnlyEnumerable
	{
		virtual ~IReadOnlyEnumerable() = default;

		virtual std::unique_ptr<IReadOnlyEnumerator<T>> GetEnumerator() const = 0;
	};
}

#endif