#include "Curso.h"
#include <string>
#include "Estudiante.h"
#include<iostream>
using namespace std;

Curso::Curso(string _nombre,string _codigo,Estudiante* _alumnos,int _cantidad_a)
{
    nombre=_nombre;
    codigo=_codigo;
    this->alumnos=_alumnos;
    cantidad_a=_cantidad_a;
}
string Curso::obtener_n(){
    return nombre;
}
string Curso::obtener_c(){
    return codigo;
}
Estudiante* Curso::obtener_alu(){
    return alumnos;
}
int Curso::obtener_a(){
    return cantidad_a;
}
void Curso::cambiar_n(string nuevo){
    nombre=nuevo;
}
void Curso::cambiar_co(string nuevo){
    codigo=nuevo;
}
void Curso::cambiar_ca(int nuevo){
    cantidad_a=nuevo;
}
void Curso::cambiar_alu(Estudiante* nuevo){
    alumnos=nuevo;
}
void Curso::agregar_a(Estudiante e) {
	cantidad_a++;
	Estudiante *al = new Estudiante[cantidad_a];
	for (int i = 0; i < cantidad_a - 1; i++) {
		*(al + i) = *(alumnos + i);
	}
	*(al + cantidad_a - 1) = e;
	alumnos = al;
}
