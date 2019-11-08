#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<string>
using namespace std;

class Empleado
{
    private:
        string nombre;
        string apellido;
        double salario;
    public:
        Empleado(string,string,double);
        string obtener_n();
        string obtener_a();
        double obtener_s();
        double revisar_u();
        void refucir_s();
        double salario_a();
        void mostrar();



};

#endif // EMPLEADO_H
