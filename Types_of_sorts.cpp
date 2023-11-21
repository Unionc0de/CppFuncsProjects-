

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    const int size = 10;

    //int ar[size];//сортировка массива пузырьком 

    //int a=1, b=9;

    //for (int i = 0; i < 10; i++) {
    //    int r = a + rand() % (b+1-a);
    //    ar[i] = r;
    //    cout << ar[i] << " ";
    //}
    //bool flag = false;//сортировка пузырьком
    //for (int i = 0,n=10; i < n-i; i++) {
    //    flag = true;
    //    for (int j = 0,n=10; j < n-i-1; j++) {
    //        if (ar[j] > ar[j+1]) {
    //            swap(ar[j], ar[j+1]);
    //            flag = false;
    //        }

    ////    }
    ////    if (flag)break;
    ////}
    //cout << endl;
    //for (int i = 0; i < 10; i++) {
    //    cout << ar[i] << " ";
    //}

    //int ar[size];//сортровка вставками

    //int a=1, b=9;

    //for (int i = 0; i < 10; i++) {
    //    int r = a + rand() % (b+1-a);
    //    ar[i] = r;
    //    cout << ar[i] << " ";
    //}
    //bool flag = false;//сортровка вставками
    //for (int i = 1,n=10; i < n; i++) {
    //    for (int j = i; j > 0; j--) {
    //        if (ar[j] < ar[j-1]) {
    //            swap(ar[j] , ar[j-1]);
    //            
    //        }
    //        else {
    //            break;
    //        }

    //    }
    //    
    //}
    //cout << endl;
    //for (int i = 0; i < 10; i++) {
    //    cout << ar[i] << " ";
    //}
    
    int ar[size]={};//шейкерная сортировка лехой 

    int a = 1, b = 9;

    for (int i = 0; i < 10; i++) {
        int r = a + rand() % (b + 1 - a);
        ar[i] = r;
        cout << ar[i] << " ";
    }
    
    cout << endl;

    bool flag = false;
    for (int i = 0, n = 10,k=n-1; i < k; i++) {
        flag = true;
        for (int j = i; j<k; j++) {
            if (ar[j] > ar[j+1]) {
                swap(ar[j], ar[j+1]);
                flag = false;
            }
        }
        k--;
        for (int j = k; j > i; j--) {
            if (ar[j] < ar[j-1]) {
                swap(ar[j], ar[j-1]);
                flag = false;
            }
        }

        if (flag)break;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }


    






}
