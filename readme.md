# Output by this test application

```
thread id when entering dll1 dllmain: 13352
DLL_PROCESS_ATTACH
thread id when entering dll2 dllmain: 13352
DLL_PROCESS_ATTACH
thread id when entering dll3 dllmain: 13352
DLL_PROCESS_ATTACH
main thread id: 13352
thread1 in
thread id when entering dll2 dllmain: 15960
DLL_THREAD_ATTACH
thread id when entering dll3 dllmain: 15960
DLL_THREAD_ATTACH
thread id when entering dll1 dllmain: 15960
DLL_THREAD_ATTACH
Thread1 Run, id:15960
dll2
00007FFF3477D000
5566
dll3
00007FFF3477D000
5566
thread id when entering dll3 dllmain: 15960
DLL_THREAD_DETACH
thread id when entering dll2 dllmain: 15960
DLL_THREAD_DETACH
thread id when entering dll1 dllmain: 15960
DLL_THREAD_DETACH
thread1 out
thread2 in
thread id when entering dll2 dllmain: 13768
DLL_THREAD_ATTACH
thread id when entering dll3 dllmain: 13768
DLL_THREAD_ATTACH
thread id when entering dll1 dllmain: 13768
DLL_THREAD_ATTACH
Thread2 Run, id:13768
dll2
00007FFF3477D000
5566
dll3
00007FFF3477D000
5566
thread id when entering dll3 dllmain: 13768
DLL_THREAD_DETACH
thread id when entering dll2 dllmain: 13768
DLL_THREAD_DETACH
thread id when entering dll1 dllmain: 13768
DLL_THREAD_DETACH
thread2 out
dll2
00007FFF3477D000
5566
dll3
00007FFF3477D000
5566
==
dll2
00007FFF3477D000
dll2
00007FFF3477D000
2
dll3
00007FFF3477D000
2
==
dll3
00007FFF3477D000
dll2
00007FFF3477D000
3
dll3
00007FFF3477D000
3
thread id when entering dll3 dllmain: 13352
DLL_PROCESS_DETACH
thread id when entering dll2 dllmain: 13352
DLL_PROCESS_DETACH
thread id when entering dll1 dllmain: 13352
DLL_PROCESS_DETACH
```