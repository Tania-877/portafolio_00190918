#include <iostream>
using namespace std;

void mostrar(int n){
	if(n==1)
		cout << n << endl;
	else{
		mostrar(n-1);
		cout << n << endl;
                mostrar(n-1);
                cout << n << endl;
              
	}
}


int main()
{
	int x = 0;
	cout << "Digite un numero: ";
	cin >> x;
	if(x>=1)
		mostrar(x);
        
}