#ifndef CPPNET2_HEADER_SYSTEM_EXCEPTION_HPP
#define CPPNET2_HEADER_SYSTEM_EXCEPTION_HPP
#include <CppNet2/Config.hpp>

#include <CppNet2/System/Object.hpp>
#include <CppNet2/System/String.hpp>

#include <exception>

namespace CppNet2::System
{
	class Exception;
}

namespace CppNet2::Details::System
{
	class CPPNET2_EXPORT ExceptionBase : public CppNet2::System::Object, public std::exception
	{
	public:
		ExceptionBase() noexcept = default;
		explicit ExceptionBase(const CppNet2::System::String& message);
		ExceptionBase(const std::exception& exception);
		ExceptionBase(const ExceptionBase& exception);
		virtual ~ExceptionBase() override = default;

	public:
		ExceptionBase& operator=(const std::exception& exception);
		ExceptionBase& operator=(const ExceptionBase& exception);

	private:
		virtual const char* what() const override;

	public:
		virtual CppNet2::System::String Message() const; 

	private:
		CppNet2::System::String m_Message;
	};
}

namespace CppNet2::System
{
	class CPPNET2_EXPORT Exception : public Details::System::ExceptionBase
	{
	public:
		Exception() noexcept = default;
		explicit Exception(const String& message);
		Exception(const String& message, const Exception& inner_exception);
		Exception(const std::exception& exception);
		Exception(const Exception& exception);
		virtual ~Exception() override = default;

	public:
		Exception& operator=(const std::exception& exception);
		Exception& operator=(const Exception& exception);

	public:
		Exception InnerException() const;
		
	private:
		Details::System::ExceptionBase m_InnerException;
	};
}

#endif