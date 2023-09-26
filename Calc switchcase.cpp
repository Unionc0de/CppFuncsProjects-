// Dzshka2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    
    int b,c;
    
    char a;
    cout << "Введите действие:\n ";
    cin >> a;
    cout << "Введите числа\n";
    cin >> b;
    cin >> c;
    

    switch (a) {
    case '+':
        cout << b + c;
        break;
    case '-':
        cout << b - c;
        break;
    case '*':
        cout << b * c;
        break;
    case '/':
        if (c == 0) cout << "На ноль делить нельзя";

        else cout << b / c;
        
        break;
    default:
        cout << "Введено неверное действие ";






    }


    
    





}


