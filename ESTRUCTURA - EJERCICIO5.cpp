#include<iostream>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char sexo[20];
	int edad;
	char nombre[20];
	struct Promedio prom;
}alumno1;


int main(){
	
	float Promedio;
	
	cout<<"Digite su nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Digite su edad: ";
	cin>>alumno1.edad;
	fflush(stdin);
	cout<<"Digite su sexo: ";
	cin.getline(alumno1.sexo,20,'\n');
	
	cout<<"\n.:Notas del alumno:.\n";
	cout<<"Nota 1: "; cin>>alumno1.prom.nota1;
	cout<<"Nota 2: "; cin>>alumno1.prom.nota2;
	cout<<"Nota 3: "; cin>>alumno1.prom.nota3;
	
	Promedio = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3) / 3;
	
	cout<<"\n.:Datos del alumno:.\n";
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Promedio: "<<Promedio;
	
	return 0;
}
