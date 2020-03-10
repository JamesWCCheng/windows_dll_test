#include "dll1.h"

#include <windows.h>
#include <iostream>
#include <thread>
using namespace std;

namespace {
    int n = 5566;
}

namespace dll1 {
    int& f() {
        std::cout << &n << std::endl;
        return n;
    }
}

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved)  // reserved
{
    std::thread::id this_id = std::this_thread::get_id();
    cout << "thread id when entering dll1 dllmain: " << this_id << endl;
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
