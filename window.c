#include<windows.h>

int WINAPI WinMain(
		HINSTANCE hInstance ,
		HINSTANCE hPrevInstance ,
		PSTR lpCmdLine ,
		int nCmdShow ) {
	HWND hwnd = CreateWindow(
			TEXT("STATIC") , TEXT("Kitty on your lap") ,
			WS_CAPTION ,
			50 , 50 , 400 , 400 , NULL , NULL ,
			hInstance , NULL
	);

	if (hwnd == NULL) return 0;

	ShowWindow(hwnd , SW_SHOW);
	MessageBox(NULL , TEXT("Kitty on your lap") ,
			TEXT("Kitty") , MB_ICONINFORMATION);

	return 0;
}