#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

const int SIZE1 = 5;
const int SIZE2 = 5;
const int SIZE3 = 15;

int pluus(int a, int b) {//калькулятор с функциями и перегрузками 
    return a + b;
}

double pluus(double a, double b) {
    return a + b;
}

int minuse(int a, int b) {
    return a - b;
}

double minuse(double a, double b) {
    return a - b;
}

int umn(int a, int b) {
    return a * b;
}

double umn(double a, double b) {
    return a * b;
}

int delit(int a, int b) {
    return a / b;
}

double delit(double a, double b) {
    return a / b;
}

int kuropatka(int a, int b, char dev) {
    int result = 0;
    if (dev == '+') {
        return result = pluus(a, b);
    }

    else if (dev == '-') {
        return  result = minuse(a, b);
    }

    else if (dev == '*') {
        return result = umn(a, b);
    }

    else if (dev ==  '/') {
        return  result = delit(a, b);
    }

    else {
        return 0;
    }
}

double kuropatka(double a, double b, char dev) {
    double result = 0;
    if (dev == '+') {
        return result = pluus(a, b);
    }

    else if (dev == '-') {
        return  result = minuse(a, b);
    }

    else if (dev == '*') {
        return result = umn(a, b);
    }

    else if (dev == '/') {
        return  result = delit(a, b);
    }

    else {
        return 0;
    }
}
//void fillAr(int arr[][5], const int SIZE) { // перегрузка для двумерного 
// int SIZE2 = sizeof(arr[0])/sizeof(arr[0][0]);   
// for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE2; j++) {
//            arr[i][j] = random(1,99);
//        }
//    }
//}
//
//void ShowAr(int arr[][5], const int SIZE) {//перегрузка для двумерного
//    int SIZE2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//    for (int i = 0, k = 1; i < SIZE; i++) {
//        for (int j = 0; j < SIZE2; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void fillAr(int arr[], const int SIZE) {//перегрузка для одномерного 
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = random(1, 100);
//    }
//    
//}
//
//void ShowAr(int arr[], const int SIZE) {//перегрузка для одномерного
//    for (int i = 0, k = 1; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//}

int main()
{
    /*int arr[SIZE1][SIZE2];
    int ar2[SIZE3];
    fillAr(arr, SIZE1);
    ShowAr(arr, SIZE1);
    int num;
    cin >> num;
    int ar[SIZE3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};*/
    int a;
    int b;
    char dev;
    cin >> a;
    cin >> b;
    cin >> dev;
    cout << kuropatka(a, b, dev);



}



