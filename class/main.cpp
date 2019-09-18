#include <iostream>
#include "point.h"
#include "vector.h"


using namespace std;

int main(){
    vector v;
    v.modificarpuntofinal(3,4);
    v.imprimir();
    cout<<v.calcularmodulo()<<endl;
    return 0;
}
