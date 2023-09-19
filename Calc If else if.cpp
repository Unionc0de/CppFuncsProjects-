

#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "rus");
	float a,b ; 
	char c;
	cout << "Введите числа\n";
	cin >> a;
	cin >> b;
	cout << "Введите действие:\n + - Сложение \n - - Вычитание \n * - Умножение \n / - Деление\n";
	cin >> c;
	
	if (c == '+') {
		cout << "Результат: \n";
		cout << a + b;
	}

	else if (c == '-') {
		cout << "Результат: \n";
		cout << a - b;
	}

	else if (c == '*') {
		cout << "Результат: \n";
		cout << a * b;
	}

	else if  (c == '/') 
	{
		if (b == 0) {
			cout << "На ноль делить нельзя";
		}
		else {
			cout << "Результат: \n";
			cout << a / b;
		}
		
	}
}






