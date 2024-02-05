#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;

//двумерные динамические массивы

void fillDoubleArray(int** arr) {//функция для заполнения массива 
    int size1 = _msize(arr) / sizeof(arr[0]);//функция для вычисления длинны массива с указателями(row)
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);//функция для вычисления длинны вложенного массива(column)
    for (int i = 0; i < size1; i++) {//заполнение двумерного динамического массива 
        for (int j = 0; j < size2; j++) {
            arr[i][j] = random(1, 100);
        }
    }
}

void showDoubleArray(int** arr) {//функция для вывода массива 
    int size1 = _msize(arr) / sizeof(arr[0]);//функция для вычисления длинны массива с указателями(row)
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);//функция для вычисления длинны вложенного массива(column)
    for (int i = 0; i < size1; i++) {//вывод двумерного динамического массива 
        for (int j = 0; j < size2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int* a = nullptr;//пустой указатель 

    int row = 5;//длинна массива-указателя
    int column = 5;//длинна массивов 

    int** array = new int* [row];//создание массивов указателей(указатель на указатель - **)row - количество указателей в массиве указатлелей 

    for (int i = 0; i < row; i++) {//заполнение массива-указателя
        array[i] = new int[column];
    }

    fillDoubleArray(array);
    showDoubleArray(array);
}


