#include <iostream>

using namespace std;

void imprimir(int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<endl;
    }
}
/* main(){
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    imprimir(x,5);
    return 0;
}*/

int suma(int arr[],int tam){
    int d=0;
    for(int i=0; i<tam;i++){
        d+=arr[i];
    }
    return d;
}
/*int main(){
    int x[4];
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    cout<<suma(x,4)<<endl;
    return 0;
}
*/
int sumarecursiva(int arr[],int tam,int d=0){
    if(tam==d){
        return 0;
    }
    else{
        tam--;
        return arr[tam]+ sumarecursiva(arr,tam);
    }
}
/*int main(){
    int x[2];
    for(int i=0;i<2;i++){
        cin>>x[i];
    }
    cout<<sumarecursiva(x,2)<<endl;
    return 0;
}*/
void invertir(int arr[],int tam){
    int v=tam/2;
    tam-=1;
    for(int i=0;i<v;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;

    }
}
/*void invertirrecursivo(int arr[],int tam){

    if(tam>0){
    cout<<arr[tam-1]<<endl;
    invertirrecursivo(arr,tam-1);
    tam--;
}
    }*/
void ordenarburbuja(int arr[],int tam){
    int v=tam/2;
    tam-=1;
     for(int i=0;i<v;i++){
         if(arr[i]>arr[i+1]){
            int c=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=c;
         }
     }
}
int main(){
    int x[4];
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    cout<<suma(x,4)<<endl;
    cout<<"la suma recursiva es:"<<sumarecursiva(x,4)<<endl;
    ordenarburbuja(x,4);
    imprimir(x,4);
    return 0;
}


