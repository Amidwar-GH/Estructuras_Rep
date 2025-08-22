#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Amidwar", 20},
persona2 = {"Lucia", 22};

int main(){
	cout<<"______________________\n";
	cout<<"Nombre Persona 1: "<<persona1.nombre;
	cout<<endl;
	cout<<"Edad Persona 1: "<<persona1.edad;
	cout<<endl;
	cout<<"_______________________\n";
	cout<<"Nombre Persona 2: "<<persona2.nombre;
	cout<<endl;
	cout<<"Edad Persona 2: "<<persona2.edad;
	
	return 0;
}
