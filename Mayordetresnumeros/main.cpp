#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Ingresa el valor de a "  << endl;
    cin >> a;
    cout << "Ingresa el valor de b " << endl;
    cin >> b;
    cout << "Ingresa el valor de c" << endl;
    cin >> c;
    if  (a>=b and a>=c)
    {
        cout << "el numero mayor es " << a << endl;
    }else{
    if  (b>=a and b>=c )
        {
        cout << "El numero mayor es " << b << endl;
    }else{
        cout << "El numero mayor es " << c << endl;
    }
    }
    return 0;
}
