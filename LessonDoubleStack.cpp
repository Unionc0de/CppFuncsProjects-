#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	
	//int ar[10][5] = {};//#1
	//int r = 0;
	//for (int i = 0; i < 10; i++) {
	//	cout << endl;
	//	for (int j = 0; j < 5; j++) {
	//		r = 10 + rand() % 99+1-10;
	//		ar[i][j] = r;
	//		cout << ar[i][j]<<" ";

	//	}
	//}

	//int archet[50];//#2
	//int c1 = 0;
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		if (ar[i][j] % 2 == 0) {
	//			archet[c1++] = ar[i][j];
	//		}

	//	}
	//}
	//
	//cout << endl;
	//cout << "-------------------------------------------------------------------------------";
	//cout << endl;
	//cout << "Четные числа первого массива: ";
	//cout << endl;
	//
	//for (int i = 0; i < c1; i++) {
	//	cout << archet[i] << " ";
	//}

	//int arsum[10];
	//int sum = 0;

	//cout << endl;
	//cout << "-------------------------------------------------------------------------------";
	//cout << endl;
	//cout << "Сумма чисел строк первого массива: ";
	//cout << endl;
	//
	//for (int i = 0,k=0; i < 10; i++) {//#3
	//	sum = 0;
	//	for (int j = 0; j < 5; j++) {
	//		sum += ar[i][j];
	//	}
	//	arsum[k++] = sum;
	//	cout << arsum[k - 1]<<" ";
	//}

	//int arsr[50];
	//float sr = 0;

	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		sr += ar[i][j];
	//	}
	//}
	//sr = sr / 50;

	//cout << endl;
	//cout << "-------------------------------------------------------------------------------";
	//cout << endl;
	//cout << "Среднеарифметическое: ";
	//cout << sr;
	//cout << endl;
	//cout << "Числа, которые больше среднеарфетического первого массива: ";
	//cout << endl;

	//int k = 0;
	//for (int i = 0; i < 10; i++) {//#4
	//	for (int j = 0; j < 5; j++) {
	//		if (ar[i][j] > sr) {
	//			arsr[k++] = ar[i][j];
	//		}
	//	}
	//}

	//for (int i = 0; i < k; i++) {
	//	cout << arsr[i] << " ";
	//}

	//int ar[4][4];//#6
	//int arcor[5][2];
	//int arznach[5];

	//cout << "Исходный массив ";
	//for (int i = 0; i < 4; i++) {
	//	cout << endl;
	//	for (int j = 0; j < 4; j++) {
	//		int r= 10 + rand() % 99 + 1 - 10;
	//		ar[i][j] = r;
	//		cout << ar[i][j] << " ";
	//	}
	//	
	//}
	//
	//cout << endl;
	//cout << "Координаты ";
	//cout << endl;

	//for (int i = 0; i < 5; i++) {
	//	cout << endl;
	//	for (int j = 0; j < 2; j++) {
	//		int r = 1 + rand() % 3 + 1 - 1;
	//		arcor[i][j] = r;
	//		cout << arcor[i][j] << " ";
	//	}
	//}
	//
	//cout << endl;
	//cout << "Значения ";
	//cout << endl;
	//
	//for (int i = 0; i < 5; i++) {
	//	int r = 1 + rand() % 9 + 1 - 1;
	//	arznach[i]= r;
	//	cout << arznach[i] << " ";
	//}

	//for (int i = 0; i < 5;i++) {
	//	ar[arcor[i][0]][arcor[i][1]] = arznach[i];
	//}
	//cout << endl;
	//cout << "Измененный массив:";
	//for (int i = 0; i < 4; i++) {
	//	cout << endl;
	//	for (int j = 0; j < 4; j++) {
	//		cout << ar[i][j] << " ";
	//	}
	//}

	int ar[4][4];

	cout << "Исходный массив ";
	
	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			int r= 1 + rand() % 9 + 1 - 1;
			ar[i][j] = r;
			cout << ar[i][j] << " ";
		}	
	}

	cout << endl;
	cout << "Измененный массив";

	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			ar[i][j] += ar[i][j + 1];
			
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout << ar[i][j] << " ";
		}
	}

	cout << endl;
	cout << "Измененный массив 2";

	for (int i = 0; i < 4; i++) {
		ar[i][4-1] += ar[i][0];
	}

	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout << ar[i][j] << " ";
		}
	}


	





	


	

}


