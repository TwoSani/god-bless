#ifndef AllMatrixManip_H
#define AllMatrixManip_H
#include "matrixxx.h"
#include "MatrixSum.h"

void MatrixManip(){
    int Key;
    do{
       system("cls");
       cout<<"1. Сумма матриц\n2. Отрицательные в положительные\n3. Положительные в отрицательные\n0. Отчалить\n>> ";
       cin>>Key;
       switch(Key){
           case 1: SumTwinMatrix(); getchar(); getchar(); break;
           case 2: RemakeNegative(); getchar(); getchar(); break;
           case 3: RemakePositive(); getchar(); getchar(); break;
       }
    }
    while(Key != 0);
    system("pause");
}

#endif
