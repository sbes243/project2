#include <iostream>

using namespace std;

void imprimir(int *arr,int tam){
    while(tam--){
        cout<<*arr<<" ";
        arr++;
}
}
int swap(int &x,int &y){
 int c=x;
    x=y;
    y=c;
}
void swap(int *ptr1,int *ptr2){
    int tmp= *ptr1;
     *ptr1=*ptr2;
     *ptr2=tmp;

}
int suma(int *arr,int tam){
    int sum=0;
    while(tam--){
            sum+=*arr;
            arr++;
    }
    return sum;
}
int sumarec(int *arr,int tam){
    if(tam==0){
        return 0;
    }
    else{
        return  *(arr + --tam)+ sumarec(arr,tam);
    }
}
int invertir(int *arr,int tam){
    int v=tam/2;
    for(int i=0;i<v;i++){
        swap(*(arr+(i)),*(arr+(tam-1-i)));
    }
}

int invertirre(int *arr,int tam,int i=0){

        if( i==tam/2){
             return 0;
        }
        swap(*(arr+(i)),*(arr+(tam-i-1)));
        invertirre(arr,tam,++i);
}
void ordenarburbuja(int *arr,int tam){
     for(int i=0;i<tam;i++){
         for(int j=0;j<tam-1;j++){
            if(*(arr+(j))>*(arr+(j+1))){
                int *c=+(arr+(j));
                *(arr+(j))=*(arr+(j+1));
                *(arr+(j+1))=*c;
            }
         }
         }
}
int main(){
    int x[5];
    /// [ 5 6 7 8  ]     // tam 4
    /// [ 1 6 7 8  ]     // tam 3
    /// 8+  [ 5 6 7 ]
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    //cout<<sumarec(x,4);
    ordenarburbuja(x,5);
    imprimir(x,5);
}

