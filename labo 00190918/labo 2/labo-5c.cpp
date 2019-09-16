#include <iostream>
using namespace std;

void torrehanoi (int n, int o, int d, int aux){
	
	if (n>0)
	{
		torrehanoi(n-1, o, aux, d);
		cout<<"\nSe mueve anillo desde la torre  "<< o << "hasta la torre "<<d<<endl;
		torrehanoi(n-1, aux, d, o);
		
	}
}

int main (){

int n;

cout<<"ingrese la cantidad de anillos: "<<endl;
cin>>n;

torrehanoi(n, 1, 3, 2);

return 0;

}


