#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
void SetFont(int size)
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize=sizeof cfi;
	cfi.nFont=0;
	cfi.dwFontSize.X=0;
	cfi.dwFontSize.Y=size;
	cfi.FontFamily=FF_DONTCARE;
	cfi.FontWeight=FW_NORMAL;
	wcscpy_s(cfi.FaceName,L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE),FALSE,&cfi);
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFO consoleCurrentFont;
	GetCurrentConsoleFont(handle,FALSE,&consoleCurrentFont);
}
int main()
{
	int size_you_want;
	cin>>size_you_want;
	system("cls");
	SetFont(size_you_want);
	cout<<"Hello World!";
	return 0;
}
