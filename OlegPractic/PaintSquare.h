#ifndef PaintSquare_H
#define PaintSquare_H
#include <iostream>

using namespace std;

void SquarePaint(int SideLength){
    cout<<"|"; cout.fill('-'); cout.width(SideLength*2); cout<<"|\n";
    for(int i = 0; i < SideLength-2; i++){
        cout<<"|"; cout.fill(' '); cout.width(SideLength*2); cout<<"|\n";
    }
    cout<<"|"; cout.fill('-'); cout.width(SideLength*2); cout<<"|\n";
}

#endif
