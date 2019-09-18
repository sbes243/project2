#include "vector.h"
#include <iostream>
#include<cmath>
using namespace std;
vector::vector()
{

}
void vector::imprimir(){
    start.imprimir();
    cout<<"->";
    fin.imprimir();
    cout<<endl;
}
void vector::modificarpuntoinicial(double nx,double ny){
    start.modificar(nx,ny);
}
void vector::modificarpuntofinal(double nx,double ny){
    fin.modificar(nx,ny);
}
double vector::calcularmodulo(){
    return sqrt((fin.x-start.x)*(fin.x-start.x)+(fin.y-start.y)*(fin.y-start.y));
};
