#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 10;
//Утечка памяти - потеря доступа к информации 

void addElement(int* &arr, int num) {//Функция для добавления одного элемента к массиву
   int size = _msize(arr) / sizeof(arr[0]);//вычесление длинны нового массива 
   int* buf = new int[size + 1];//иницилизация второго массива 
   
   for (int i = 0; i < size; i++) {//копирование 
       buf[i] = arr[i];
   }

   buf[size] = num;//добавление элемента

   delete[]arr;// очистка памяти 

   arr = buf;//присваевание указателя новому массиву      
}

void showArray(int* arr) {
    int size = _msize(arr)/sizeof(arr[0]);//Формула для вывода длинны массива 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void swapAr(int*& arr) {
    int size = _msize(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //int* buryat = new int;//выделение памяти
    //*buryat = 5; // Создания значения 

    //cout << buryat << " " << *buryat;//вывод адреса и содержания 

    int* ar = new int[SIZE]{1,2,3,4,5,6,7,8,9,0};
    
   /* showArray(ar);
    addElement(ar, 123);
    addElement(ar, 90);
    addElement(ar, 39);
    addElement(ar, 1);
    addElement(ar, 99);
    cout << endl;
    showArray(ar);*/

    swapAr(ar);
    showArray(ar);
}
