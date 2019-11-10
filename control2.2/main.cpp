#include <iostream>
#include "Estudiante.h"
#include "Curso.h"
#include <vector>
using namespace std;

void mostrar1(vector <Estudiante>  v) {
	for (int i = 0; i < v.size(); i++) {
        v[i].mostrar();
		cout<<endl;
	}
}
void aumentar(vector <Estudiante> &v){
    Estudiante v1;
    v1.ingresar();
    v.push_back(v1);

}
int main()
{
    Estudiante e1("Nicolas","Ugarte","DF48WG3");
    Estudiante e2("Sebastian","Perez","JF89WWU0");
    Estudiante e3("Pepe","Dante","sjknb9");
    Estudiante e4("Juan","Gpmez","jakna3");
    Estudiante arr[]={e1,e2,e3};
    vector <Estudiante> arr1={e1,e2,e3};

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
    aumentar(arr1);
    mostrar1(arr1);

}
