#include <stdio.h>
#include <windows.h>

int main() {
    int x[] = { 100, 200, 300, 400, 500 };
    int y[] = { 50, 100, 150, 200, 250 };
    int width[] = { 200, 300, 400, 500, 600 };
    int height[] = { 150, 200, 250, 300, 350 };
    COLORREF color[] = { RGB(255, 0, 0), RGB(0, 255, 0), RGB(0, 0, 255), RGB(255, 255, 0), RGB(255, 0, 255) };
    int numWindows = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < numWindows; i++) {
        HWND hWnd = NULL;
        HDC hdc = NULL;

        hWnd = FindWindow(NULL, "My Window");
        if (hWnd == NULL) {
            MessageBox(NULL, "Window not found!", "Error", MB_OK);
            return 1;
        }

        hdc = GetDC(hWnd);
        if (hdc == NULL) {
            MessageBox(NULL, "Failed to get device context!", "Error", MB_OK);
            return 1;
        }

        RECT rect;
        rect.left = x[i];
        rect.top = y[i];
        rect.right = rect.left + width[i];
        rect.bottom = rect.top + height[i];

        HBRUSH hBrush = CreateSolidBrush(color[i]);
        if (hBrush == NULL) {
            MessageBox(NULL, "Failed to create brush!", "Error", MB_OK);
            return 1;
        }

        FillRect(hdc, &rect, hBrush);
        ReleaseDC(hWnd, hdc);
        Sleep(1000);
    }

    return 0;
}