#ifndef VECTOR_H
#define VECTOR_H
#include "point.h"

class vector
{
    public:
        point start,fin;
        vector();
        void modificarpuntoinicial(double,double);
        void modificarpuntofinal(double,double);
        double calcularmodulo();
        void imprimir();


};

#endif // VECTOR_H
