#ifndef CURSO_H
#define CURSO_H
#include<string>
#include "Estudiante.h"
#include<iostream>
using namespace std;


class Curso
{
    private:
        string nombre;
        string codigo;
        Estudiante* alumnos;
        int cantidad_a;

    public:
        Curso(string,string,Estudiante*,int);
        string obtener_n();
        string obtener_c();
        Estudiante* obtener_alu();
        int obtener_a();


        void cambiar_n(string);
        void cambiar_co(string);
        void cambiar_ca(int);
        void cambiar_alu(Estudiante*);



};

#endif // CURSO_H
