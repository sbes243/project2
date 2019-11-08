#include <iostream>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

int main()
{
    Estudiante e1("Nicolas","Ugarte","DF48WG3");
    Estudiante e2("Sebastian","Perez","JF89WWU0");
    Estudiante e3("Pepe","Dante","sjknb9");
    Estudiante e4("Juan","Gpmez","jakna3");
    Estudiante arr[]={e1,e2};
    Estudiante arr2[]={e3,e4};

    Curso c1("CComp","e1213",arr,34);
    cout<<e1.obtener_a()<<endl;
    cout<<e1.obtener_n()<<endl;
    cout<<e1.obtener_c()<<endl;
    cout<<e2.obtener_a()<<endl;
    cout<<e2.obtener_n()<<endl;
    cout<<e2.obtener_c()<<endl;
    cout<<c1.obtener_n()<<endl;
    c1.cambiar_ca(5);
    cout<<c1.obtener_a()<<endl;
    c1.agregar_a(e3);
}
