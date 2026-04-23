#pragma once
#include <string>

#ifdef _WIN32
#ifdef BUILD_LEAVER_LIB
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif
#else
#define LEAVER_API
#endif

class LEAVER_API Leaver {
public:
    std::string leave(const std::string& name) const;
};