#ifndef CPPNET2_HEADER_PROPERTY_HPP
#define CPPNET2_HEADER_PROPERTY_HPP

#include <functional>
#include <type_traits>
#include <utility>

namespace CppNet2
{
	template<typename T, typename GetterRet, typename SetterArg, bool GetterNoexcept = false, bool SetterNoexcept = false>
	class Property
	{
	public:
		template<typename Getter, typename Setter>
		Property(Getter&& getter, Setter&& setter) noexcept
			: m_Getter(std::forward<Getter>(getter)), m_Setter(std::forward<Setter>(setter))
		{}
		Property(const Property&) = delete;
		~Property() = default;

	public:
		template<typename T>
		void operator=(T&& value) noexcept(SetterNoexcept)
		{
			m_Setter(std::forward<T>(value));
		}
		operator GetterRet() const noexcept(GetterNoexcept)
		{
			return m_Getter();
		}

	private:
		std::function<GetterRet()> m_Getter;
		std::function<void(SetterArg)> m_Setter;
	};

	template<typename T, typename GetterRet, bool GetterNoexcept = false>
	class ReadonlyProperty
	{
	public:
		template<typename Getter>
		ReadonlyProperty(Getter&& getter) noexcept
			: m_Getter(std::forward<Getter>(getter))
		{}
		ReadonlyProperty(const ReadonlyProperty&) = delete;
		~ReadonlyProperty() = default;

	public:
		ReadonlyProperty& operator=(const ReadonlyProperty&) = delete;
		operator GetterRet() const noexcept(GetterNoexcept)
		{
			return m_Getter();
		}

	private:
		std::function<GetterRet()> m_Getter;
	};
}

#endif