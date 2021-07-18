#ifndef matrixxx_h
#define matrixxx_h
#include <iostream>

using namespace std;

void RemakeNegative() {
    system("cls");
    string fileName;
    cout<<"Введите название текстового файла в директории программы: ";
    cin >> fileName;
    ifstream fin(fileName + ".txt");
    if(fin.is_open()){
        int r, c;
        fin >> r >> c;
        int** ptr;
        ptr = new int* [r];
        for (int i = 0; i < c; i++)
            ptr[i] = new int[c];
        cout<<"Исход:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fin >> ptr[i][j];
                cout << ptr[i][j] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Результат:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (ptr[i][j] < 0){
                    ptr[i][j] = ptr[i][j] * -1;

                }
                cout << ptr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else{
        cout<<"\nНеверно указан файл!\n";
    }
    system("pause");
}

void RemakePositive() {
    system("cls");
    string fileName;
    cout<<"Введите название текстового файла в директории программы: ";
    cin >> fileName;
    ifstream fin(fileName + ".txt");
    if(fin.is_open()){
        int r, c;
        fin >> r >> c;
        int** ptr;
        ptr = new int* [r];
        for (int i = 0; i < c; i++)
            ptr[i] = new int[c];
        cout<<"Исход:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fin >> ptr[i][j];
                cout << ptr[i][j] << "\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Результат:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (ptr[i][j] > 0){
                    ptr[i][j] = ptr[i][j] * -1;

                }
                cout << ptr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else{
        cout<<"\nНеверно указан файл!\n";
    }
    system("pause");
}
#endif
