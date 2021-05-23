#include <iostream>
using namespace std;
char* weird_string() {
	char c[] = "123456";
	return c;
}
int main()
{
	char* a = new char[10];
	a = weird_string();
	cout << a;
	return 0;
	//khong xuat hien output
}
