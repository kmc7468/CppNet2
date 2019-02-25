#ifndef CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HPP
#define CPPNET2_HEADER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HPP

#include <CppNet2/System/Collections/Generic/IEnumerator.hpp>

#include <memory>

namespace CppNet2::System::Collections::Generic
{
	template<typename T>
	struct IEnumerableConst
	{
		virtual ~IEnumerableConst() = default;

		virtual std::unique_ptr<IEnumeratorConst<T>> GetEnumerator() const = 0;
	};

	template<typename T>
	struct IEnumerable : virtual IEnumerableConst<T>
	{
		virtual ~IEnumerable() override = default;

		virtual std::unique_ptr<IEnumerator<T>> GetEnumerator() = 0;
	};
}

#endif