
#include <iostream>
#include <cmath>
using namespace std;
 
 
int main()
{
    cout<<" Por favor, introduzca su numero Mayor:"<<endl;
    int Mayor;
    cin>>Mayor;
    cout<<"Ahora, introduzca elnumero Menor:"<<endl;
    int Menor;
    cin>>Menor;
    int Resto = Mayor% Menor;
    if(Resto == 0){
       cout<<"El MCD es"<<Menor<<endl;
       }
    while(!Resto == 0)
    {
     Mayor = Menor;
     Menor = Resto;
     Resto = Mayor% Menor;
     if(Mayor% Menor == 0){
        cout<<"El MCD es"<<Menor<<endl;
        break;
     }
    }
 return 0;
}


