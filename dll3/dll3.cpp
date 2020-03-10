#include "dll3.h"

#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

#include "../dll1/dll1.h"

namespace dll3 {
int& f() {
  std::cout << "dll3" << std::endl;
  return dll1::f();
}
}

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved)  // reserved
{
    std::thread::id this_id = std::this_thread::get_id();
    cout << "thread id when entering dll3 dllmain: " << this_id << endl;
    // Perform actions based on the reason for calling.
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize once for each new process.
        // Return FALSE to fail DLL load.
        cout << "DLL_PROCESS_ATTACH" << endl;
        break;

    case DLL_THREAD_ATTACH:
        // Do thread-specific initialization.
        cout << "DLL_THREAD_ATTACH" << endl;
        break;

    case DLL_THREAD_DETACH:
        // Do thread-specific cleanup.
        cout << "DLL_THREAD_DETACH" << endl;
        break;

    case DLL_PROCESS_DETACH:
        // Perform any necessary cleanup.
        cout << "DLL_PROCESS_DETACH" << endl;
        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
