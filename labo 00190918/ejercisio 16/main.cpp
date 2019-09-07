

#include <iostream>

using namespace std;

int main() {
    
    int i;
    float array[10];
    float total=0;
    float promedio;
    
       for(i=0;i<=9;i++) 
           
       {      
    cout<<"ingrese un numero: "<<endl;
    cin>>array[i];
       }
    for(i=0;i<=9;i++)    
    {
    total+=array[i];
    }
       cout<<"la suma de los elementos es:"<<total<<endl;
       
       promedio = total/10;
       cout<<"promedio de los numeros es:"<<promedio<<endl;


    
    
    return 0;
}

