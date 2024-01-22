#include <iostream>
#define SQR(X) ((X) * (X) * (X))// макрос - Название(аргумент) (Действие)
#define random(min,max) (min + rand() % (max - min + 1)) //макрос для создания рандомного числа 
#define kuropatka(a) ((a>=0)?a:a*-1);
using namespace std;
//глобальная область видимости это все чо за функциями

//int foo(int a , int b ,int c ) { // функция в которую можно передать разное количество аргументов. 
//                                           //перегрузка 1, которая принмает 3 интовых числа
//                                                 //inline пердает функцию в main и ускоряет выполнение кода 
//    return a + b + c;
//}
//
//double foo(double a , double b , double c ) { // функция в которую можно передать разное количество аргументов. 
//                                           //перегрузка 2, которая принмает 3 дабл числа
//                                                 //inline пердает функцию в main и ускоряет выполнение кода 
//    return a + b + c;
//}
//int foo(int a , int b ) { // функция в которую можно передать разное количество аргументов. 
//                                           //перегрузка 3, которая принмает 2 интовых числа
//                                                 //inline пердает функцию в main и ускоряет выполнение кода 
//    return a + b;
//}
//
//double foo(double a, double b) { // функция в которую можно передать разное количество аргументов. 
//                                           //перегрузка 4, которая принмает 2 дабл числа
//                                                 //inline пердает функцию в main и ускоряет выполнение кода 
//    return a + b;
//}

int maxmas(int ar[], const int SIZE) {
    int max = ar[0];
    for (int i = 0; i < SIZE; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }

    return max;
}

double maxmas(double ar[], const int SIZE) {
    double max = ar[0];
    for (int i = 0; i < SIZE; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }

    return max;
}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //cout << foo(12.3, 4.5, 4.7);//функция с перегрузкой
    const int SIZE = 5;
    int ar1[] = { 1,2,6,9,0 };
    double ar2[] = { 1.2,4.2,5.6,1.0,14.3 };
    cout << maxmas(ar2, SIZE);

}


