#pragma once

#ifdef _LIB_DLL1
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif // _LIB_DLL1

namespace dll1 {
DLL1_API int& f();
}
