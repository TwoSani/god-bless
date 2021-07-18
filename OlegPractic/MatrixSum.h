#ifndef MatrixSum_H
#define MatrixSum_H
#include <iostream>

using namespace std;

void SumTwinMatrix(double **MatrixOne, double **MatrixTwo, double **&SumMatrix, int Row, int Col){
    for(int i = 0; i < Row; i++){
        for(int j = 0; j < Col; j++){
            SumMatrix[i][j] = MatrixOne[i][j] + MatrixTwo[i][j];
        }
    }
}

#endif
