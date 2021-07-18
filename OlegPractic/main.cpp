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
        cout<<"----������� ���������----\n1. ����� ���� ������\n2. ��������� ��������\n3. ������ ����\n0. �����\n:= ";
        cin>>Key;
        switch(Key){
            case 1:{
                system("cls");
                ifstream fin("matrix_elements.txt");
                cout<<"�������� ������ �������:\n�����������(������ �������): ";
                int Row1, Col1; fin>>Row1>>Col1;
                cout<<"������� "<<Row1*Col1<<" ��������� �������:\n";
                double **Matrix1 = new double *[Row1];
                for(int i = 0; i < Row1; i++)
                    Matrix1[i] = new double[Col1];
                for(int i = 0; i < Row1; i++){
                    for(int j = 0; j < Col1; j++){
                        fin>>Matrix1[i][j];
                    }
                }
                cout<<"�������� ������ �������:\n�����������(������ �������): ";
                int Row2, Col2; fin>>Row2>>Col2;
                cout<<"������� "<<Row2*Col2<<" ��������� �������:\n";
                double **Matrix2 = new double *[Row2];
                for(int i = 0; i < Row2; i++)
                    Matrix2[i] = new double[Col2];
                for(int i = 0; i < Row2; i++){
                    for(int j = 0; j < Col2; j++){
                        fin>>Matrix2[i][j];
                    }
                }
                if(Row1 == Row2 && Col1 == Col2){
                    cout<<"\n������� ������������:\n";
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
                    cout<<"�����!";
                }
                getchar(); getchar(); break;
            }
            case 2:{
                system("cls");
                int Side;
                cout<<"������� >> "; cin>>Side;
                SquarePaint(Side);
                getchar(); getchar(); break;
            }
            case 3:{
                system("cls");
                cout<<"� ����� � ���������� ������ ���� ��������� ��������, � ������� ��-������� ������ ���� ���������:\n-���������� �����;\n-���������� ��������;\n-�������� �������(� ���������� ������*�������)\n���������: ������� - ����� ������ �� ���������"; getchar(); getchar(); break;
            }
        }
    }
    while(Key != 0);
    return 0;
}
