#include <iostream>

using namespace std;

/*void numero(int n)
{
    int a=n/10000;
    int b=(n-(a*10000))/1000;
    int c=(n-(a*10000+b*1000))/100;
    int d=(n-(a*10000+b*1000+c*100))/10;
    int e=n%10;
    cout<< a <<'\t'<< b <<'\t'<< c <<'\t'<<d <<'\t'<< e<<endl;
}
int main(){
    int n;
    cin>>n;
    numero(n);
}
*/
/*int cantidad(int n){
    int cont=0;
    while(n!=0){
        n/=10;
        cont++;
    }
    //cout<<"Numero de digitos:"<<cont<<endl;
    return cont;
}
int main(){
    int n;
    cin>>n;
    cout << cantidad(n);
}*/
/*bool palindromo(int n){
    int a=n/10000;
    int b=(n-(a*10000))/1000;
    int c=(n-(a*10000+b*1000))/100;
    int d=(n-(a*10000+b*1000+c*100))/10;
    int e=n%10;
    if(a==e and b==d){
        return true;
    }
    else{return false;

    }
}
int main(){
    int n;
    cin>>n;
    cout<< palindromo(n);
}*/
int calcularfib(int n){
    int x=0;
    int y=1;
    int z=1;
    for(int i=1; i<=n; i++){
        z=x+y;
        x=y;
        y=z;
    }
    return z;
}
int main(){
    int n;
    cin>>n;
    cout<<calcularfib(n);
}
/*bool esnumero(char a){
    int n=static_cast<int>(a);
    return (n>47 and n<58);
}
int main(){
    char a;
    cin>>a;
    cout<<esnumero(a);
}*/
/*char convertirMaiMin(char a){
    int d;
    int n=static_cast<int>(a);
    if(n>97 and n<123){
        cout<<"Es una letra minuscula"<<endl;
        d=n-32;
        char p=static_cast<char>(d);
        retun p;
    }
    if(n>64 and n<91){
        cout<<" Es una letra mayuscula"<<endl;
        d=n+32;
        char p=static_cast<char>(d);
        return p;
    }
}
int main(){
    char a;
    cin>>a;
    cout<<convertirMaiMin(a);
}*/









