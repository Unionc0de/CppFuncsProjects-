#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    const int size = 10;
    //int ar[size] = {};//1
    //int ar2[5] = {};
    //int ar3[5] = {};

    //for (int i = 0; i < size; i++) {
    //    ar[i] = 1 + rand() % 10;
    //    cout << ar[i] << " ";
    //}
    //cout << endl;
    //
    //for (int i = 0; i < 5; i++) {
    //    ar2[i] = ar[i];    
    //}

    //for (int i = 5; i < 10; i++) {
    //    ar3[i-5] = ar[i];
    //}

    //for (int i = 0; i < 5; i++) {
    //    cout << ar2[i] << " ";
    //}

    //cout << " " << endl;

    //for (int i = 0; i < 5; i++) {
    //    cout << ar3[i] << " ";
    //}

    /*int ar[size] = {}; //2
    int ar2[size] = {};
    int ar3[size] = {};

    for (int i = 0; i < size; i++) {
        ar[i] = 1 + rand() % 10;
        cout << ar[i] << " ";
    }
        
    cout << " " << endl;

    for (int i = 0; i < size; i++) {
        ar2[i] = 1 + rand() % 10;
        cout << ar2[i] << " ";
    }

    cout << " " << endl;

    for (int i = 0; i < size; i++) {
        ar3[i] = ar[i] + ar2[i];
        cout << ar3[i] << " ";
    }*/

    int ar[7];
    int sr = 0,sum=0,d;

    for (int i = 0; i < 7; i++) {
        cin >> d;
        ar[i] = d;
        sum += d;
    }
    
    sr = sum / 7;
    
    for (int i = 0; i < 7; i++) {
        cout << ar[i]<<" ";

    }
    cout << " " << endl;
    cout << sum << endl;
    cout << sr << endl;




}
