#include <iostream>

using namespace std;

int main()
{
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
   }*/

   /*int divisores=0;
   int num;
   cout <<"Ingrese un numero"<<endl;
   cin>>num;
   for(int divisor=1;divisor<=num;divisor++){
    if(num%divisor==0){
        divisores++;
    }
   }
   if (divisores==2){
    cout<<"Si es primo"<<endl;
   }
   else{
    cout<<"No es primo"<<endl;}
}*/
/*
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
   */

  /* int divisores=0;
   for(int n=0;n<100;n++){
    for(int divisor=1;divisor<=n;divisor++){
        if(n%divisor==0){
                divisores++;
            }
            divisor++;
        }

        if(divisores==2){
            cout<<n<<endl;
        }

        divisores=0;

   }
   }

*/
   /*int n;
    cout << "Ingrese un numero : " << endl;
    cin >>n;
    int divi=0;
    int sor=1;
    while(sor<n){
        if(n%sor==0){
            divi=divi+sor;
        }
        sor++;
    }
    if(divi==n){
        cout << "Es un numero perfecto" << endl;
    }
    else{
        cout << "No es un numero perfecto" << endl;
    }
    return 0;
}*/
    int n;
    cout << "Ingrese un numero : " << endl;
    cin >>n;
    int divi=0;
    for(int sor=1;sor<n;sor++){
        if(n%sor==0){
            divi=divi+sor;
        }
    }
    if(divi==n){
        cout << "Es un numero perfecto" << endl;
    }
    else{
        cout << "No es un numero perfecto" << endl;
    }
    return 0;
    }










