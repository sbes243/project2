#include <iostream>

using namespace std;

/*int main()
{
    /*int n=1;
    int c=0;
    int d=0;
    while(n<=1000000){
        if(n%3==0){
            c=c+n;
        }
        if(n%5==0){
            d=d+n;
        }
        n++;
    }
    cout<<c+d<<endl;*/



    /*int n;
    cin>>n;
    int g=1;
    int c=6;
    int d=0;
    while(c<n){
        while(g<c){
            if(c%g==0){
            d=d+g;}
            g++;
    }
    if(d==c){
        cout << d << endl;}
    c++;
    g=1;
    d=0;
    }*/
    /*int factorial(int n){
    if(n<=0){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
int main(){
int n;
cin>>n;
cout<<factorial(n);}*/
int main(){
    int n=2;
    int d=0;
    while(600851475143>n){
        if(600851475143%n==0){
            d=n;
        }
           n++;
    }
    cout<<d<<endl;}


