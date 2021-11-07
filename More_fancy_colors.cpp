#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	for (int i=1;i<=INT_MAX/4096;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|i);
		cout<<"Testing:"<<i<<endl;
	}
	return 0;
}
