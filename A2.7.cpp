#include <iostream>
using namespace std;
void printAddressOfArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout <<  &arr[i] << endl;   //in dia chi con tro trong ham
	}
}
int main()
{
	int arr[5];
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++)        //in dia chi con tro trong main
	{
		cout  << &arr[i] << endl;
	}
	printAddressOfArray(arr, length);       //in dia chi con tro trong ham
	system("pause");
	return 0;
}
