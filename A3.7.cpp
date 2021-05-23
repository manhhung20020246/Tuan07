#include <iostream>
#include <array>
using namespace std;
void even(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0){
			cout << arr[i] << " ";
		}
	}
}
int main()
{
	int arr[5];
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
		even(arr, length);
	system("pause");
	return 0;
}
