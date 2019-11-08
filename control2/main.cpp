#include <iostream>
#include "Empleado.h"
#include<string>


using namespace std;
void print(Empleado a[], int tam) {
	for (int i = 0; i < tam; i++) {
		a[i].mostrar(); cout << endl;
	}
}
bool mayor(Empleado e1, Empleado e2) {
	string a1 = e1.obtener_a();
	string a2 = e2.obtener_a();
	int tam1 = a1.length();
	int tam2 = a2.length();
	int tam = (tam1 > tam2) ? tam2 : tam1;
	for (int i = 0; i < tam; i++) {
		if (static_cast<int>(a1[i]) > static_cast<int>(a2[i])) {
			return true;
		}
	}
	if (tam == tam1) return true;
	return false;
}
void ord(Empleado* emps, int tam) {
	for (int i = 2; i < tam; i++) {
		int c = i;
		Empleado* ptr1 = emps + i;
		Empleado* ptr = ptr1 - 1;
		Empleado emp = *ptr1;
		while (c != 0 && mayor(*ptr, *ptr1)) {
			*ptr1 = *ptr;
			c--;
			ptr1--;
			ptr--;
		}
		*(ptr + 1) = emp;
	}
}
int main()
{
    Empleado e1("Nico","Espinoza",1200);
    Empleado e2("Sebastian","Perez",1000);
    Empleado e3("Luciana","Castro",1300);
    Empleado e4("Paco","Dron",1700);
    cout<<e1.obtener_a()<<endl;
    cout<<e1.obtener_n()<<endl;
    cout<<e1.revisar_u()<<endl;
    cout<<e2.obtener_a()<<endl;
    cout<<e2.obtener_n()<<endl;
    cout<<e2.revisar_u()<<endl;
    e2.refucir_s();
    cout<<e2.salario_a()<<endl;
    Empleado arr[]={e1,e2,e3};
    ord(arr,3);
    print(arr,3);



}
