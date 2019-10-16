#include <iostream>

using namespace std;

void imprimir(int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<endl;
    }
}
int swap(int &x,int &y){
 int c=x;
    x=y;
    y=c;
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
int invertir(int arr[],int tam){
    int v=tam/2;
    for(int i=0;i<v;i++){
        swap(arr[i],arr[tam-1-i]);
    }
}
int invertirre(int arr[],int tam,int i=0){

        if( i==tam/2){
             return 0;
        }
        swap(arr[i],arr[tam-i-1]);
        invertirre(arr,tam,++i);
}
void ordenarburbuja(int arr[],int tam){
     for(int i=0;i<tam;i++){
         for(int j=0;j<tam-1;j++){
            if(arr[j]>arr[j+1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
         }
         }
}
void ordenarinsercion(int arr[],int tam){
    int j;
    for(int i=1;i<tam;i++){
        int c=arr[i];
        for(j=i;j>0 and arr[j-1]>c; j--){
                arr[j]=arr[j-1];
        }
        arr[j]=c;
    }
}


int main(){
    int x[4];
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    /*cout<<suma(x,4)<<endl;
    cout<<"la suma recursiva es:"<<sumarecursiva(x,4)<<endl;*/
    invertirre(x,4);
    imprimir(x,4);
    return 0;
}


