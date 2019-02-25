#include <CppNet2/System/Exception.hpp>

namespace CppNet2::Details::System
{
	ExceptionBase::ExceptionBase(const CppNet2::System::String& message)
		: m_Message(message)
	{}
	ExceptionBase::ExceptionBase(const std::exception& exception)
		: std::exception(exception)
	{}
	ExceptionBase::ExceptionBase(const ExceptionBase& exception)
		: std::exception(exception)
	{}

	ExceptionBase& ExceptionBase::operator=(const std::exception& exception)
	{
		std::exception::operator=(exception);
		return *this;
	}
	ExceptionBase& ExceptionBase::operator=(const ExceptionBase& exception)
	{
		std::exception::operator=(exception);
		return *this;
	}

	const char* ExceptionBase::what() const
	{
		return "CppNet2::System::Exception";
	}

	CppNet2::System::String ExceptionBase::Message() const
	{
		return m_Message;
	}
}

namespace CppNet2::System
{
	Exception::Exception(const String& message)
		: Details::System::ExceptionBase(message)
	{}
	Exception::Exception(const String& message, const Exception& inner_exception)
		: Details::System::ExceptionBase(message), m_InnerException(inner_exception)
	{}
	Exception::Exception(const std::exception& exception)
		: Details::System::ExceptionBase(exception)
	{}
	Exception::Exception(const Exception& exception)
		: Details::System::ExceptionBase(exception), m_InnerException(exception.m_InnerException)
	{}

	Exception& Exception::operator=(const std::exception& exception)
	{
		Details::System::ExceptionBase::operator=(exception);
		m_InnerException = Details::System::ExceptionBase();

		return *this;
	}
	Exception& Exception::operator=(const Exception& exception)
	{
		Details::System::ExceptionBase::operator=(exception);
		m_InnerException = exception.m_InnerException;

		return *this;
	}

	Exception Exception::InnerException() const
	{
		return m_InnerException;
	}
}