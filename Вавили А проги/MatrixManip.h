#ifndef MatrixManip_H
#define MatrixManip_H
#include <iostream>

using namespace std;

void DiagElementsOfMatrix(){
    system("cls");
    string fileName;
    cout<<"Введите название текстового файла в директории программы: ";
    cin >> fileName;
    ifstream fin(fileName + ".txt");
    if(!fin.is_open()){
        cout<<"\nНеверно указан файл!\n";
        system("pause");
        return;
    }
    int Row, Col;
    fin>>Row>>Col;
    if(Row == Col){
        double **Matrix = new double *[Row];
        for(int i = 0; i < Row; i++)
            Matrix[i] = new double[Row];
        for(int i = 0; i < Row; i++){
            for(int j = 0; j < Row; j++){
                fin>>Matrix[i][j];
            }
        }
        double *DiagElements = new double[Row];
        for(int i = 0; i < Row; i++){
            for(int j = i; j < Row; j++){
                DiagElements[i] = Matrix[i][j];
                break;
            }
        }
        for(int i = 0; i < Row; i++){
            cout<<DiagElements[i]<<"\t\n";
        }
    }
    else{
        cout<<"\nНеверный файл или матрица не является квадратной!\n";
    }
    system("pause");
}

#endif
