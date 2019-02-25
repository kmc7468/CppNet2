#include <CppNet2/System/ArgumentException.hpp>

namespace CppNet2::System
{
	ArgumentException::ArgumentException(const String& message, const String& param)
		: Exception(message), m_ParamName(param)
	{}
	ArgumentException::ArgumentException(const String& message, const String& param, const Exception& inner_exception)
		: Exception(message, inner_exception), m_ParamName(param)
	{}
	ArgumentException::ArgumentException(const ArgumentException& exception)
		: Exception(exception), m_ParamName(exception.m_ParamName)
	{}

	ArgumentException& ArgumentException::operator=(const ArgumentException& exception)
	{
		Exception::operator=(exception);
		m_ParamName = exception.m_ParamName;

		return *this;
	}

	String ArgumentException::ParamName() const
	{
		return m_ParamName;
	}
}