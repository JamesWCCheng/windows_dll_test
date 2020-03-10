#pragma once

#ifdef _LIB_DLL2
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllimport)
#endif // _LIB_DLL2

namespace dll2 {
DLL2_API int& f();
}
