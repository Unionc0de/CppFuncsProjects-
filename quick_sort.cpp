#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;

//быстрая сортировка 

void fillArray(int* arr) {
    int size = _msize(arr) / sizeof(arr[0]);//Формула для вывода длинны массива
    for (int i = 0; i < size; i++) {
        arr[i] = random(1,100);
    }
}

void showArray(int* arr) {
    int size = _msize(arr) / sizeof(arr[0]);//Формула для вывода длинны массива 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void quickSortRecursive(int* arr, int left, int right) {
    
    if (left >= right) {//проверка для окончания рекурсии
        return;
    }

    
    int wall = left - 1;
    
    for (int i = left; i <= right; i++) {
        if (arr[i] <= arr[right]) {
            ++wall;
            if (i > wall) {
                swap(arr[i], arr[wall]);
            }
        }
    }
    
    quickSortRecursive(arr, left, wall - 1);// для левой части массива
    quickSortRecursive(arr, wall + 1, right);

}


void quickSort(int* arr) {
    int size = _msize(arr) / sizeof(arr[0]);
    quickSortRecursive(arr, 0, size - 1);
}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    
    int* array = new int[20];

    fillArray(array);
    showArray(array);
    cout << endl;
    quickSort(array);
    showArray(array);
}

