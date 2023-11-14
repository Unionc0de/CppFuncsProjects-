

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    const int size = 10;
    /*int ar[size] = {};//Копирование массива в другой массив 
    int ar2[size];
    
    for (int i = 0; i < size; i++) {
        ar2[i] = 1 + rand() % 10;
        cout << ar2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        ar[i] = ar2[i];
        cout << ar[i] << " " ;
        
    }*/
    
    //int ar[size] = {};//Копирование массива в другой массив и вывод в обратную сторону 
    //int ar2[size];

    //for (int i = 0; i < size; i++) {
    //    ar2[i] = 1 + rand() % 10;
    //    cout << ar2[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < size; i++) {
    //    ar[i] = ar2[i];
    //    cout << ar[i] << " ";
    //}

    //cout << endl;

    //for (int i = size - 1; i >= 0; i--) {
    //    cout << ar2[i] << " ";
    //}


    //int ar[size] = {};//Копирование нечетных чисел первого массива в другой массив 
    //int ar2[size]={};

    //for (int i = 0; i < size; i++) {
    //    ar[i] = 1 + rand() % 10;
    //    cout << ar[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0,c=0; i < size; i++) {
    //    if (ar[i] % 2 > 0){ 
    //        ar2[c++] = ar[i];
    //    }
    //}
    //
    //for (int i = 0; i < size; i++) {
    //    cout << ar2[i] << " ";
    //}

    /*int ar[size] = {};//количество определенных элементов в массиве через другой массив
    int ar2[size] = {};

    for (int i = 0; i < size; i++) {
        ar[i] = rand() % 10;
        cout << ar[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        int c = 0;
        for (int j = 0; j < size; j++) {
            if (ar[j] == i) {
                ar2[i]++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        
        cout << ar2[i] << " ";
    }*/
    
    /*int ar[size] = {}; //переворот массива через swap
    int ar2[size] = {};

    for (int i = 0; i < size; i++) {
        ar[i] = rand() % 10;
        cout << ar[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size/2; i++) {
        swap(ar[i], ar[size-1-i]);
        
    }

    for (int i = 0; i < size; i++){
        cout << ar[i] << " ";
    }*/

    int ar[size] = {}; 
    int ar2[size] = {};
    int ar3[size] = {};

    for (int i = 0; i < size; i++) {
        ar[i] = rand() % 10;
        cout << ar[i] << " ";
    }
    bool flag = true;
    bool flag2 = true;
    for (int i = 0,k=0; i < size; i++) { //элементы которые повторяются в новый массив 
        for(int j = i+1;j < size;j++)
            if (ar[i] == ar[j]) {
                flag = true;
                for(int s = 0;s<k;s++){
                    if (ar2[s] == ar[i]) {
                        flag = false;
                    }
                }
                if (flag) {
                    ar2[k++] = { ar[i] };
                }
            }
    }


    for (int i = 0; i < size; i++){
        cout << ar2[i] << " ";
    }

    cout << endl;


    















}

