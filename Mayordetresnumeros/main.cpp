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

    /*
int divisor=1;
   int divisores=0;
   int num;
   cout <<"Ingrese un numero"<<endl;
   cin>>num;

   while(divisor<=num){
        if(num%divisor==0){
            divisores++;
        }
        divisor++;
   }

   if (divisores==2){
    cout<<"Si es primo"<<endl;
   }
   else{
    cout<<"No es primo"<<endl;
   }

   int n=1;
   int divisor=1;
   int divisores=0;

   while(n<100){
        while (divisor<=n){
            if(n%divisor==0){
                divisores++;
            }
            divisor++;
        }

        if(divisores==2){
            cout<<n<<endl;
        }
        n++;
        divisores=0;
        divisor=1;




   }
}
