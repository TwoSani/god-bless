#ifndef MatrixSum_H
#define MatrixSum_H

void SumTwinMatrix(){
    system("cls");
    ifstream fin("digits_of_matrix.txt");
    int Row1, Col1; fin>>Row1>>Col1;
    double **Matrix1 = new double *[Row1];
    for(int i = 0; i < Row1; i++)
        Matrix1[i] = new double[Col1];
    for(int i = 0; i < Row1; i++){
        for(int j = 0; j < Col1; j++){
            fin>>Matrix1[i][j];
        }
    }
    int Row2, Col2; fin>>Row2>>Col2;
    double **Matrix2 = new double *[Row2];
    for(int i = 0; i < Row2; i++)
        Matrix2[i] = new double[Col2];
    for(int i = 0; i < Row2; i++){
        for(int j = 0; j < Col2; j++){
            fin>>Matrix2[i][j];
        }
    }
    if(Row1 == Row2 && Col1 == Col2){
        cout<<"Матрица суммирования:\n";
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
                cout<<SumMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Никак!";
    }
}

#endif
