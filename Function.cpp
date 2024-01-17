#include <iostream>
using namespace std;
//функции
//void - для функции, которая ничего не возвращает

void fullArray(int ar[], const int SIZE);//прототип функции 

void fullArray(int ar[],const int SIZE) {//заполнение массива
    for (int i = 0; i < 10; i++) {
        ar[i] = rand() % 11;
    }
    cout << "Исходный массив: " ;
}

void showArray(int ar[], const int SIZE) {//вывод массива 
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " "; 
    }
}

void showChetArray(int ar[], const int SIZE) {//четные элементы массива
    cout << "Четные элементы ";
    for (int i = 0; i < 10; i++) {
        if (ar[i] % 2 == 0) {
            cout << ar[i] << " ";
        }
    }
}

void showMemory(int ar[]) {//вес массива
    cout << "Вес массива ";
    cout << sizeof(ar) / sizeof(ar[0]);//размер ссылки деленное на вес первого элемента
}

int maxOfStack(int ar[], const int SIZE) {//максимальное значение массива 
    int max = ar[0];
    for (int i = 0; i < 10; i++) {
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
    const int SIZE = 10;
    
    int ar[SIZE];
    
    fullArray(ar, SIZE);
  
    cout << endl;

    showArray(ar, SIZE);
    
    cout << endl;
    
    showChetArray(ar, SIZE);
    
    cout << endl;

    showMemory(ar);

    cout << endl;

    cout << "Максимальный элемент массива: " << maxOfStack(ar, SIZE);

}

