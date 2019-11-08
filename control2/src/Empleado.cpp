#include "Empleado.h"
#include<iostream>
#include<string>

using namespace std;

Empleado::Empleado(string _nombre,string _apellido,double _salario)
{
    nombre=_nombre;
    apellido=_apellido;
    salario=_salario;

}
string  Empleado::obtener_a(){
    return apellido;
}
string Empleado::obtener_n(){
    return nombre;
}
double Empleado::obtener_s(){
    return salario;
}
double Empleado::revisar_u(){
    if(salario<=0){
        return 0;
    }
    return salario;
}
void Empleado::refucir_s(){
    salario=(salario-(salario*10)/100);
}
double Empleado::salario_a(){
    return salario*12;
}
void Empleado::mostrar() {
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"Salario: "<<salario<<endl;

	}


