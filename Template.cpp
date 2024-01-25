#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;

//template<typename T1, typename T2>//шаблон для определения типа данных в функций 
//T1 summa(T1 num1, T2 num2) {
//    return num1 + num2;
//}

//template<typename T>//сумма элементов массива 
//T sumStack(T ar[], const int SIZE) {
//    T sum = 0;
//    for (int i = 0; i < SIZE; i++) {
//        sum += ar[i];
//    }
//    return sum;
//}

//template<typename T>//Заполнение массива всех типов данных 
//void fullStack(T ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = random(-100, 100);
//        cout << ar[i] << " ";
//    }
//}

//рекурсия это вызов функции внутри этой же функции 

void fact(int a,int k) {//рекурсия прямая по нахождению факториала(функция вызывает саму себя) 
    k++;
    if (k > a) cout << a;
    fact(a-1,k);
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    //cout <<typeid(summa(1.2, 2.7)).name()<<endl;//вывод типа данных
    //cout << summa(1.2, 2.7);
    /*const int SIZE = 10;
    int ar1[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
    double ar2[SIZE] = { 1.2,3.4,6.7,1.9,0.2,4.2,6.7,4.2,4.4,6.5 };
    cout << sumStack(ar1, SIZE);*/
    /*const int SIZE = 10;
    int ar3[SIZE];
    double ar4[SIZE];
    fullStack(ar3, SIZE);*/
    int k = 0;
    fact(5,k);

}


