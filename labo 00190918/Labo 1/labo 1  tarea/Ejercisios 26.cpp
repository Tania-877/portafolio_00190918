#include <iostream>
#include <conio.h>

using namespace std;
struct complejo{
        float real,imaginaria;
} z1,z2;
void pedirdatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(int argc, char** argv) {
    
    pedirdatos();
    complejo x= suma(z1,z2);
    
    muestra(x);

    return 0;
}
void pedirdatos(){
    cout<<"digite los datos para el primer complejo:"<<endl;
    cout<<"parte real:";
    cin>>z1.real;
    cout<<"parte imaginaria:";
    cin>>z1.imaginaria;
   
}
complejo suma(complejo z1,complejo z2){
    z1.real += z2.real;
    z1.imaginaria -= z2.imaginaria;
    
    return z1;
}
void muestra(complejo x){
    cout<<"resultado:"<<x.real<<","<<x.imaginaria<<endl;
}
