#include <iostream>
#include <thread>

using namespace std;

//#include "../dll1/dll1.h"
#include "../dll2/dll2.h"
#include "../dll3/dll3.h"

int main() {
    std::thread::id this_id = std::this_thread::get_id();
    cout << "main thread id: " << this_id << endl;
    cout << "thread1 in" << endl;
    std::thread t([]() {
        // print DLL_THREAD_ATTACH
        std::thread::id this_id = std::this_thread::get_id();
        cout << "Thread1 Run, id:" << this_id << endl;
        std::cout << dll2::f() << std::endl;
        std::cout << dll3::f() << std::endl;
    });
    t.join();
    // print DLL_THREAD_DETACH
    cout << "thread1 out" << endl;

    cout << "thread2 in" << endl;
    std::thread t2([]() {
        // print DLL_THREAD_ATTACH
        std::thread::id this_id = std::this_thread::get_id();
        cout << "Thread2 Run, id:" << this_id << endl;
        std::cout << dll2::f() << std::endl;
        std::cout << dll3::f() << std::endl;
    });
    t2.join();
    // print DLL_THREAD_DETACH
    cout << "thread2 out" << endl;

    //std::cout << dll1::f() << std::endl;
    std::cout << dll2::f() << std::endl;
    std::cout << dll3::f() << std::endl;

    //std::cout << "==" << std::endl;
    //dll1::f() = 1;
    //std::cout << dll1::f() << std::endl;
    //std::cout << dll2::f() << std::endl;
    //std::cout << dll3::f() << std::endl;

    std::cout << "==" << std::endl;
    dll2::f() = 2;
    //std::cout << dll1::f() << std::endl;
    std::cout << dll2::f() << std::endl;
    std::cout << dll3::f() << std::endl;

    std::cout << "==" << std::endl;
    dll3::f() = 3;
    //std::cout << dll1::f() << std::endl;
    std::cout << dll2::f() << std::endl;
    std::cout << dll3::f() << std::endl;

    return 0;
}
