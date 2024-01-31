#include <iostream>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	const int SIZE = 10;
//	int* array = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
//	cout << "До добавления - " << endl;
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//	int* buf = new int[SIZE + 1];
//
//	for (int i = 0; i < SIZE; i++) {
//		buf[i] = array[i];
//	}
//	buf[SIZE] = 99;
//
//	delete[] array;
//	array = buf;
//	cout << endl <<"после добавления - " << endl;
//	for (int i = 0; i < SIZE + 1; i++) {
//		cout << array[i] << " ";
//	}
//}


void showarr(int* arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void addel(int* &arr, int num) {
	int size = _msize(arr) / sizeof(arr[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = arr[i];
	}
	buf[size] = num;
	delete[] arr;
	arr = buf;
}
int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 10;
	int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };
	showarr(arr);
	cout << endl;
	addel(arr,99);
	addel(arr, 1444);
	showarr(arr);
}
