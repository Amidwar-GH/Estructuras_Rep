/*Utilizar las 2 estructuras del problema 5 pero ahora pedir los datos para N alumnos, y calcular cual de
todos tiene el mejor promedio e imprimir sus datos*/


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
}alumnos[100];


int main(){
	int n_alumnos;
	float prom_M=0;
	float prom;
	int pos;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0; i<n_alumnos; i++){
		fflush(stdin);
		cout<<"\n.:Datos del alumno:.\n";
		cout<<i+1<<". Nombre: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<i+1<<". Edad: ";
		cin>>alumnos[i].edad;
		fflush(stdin);
		cout<<i+1<<". Sexo: ";
		cin.getline(alumnos[i].sexo,20,'\n');
		cout<<"\n::NOTAS::\n";
		cout<<"NOTA 1: ";
		cin>>alumnos[i].prom.nota1;
		cout<<"NOTA 2: ";
		cin>>alumnos[i].prom.nota2;
		cout<<"NOTA 3: ";
		cin>>alumnos[i].prom.nota3;
		
		prom = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3) / 3;
		if(prom > prom_M){
			prom_M = prom;
			pos = i;
		}
		
	}
	
	cout<<"\n::Datos del mejor promedio::\n";
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
	cout<<"Promedio: "<<prom_M;
	
	return 0;
}
