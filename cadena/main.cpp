#include <iostream>

using namespace std;

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
int tam(char *cadena){
    int tam=0;
    while(*cadena++ !='\0'){
        tam++;
    }
return tam;
}
int tam_rec(char *cadena){
    if(*cadena=='\0'){
        return 0;
    }
    return 1+tam_rec(++cadena);
}
void invertir(char *cadena){
    char *fin= cadena+tam(cadena)-1;
    while(fin>cadena){
        swap(*cadena,*fin);
        *fin--;
        *cadena++;
    }
    }
void invertirre(char *ini, char *fin){
    if(fin<ini){
        return ;
    }
    swap(*ini,*fin);
    invertirre(++ini,--fin);
}

bool palindromore(char *cad,char *fin){
    if(fin<cad){
        return  0;
    }
    else{
        if(*cad==*fin){
            return true;
        }
        return false;
    }
    palindromore(++cad,--fin);
}
bool palindromo(char *cad,char *fin){
    while(fin>cad){
        if(*cad==*fin){
            return 1;
        }
        else{return 0;}
    }
    fin--;
        cad++;
}

int main()
{
    char cadena[]="eevee";
    cout<<tam(cadena)<<endl;

    cout<<tam_rec(cadena)<<endl;
    cout<<cadena<<endl;
    char *fin= cadena+tam(cadena)-1;
    //invertir(cadena);
    invertirre(cadena, fin);
    cout<<cadena<<endl;
    cout<<palindromo(cadena,fin)<<endl;
    cout<<palindromore(cadena,fin)<<endl;
}
