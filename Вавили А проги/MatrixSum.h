#ifndef MatrixSum_H
#define MatrixSum_H

void SumTwinMatrix(){
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
    int Row1, Col1; fin>>Row1>>Col1;
    double **Matrix1 = new double *[Row1];
    for(int i = 0; i < Row1; i++)
        Matrix1[i] = new double[Col1];
    for(int i = 0; i < Row1; i++){
        for(int j = 0; j < Col1; j++){
            fin>>Matrix1[i][j];
        }
    }
    cout<<"\nМатрица 1:\n";
    for(int i = 0; i < Row1; i++){
            for(int j = 0; j < Col1; j++){
                cout<<Matrix1[i][j]<<"\t";
            }
            cout<<endl;
        }
    int Row2, Col2; fin>>Row2>>Col2;
    double **Matrix2 = new double *[Row2];
    for(int i = 0; i < Row2; i++)
        Matrix2[i] = new double[Col2];
    cout<<"\nМатрица 2:\n";
    for(int i = 0; i < Row2; i++){
        for(int j = 0; j < Col2; j++){
            fin>>Matrix2[i][j];
        }
    }
    for(int i = 0; i < Row2; i++){
            for(int j = 0; j < Col2; j++){
                cout<<Matrix2[i][j]<<"\t";
            }
            cout<<endl;
        }
    if(Row1 == Row2 && Col1 == Col2){
        cout<<"\nМатрица суммирования:\n";
        double **SumMatrix = new double *[Row1];
        for(int i = 0; i < Row1; i++)
            SumMatrix[i] = new double[Col1];
        for(int i = 0; i < Row1; i++){
            for(int j = 0; j < Col2; j++){
                SumMatrix[i][j] = Matrix1[i][j] + Matrix2[i][j];
            }
        }
        for(int i = 0; i < Row2; i++){
            for(int j = 0; j < Col2; j++){
                cout<<SumMatrix[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Неверный файл или матрицы несовместны!\n";
    }
    system("pause");
}

#endif
