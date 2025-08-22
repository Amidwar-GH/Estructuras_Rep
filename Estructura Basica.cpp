#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Amidwar", 20},
persona2 = {"Lucia", 22};

int main(){
	cout<<"Nombre Persona 1: "<<persona1.nombre;
	cout<<"Edad Persona 2: "<<persona1.edad;
	
	
	
	return 0;
}
