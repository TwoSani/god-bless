#include <iostream>
#include <locale>
#include <conio.h>
#include <fstream>
#include "MatrixSum.h"
#include "PaintSquare.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int Key;
    do{
        system("cls");
        cout<<"----Функции библиотек----\n1. Сумма двух матриц\n2. Отрисовка квадрата\n3. Прочти меня\n0. Выход\n:= ";
        cin>>Key;
        switch(Key){
            case 1:{
                system("cls");
                ifstream fin("matrix_elements.txt");
                cout<<"Создание первой матрицы:\nРазмерность(строка столбец): ";
                int Row1, Col1; fin>>Row1>>Col1;
                cout<<"Введите "<<Row1*Col1<<" элементов матрицы:\n";
                double **Matrix1 = new double *[Row1];
                for(int i = 0; i < Row1; i++)
                    Matrix1[i] = new double[Col1];
                for(int i = 0; i < Row1; i++){
                    for(int j = 0; j < Col1; j++){
                        fin>>Matrix1[i][j];
                    }
                }
                cout<<"Создание второй матрицы:\nРазмерность(строка столбец): ";
                int Row2, Col2; fin>>Row2>>Col2;
                cout<<"Введите "<<Row2*Col2<<" элементов матрицы:\n";
                double **Matrix2 = new double *[Row2];
                for(int i = 0; i < Row2; i++)
                    Matrix2[i] = new double[Col2];
                for(int i = 0; i < Row2; i++){
                    for(int j = 0; j < Col2; j++){
                        fin>>Matrix2[i][j];
                    }
                }
                if(Row1 == Row2 && Col1 == Col2){
                    cout<<"\nМатрица суммирования:\n";
                    double **SumMatrix = new double *[Row1];
                    for(int i = 0; i < Row1; i++)
                        SumMatrix[i] = new double[Col1];
                    SumTwinMatrix(Matrix1, Matrix2, SumMatrix, Row1, Col2);
                    for(int i = 0; i < Row2; i++){
                        for(int j = 0; j < Col2; j++){
                            cout<<SumMatrix[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                }
                else{
                    cout<<"Никак!";
                }
                getchar(); getchar(); break;
            }
            case 2:{
                system("cls");
                int Side;
                cout<<"Сторона >> "; cin>>Side;
                SquarePaint(Side);
                getchar(); getchar(); break;
            }
            case 3:{
                system("cls");
                cout<<"В папке с программой должен быть текстовый документ, в котором по-очереди должны быть прописаны:\n-количество строк;\n-количество столбцов;\n-элементы матрицы(в количестве строки*столбцы)\nРезультат: матрица - сумма матриц из документа"; getchar(); getchar(); break;
            }
        }
    }
    while(Key != 0);
    return 0;
}
