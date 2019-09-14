//Tania Michelle Delgado Vasquez, Daniela Raquel Batres Arce//
#include <iostream>
using namespace std;


int mult(int a, int b){
	int c=0;
	
	if(b==1){
		return a;
}else{
	
c=mult(a,b-1);

return a+c;
}
}

int main()
{
int a, b, s=0;

	cout<<"ingrese los valores de a";
	cin>>a;
	cout<<"ingrese los valores de b";
	cin>>b;
	
	s=mult(a,b);
	cout<<"el resultado es:"<<s<<endl;
	
	
	return 0;

}
