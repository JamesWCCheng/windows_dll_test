#pragma once

#ifdef _LIB_DLL3
#define DLL3_API __declspec(dllexport)
#else
#define DLL3_API __declspec(dllimport)
#endif // _LIB_DLL3

namespace dll3 {
DLL3_API int& f();
}
