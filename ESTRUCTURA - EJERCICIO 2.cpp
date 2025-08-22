/* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
-Nombre
-Edad
-Promedio
Pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio
y posteriormente imprimir los datos del alumno.*/

#include<iostream>
using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];



int main(){
	//int i;
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"Nombre del alumno "<<i+1<<": "<<endl;
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Edad del alumno "<<i+1<<": "<<endl;
		cin>>alumnos[i].edad;
		cout<<"Promedio del alumno "<<i+1<<": "<<endl;
		cin>>alumnos[i].promedio;
		cout<<"______________________\n";
	}
	
	float mayor = alumnos[0].promedio;
	int posicion = 0;
	
	for(int i=1; i<3; i++){
		if(alumnos[i].promedio > mayor){
			mayor = alumnos[i].promedio;
			posicion = i;
		}
	}
	
	cout<<"\n\n___________________________\n";
	cout<<"La nota mas alta es de: "<<mayor;
	cout<<"\nDATOS OBTENIDOS"<<endl;
	cout<<"Nombre: "<<alumnos[posicion].nombre<<endl;
	cout<<"Edad: "<<alumnos[posicion].edad<<endl;
	cout<<"Promedio: "<<alumnos[posicion].promedio;
	return 0;
}
