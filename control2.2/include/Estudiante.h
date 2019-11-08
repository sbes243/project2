#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include<string>
#include<iostream>
using namespace std;

class Estudiante
{
    private:
        string nombre;
        string apellido;
        string codigo;
    public:
        Estudiante();
        Estudiante(string,string,string);
        string obtener_a();
        string obtener_n();
        string obtener_c();
};

#endif // ESTUDIANTE_H
