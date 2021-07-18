#ifndef PaintTrapezoid_H
#define PaintTrapezoid_H
#include <iostream>

using namespace std;

void TrpzdPaint(){
    system("cls");
    int SideA, Height;
    cout<<"Введите сторону и высоту трапеции через пробел (соотношение 15:4)\n>> "; cin >> SideA >> Height;
    if((double)SideA / Height != 3.75){
        cout<<"\nСоотношение не является корректным!\n";
        system("pause");
        return;
    }
    else{
        cout.fill('  '); cout.width(Height+1); cout<<"_"; cout.fill('_'); cout.width(SideA/2-2); cout<<""; cout.fill('  '); cout.width(Height+1); cout<<""<<endl;
        for(int i = 0; i < Height; i++){
            cout.fill('  '); cout.width(Height-i); cout<<"/"; cout.fill(' '); cout.width(SideA/2+i*2); cout<<"\\"; cout.fill(' '); cout.width(Height-i); cout<<"\n";
        }
        cout.fill('_'); cout.width(SideA); cout<<""; cout<<endl;
        system("pause");
    }
}
#endif
