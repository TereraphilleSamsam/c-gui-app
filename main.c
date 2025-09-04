#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
    MessageBox(NULL, "Hello, Windows 7!", "My First GUI App", MB_OK | MB_ICONINFORMATION);
    return 0;
}