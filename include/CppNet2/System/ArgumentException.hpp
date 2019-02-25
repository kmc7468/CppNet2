#ifndef CPPNET2_HEADER_SYSTEM_ARGUMENTEXCEPTION_HPP
#define CPPNET2_HEADER_SYSTEM_ARGUMENTEXCEPTION_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Exception.hpp>
#include <CppNet2/System/String.hpp>

namespace CppNet2::System
{
	class CPPNET2_EXPORT ArgumentException : public Exception
	{
	public:
		using Exception::Exception;
		ArgumentException(const String& message, const String& param);
		ArgumentException(const String& message, const String& param, const Exception& inner_exception);
		ArgumentException(const ArgumentException& exception);
		virtual ~ArgumentException() override = default;

	public:
		ArgumentException& operator=(const ArgumentException& exception);

	public:
		virtual String ParamName() const;

	private:
		String m_ParamName;
	};
}

#endif