#ifndef matrixxx_h
#define matrixxx_h
#include <iostream>

using namespace std;

void RemakeNegative() {
    system("cls");
    ifstream fin("digits_of_matrix.txt");
    int r, c;
    fin >> r >> c;
    int** ptr;
    ptr = new int* [r];
    for (int i = 0; i < c; i++)
        ptr[i] = new int[c];
    cout << "Исход:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            fin >> ptr[i][j];
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Результат:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (ptr[i][j] < 0) {
                ptr[i][j] = ptr[i][j] * -1;

            }
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
}

#endif