#include <iostream>
#include "point.h"

using namespace std;
point::point(){
    x=0;
    y=0;
}
point::point(double nx, double ny){
    x=nx;
    y=ny;
}
void point::modificar(double nx, double ny){
    x+=nx;
    y+=ny;
}
void point::imprimir(){
    cout<<"("<<x<<","<<y<<")";
}

