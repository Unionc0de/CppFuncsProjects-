#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    
    int a,b,c;
    
    cout << "Введите действие:\n1 - сложение \n2 - вычитание \n3 - умножение \n4 - деление ";
    cin >> a;
    cout << "Введите числа\n";
    cin >> b;
    cin >> c;
    

    switch (a) {
    case 1:
        cout << b + c;
        break;
    case 2:
        cout << b - c;
        break;
    case 3:
        cout << b * c;
        break;
    case 4:
        cout << b / c;
        break;
    default:
        cout << "Введено неверное действие ";
