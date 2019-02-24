#ifndef CPPNET2_HEADER_CONFIG_HPP
#define CPPNET2_HEADER_CONFIG_HPP

#if defined(_MSC_VER) && defined(CPPNET2_MAKE_SHARED)
#	ifdef CPPNET2_INTERNAL
#		define CPPNET2_EXPORT __declspec(dllexport)
#	else
#		define CPPNET2_EXPORT __declspec(dllimport)
#	endif
#else
#	define CPPNET2_EXPORT
#endif

#endif