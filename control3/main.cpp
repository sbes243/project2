#include <iostream>

using namespace std;
class Polygon{
private:
    int width,height;
public:
    Polygon();
    Polygon(int a ,int b):width(a),height(b){}
    int area(void){return 0;}
    void printarea(){
    cout<<this->area()<<'\n';
    }
};
class ArrayPolygon{
private:
    Polygon *arr;
    int siz;
public:
    ArrayPolygon(){
    this->siz=0;
    this->arr=new Polygon[siz];
}
    ArrayPolygon(Polygon a[],int s){
    this->siz=s;
    this->arr=new Polygon[siz];
    for(int i=0;i<siz;i++){
        this->arr[i]=a[i];
    }
}
    ArrayPolygon(ArrayPolygon &o);
    ~ArrayPolygon(){
    delete []arr;
}
    void insertarfinal(Polygon p){
    siz++;
    Polygon *tmp=new Polygon[siz];
    for(int i=0;i<siz-1;i++){
        tmp[i]=arr[i];
    }
    tmp[siz-1]=p;
    delete []arr;
    arr=tmp;
    }
    void insertar(Polygon p,int pos){
        siz++;
        Polygon *tmp=new Polygon[siz];
        for(int i=0;i<pos;i++){
            tmp[i]=arr[i];
        }
        tmp[pos]=p;
        for(int j=pos+1;j<siz-1;j++){
            tmp[j]=arr[j-1];
            delete []arr;
            arr=tmp;
        }
    }
    void eliminar(){
    --siz;
    Polygon *tmp=new Polygon[siz];
    }


};
int main()
{
    return 0;
}
