#include <windows.h>
#include <iostream>

void MainThread() {
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    std::cout << "Nova SS Inicializado en GitHub Codespaces!" << std::endl;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
    }
    return TRUE;
}
