#include "Estudiante.h"
#include<string>
#include<iostream>
using namespace std;

Estudiante::Estudiante() {
	nombre;
	apellido;
	codigo;
}
Estudiante::Estudiante(string _nombre,string _apellido,string _codigo)
{
    nombre=_nombre;
    apellido=_apellido;
    codigo=_codigo;
}
string Estudiante::obtener_a(){
    return apellido;
}
string Estudiante::obtener_n(){
    return nombre;
}
string Estudiante::obtener_c(){
    return codigo;
}
