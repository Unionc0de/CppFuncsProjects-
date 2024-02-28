#include "Param.h"

void showStr(string* arr, int size) {//Вывод массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void addStrToEnd(string*& arr, string value, int size) {//Добавление элемента в конец 
    string* buf = new string[size + 1];

    for (int i = 0; i < size; i++)
    {
        buf[i] = arr[i];
    }

    buf[size] = value;

    delete[] arr;
    arr = buf;

}

void readFile(string path, string*& arr, int& size) {
    ifstream in(path); //Создание потока, открытие файла
    if (in.is_open()) {//Проверка, открыт ли файл
        string str;//Переменная для считывания
        while (getline(in, str))//Прохождение по файлу, первый аргумент - поток, второй - переменная куда нужно записать
        {
            addStrToEnd(arr, str, size++);
        }

    }
    else
    {
        cout << "Файл не найден!!!!!!!!!!!!!";
    }

    in.close();//Закрытие файла
}

void writeFile(string path, string* arr, int size) {
    ofstream out(path);
    if (out.is_open()) {
        for (int i = 0; i < size; i++)
        {
            out << arr[i] << endl;
        }
    }
    out.close();

}

void fileCopy(string path) {
    int size = 0;
    string* arr = new string[size];
    string pathCopy = "";
    readFile(path, arr, size);
    
    for (int i = 0; i < path.length(); i++)//Копирование имя файла с добавлением copy
    {
        if (path[i] == '.') {
            pathCopy += "(copy)";
        }
        pathCopy += path[i];
    }

    writeFile(pathCopy, arr, size);
    cout << "Название нового файла -  " << pathCopy;


}

int main()
{
    setlocale(LC_ALL, "rus");
    //SetConsoleCP(1251);//Вывод русского в консоль
    //SetConsoleOutputCP(1251);//Вывод русского в консоль
    srand(time(NULL));
    
    string path = "file.txt";
    int size = 0;
    string* arr = new string[size];
    
    fileCopy(path);
    

  



}

