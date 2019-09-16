#include <iostream>
using namespace std;

int numero_digitos(int numero);

int main()
{
	cout << "Digite el numero que usted desee: ";
	int numero;
	cin >> numero;
	
	cout << "El numero tiene:  " << numero_digitos(numero) << " digitos" << endl;
	
	return 0;   
}

int numero_digitos(int numero)
{
	return numero < 10 ? 1 : 1 + numero_digitos(numero / 10);
}
