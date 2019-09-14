#include <iostream>
using namespace std;

int a[] ={1,3,4,5,17,18,31,33};
int buscar(int x, int low, int high)
{	if(low>high)
	return (-1);
	
int mid=(low+high)/2;
if(x==a[mid])
return(mid);
if(x<a[mid])
return buscar(x, low, mid-1);
else
return buscar (x,mid+1,high);
}
void mostrar(int a){
	if(a==0)
	cout<< a <<endl;
	else{
	cout<< a <<endl;
	mostrar (a-1); 
}
}
int main (void)
{
	
	
	int x  = 0;

	cout<<"ingrese un numero entero positivo:"<<endl;
	cin>>x;
	if(x>=0)
	mostrar(x);
	
}