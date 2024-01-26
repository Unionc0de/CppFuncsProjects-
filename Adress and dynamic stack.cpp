#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;
//динамические массивы и heap(куча)
//указатели * - содержимое указателя, & - адрес переменной. У указателя тот же тип, что и у переменной 


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //int a = 7;
    //cout << &a;//просмотр адресса переменной а
    //int* pa = &a;//создания указателя для переменной a 
    //cout << *pa << endl;//просмотр содержимового указателя 
    //cout << &pa << endl;//просмотр адреса указателя

    /*int a = 15; //#1 - проверка какое больше 
    int b = 9;
    int* pa = &a;
    int* pb = &b;
    
    if (*pa > *pb) {
        cout << *pa;
    }

    else {
        cout << *pb;
    }*/

    /*int a = -15;//#2  - проверка знака числа 
    int* pa = &a;
    if (*pa >= 1) {
        cout << "+";
    }
    else {
        cout << "-";
    }*/

    //int a = 15; //#3 - поменять местами значения 
    //int b = 9;
    //int* pa = &a;
    //int* pb = &b;
    //swap(*pa, *pb);
    //cout << *pa << endl;
    //cout << *pb << endl;

    //int a = 15; //#4 - примитивный калькулятор 
    //int b = 9;
    //char dev;
    //cin >> dev;
    //int* pa = &a;
    //int* pb = &b;
    //char* pdev = &dev;

    //switch(*pdev) {
    //case '+':
    //    cout << *pa + *pb;
    //    break;
    //case '-':
    //    cout << *pa - *pb;
    //    break;
    //case '*':
    //    cout << *pa * *pb;
    //    break;
    //case '/':
    //    cout << *pa / *pb;
    //    break;
    //}
    
    //динамический массив
    
    //int* ar1 = new int[3]{ 3,4,5 };//создание динамического массива через оператор new
    //int sum = 0;
    ////cout << *(ar1 + n)/cout << ar1[0]; - вывод n элемента массива 

    //for (int i = 0; i < 3; i++) { //подсчет суммы элементов в массиве через адресы 
    //    sum += *(ar1 + i);
    //}

    //cout << sum;

   /* int ar[20]; // создание динамического массива для чисел из первого массива кратных 5
    int size = 0;

    for (int i = 0; i < 20; i++) {
        ar[i] = random(10, 99);
        if (ar[i] % 5 == 0) {
            size++;
        }
        cout << ar[i] << " ";
    }

    cout << endl;
    int* ar2 = new int[size];

    for (int i = 0,k=0; i < size; i++) {
        if (ar[i] % 5 == 0) {
            ar2[k++] = ar[i];
        }  
    }

    for (int i = 0; i < size; i++) {
        cout << *(ar2+i);
    }*/

    //int ar[20]; // создание динамического массива для чисел из первого массива которые больше среднеарифметического первого массива 
    //int size = 0;
    //int sr = 0;


    //for (int i = 0; i < 20; i++) {
    //    ar[i] = random(10, 99);
    //    sr += ar[i];
    //    cout << ar[i] << " ";
    //}

    //for (int i = 0; i < 20; i++) {
    //    if (ar[i] > (sr / 20)) {
    //        size++;
    //    }
    //}

    //cout << endl;
    //int* ar2 = new int[size];

    //for (int i = 0,k=0; i < 20; i++) {
    //    if (ar[i] > (sr / 20)){
    //        ar2[k++] = ar[i];
    //    }
    //}
    //
    //cout << "sr " << sr/20 << endl;

    //for (int i = 0; i < size; i++) {
    //    cout << *(ar2 + i)<<" ";
    //}

    int ar[20];
    for (int i = 0; i < 20; i++) {
        ar[i] = random(10, 99);
        if (ar[i] % 5 == 0) {
        }
        cout << ar[i] << " ";
    }

    cout << endl;

    int* ar2 = new int[20];

    for (int i = 20, k = 0; i > 0; i--) {
        ar2[k++] = ar[i];
    }

    for (int i = 0; i < 20; i++) {
        cout << ar2[i] << " ";
    }





    

}

