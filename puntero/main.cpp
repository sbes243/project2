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
int main(){
    int x[4];
    /// [ 5 6 7 8  ]     // tam 4
    /// [ 1 6 7 8  ]     // tam 3
    /// 8+  [ 5 6 7 ]
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    //cout<<sumarec(x,4);
    invertir(x,4);
    imprimir(x,4);
}

