#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1, persona2;


int main(){
	cout<<"Nombre de la persona 1: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad de la persona 1: ";
	cin>>persona1.edad;
	
	cin.ignore();
	
	cout<<endl;
	cout<<"Nombre de la persona 2: ";
	cin.getline(persona2.nombre,20,'\n');
	cout<<"Edad de la persona 2: ";
	cin>>persona2.edad;
	
	cout<<"\nImprimiendo datos\n";
	cout<<"_____________________\n";
	cout<<"\nNOMBRES\n";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Nombre: "<<persona2.nombre;
	cout<<"\n_____________________\n";
	cout<<"\nEDADES\n";
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"Edad: "<<persona2.edad;
	cout<<"\n______________________";
	return 0;
}
