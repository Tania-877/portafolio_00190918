//Tania Michelle Delgado Vasquez   00190918
//Daniela Raquel Batres Arce       00136918

#include<iostream>
using namespace std;

void ejemplo(int *puntero){
	cout << "Puntero: " << puntero << endl;
	
	cout << "num[0] = " << *puntero << endl;
	cout << "num[1] = " << *(puntero+1) << endl;
	cout << "num[2] = " << *(puntero+2) << endl;
	cout << "num[3] = " << *(puntero+3) << endl;
	cout << "num[4] = " << *(puntero+4) << endl;
}

int main ()
{
	string paises [5];
	int numerodehabitantes [5];
	numerodehabitantes [0];
	numerodehabitantes [1];
	numerodehabitantes [2];
	numerodehabitantes [3];
	numerodehabitantes [4];
	int variable;
	string capital[5];
	int mayor;
	int total =0;
	float media =0;
		cout<<"Ingrese la informacion correspondiente al continente:\n";
	for(int i=0;i<1;i++)
{
	cout<<"\n Continente Americano 1\n";
	cout<<"pais:";
	cin>>paises[i];
	cout<<"numero de habitantes:";
	cin>>numerodehabitantes[0];
	cout<<"capital:";
	cin>>capital[i];
	
		cout<<"\n Continente Africano 2\n";
	cout<<"pais:";
	cin>>paises[i];
	cout<<"numero de habitantes:";
	cin>>numerodehabitantes[1];
	cout<<"capital:";
	cin>>capital[i];
	
		cout<<"\n Continente Asiatico 3\n";
	cout<<"pais:";
	cin>>paises[i];
	cout<<"numero de habitantes:";
	cin>>numerodehabitantes[2];
	cout<<"capital:";
	cin>>capital[i];
	
		cout<<"\n Continente Antartico 4\n";
	cout<<"pais:";
	cin>>paises[i];
	cout<<"numero de habitantes:";
	cin>>numerodehabitantes[3];
	cout<<"capital:";
	cin>>capital[i];
	
		cout<<"\n Continente Europa 5\n";
	cout<<"pais:";
	cin>>paises[i];
	cout<<"numero de habitantes:";
	cin>>numerodehabitantes[4];
	cout<<"capital:";
	cin>>capital[i];

}
cout << "\nIngrese el numero de el continente del que desee saber la poblacion total:\n";
int opcion =0;
cin >> opcion;


switch(opcion)
{
	
    case 1: cout << "Poblacion Total: " << *numerodehabitantes << endl;
    break;
    case 2: cout << "Poblacion Total: " << *(numerodehabitantes+1) << endl;
    break;
    case 3: cout << "Poblacion Total: " << *(numerodehabitantes+2) << endl;
    break;
    case 4: cout << "Poblacion Total: " << *(numerodehabitantes+3) << endl;
    break;
    case 5: cout << "Poblacion Total: " << *(numerodehabitantes+4)<< endl;
    break;
    default: cout << "Usted ha ingresado una opcion incorrecta"<<endl;

 
}

{

if(mayor>=numerodehabitantes[0]){
	
	numerodehabitantes[0] == mayor;
}

if(mayor>=numerodehabitantes[1]){
	
	numerodehabitantes[1] == mayor;
}

if(mayor>=numerodehabitantes[2]){
	
	numerodehabitantes[2] == mayor;
}

if(mayor>=numerodehabitantes[3]){
	
	numerodehabitantes[3] == mayor;
}

if(mayor>=numerodehabitantes[4]){
	
	numerodehabitantes[4] == mayor;
}


}

for (int j = 0; j < mayor; j++){
		
		cin>>numerodehabitantes[j];
		total +=numerodehabitantes[j];
	}
	media = (float) total /mayor;
	cout<<"La poblacion mayor es: "<<opcion<<endl;

}

