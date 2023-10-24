#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	/*int sum = 0;

	for (int i = 10; i <= 20; i++) {
		sum += i;
	}

	cout << sum;*/


	/*int min, max,r;
	cin >> min >> max;
	srand((time, NULL));
	for (int i = 0; i <= 10; i++) {
		r = min + rand() % (max + 1 - min);
		cout << r << " ";

	}*/

	/*int min, max, r, min2, max2 ;
	cin >> min >> max;
	min2 = max;
	max2 = min;
	srand((time, NULL));
	for (int i = 0; i <= 10; i++) {
		r = min + rand() % (max + 1 - min);
		cout << r << "\n";
		if (min2 < r) {
			min2 = r;
		}
		else if (max2 > r) {
			max2 = r;
		}

	}
	cout << min2 << " " << max2 << endl;*/

	/*int a, b; #1
	cin >> a >> b;
	for (float i = a; i <= b; i += 0.5) {
		cout << i << " ";
	}*/

	/*int a, b;#2
	cin >> a >> b;
	for (int i = b; i >= a; i--) {
		cout << i << " ";

	}*/

	/*int a, b;#3
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 5 == 0) {
			cout << i << " ";
		}
	}*/

	srand(time (NULL));
	int ran1, ran2, ran3, ran4,win1=0,win2=0,sum1 = 0, sum2 = 0;

	for (int i = 0; i <= 5; i++) {
		if (win1 == 3 || win2 == 3) {
			if (win1 > win2) {
				cout << "\nПобедил игрок";
				cout << "\nСчет:" << win1 << ":" << win2;
				break;
			}
			else {
				cout << "\nПобедил компьютер";
				cout << "\nСчет:" << win2 << ":" << win1;
				break;
			}
		}
	
	ran1 = 1 + rand() % (6 + 1 - 1);
	ran2 = 1 + rand() % (6 + 1 - 1);
	ran3 = 1 + rand() % (6 + 1 - 1);
	ran4 = 1 + rand() % (6 + 1 - 1);
	
	sum1 = ran1 + ran2;
	sum2 = ran3 + ran4;

	system("\npause");
	cout << "\nВам выпало: " << ran1 << "," << ran2;
	
	if (ran1 == ran2) {
		sum1 = sum1 * 2;
		cout << "\nДубль!";
	}

	cout << "\nХод компьютера";
	cout << "\nКомпьютеру выпало:" << ran3 <<"," << ran4;

	if (ran3 == ran4) {
		sum2 = sum2 * 2;
		cout << "\nДубль!";
	}

	if (sum1 == sum2) {
		cout << "\nНичья";
		cout << "\nСчет: " << win1 <<":" << win2;
	}

	if (sum1 > sum2) {
		++win1;
		cout << "\nПобедил игрок";
		cout << "\nСчет: " << win1 << ":" << win2;
	}

	if (sum1 < sum2) {
		++win2;
		cout << "\nПобедил компьютер";
		cout << "\nСчет: " << win1 << ":" << win2;
	}
	







	}
	
	
	

	

}	

