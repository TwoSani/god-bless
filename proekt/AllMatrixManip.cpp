#ifndef AllMatrixManip_H
#define AllMatrixManip_H
#include "matrixxx.h"
#include "MatrixSum.h"

void MatrixManip(){
    int Key;
    do{
       system("cls");
       cout<<"1. ����� ������\n2. ������������� � �������������\n3. ������������� � �������������\n0. ��������\n>> ";
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
