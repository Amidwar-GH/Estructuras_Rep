/*Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos:
-el nombre de la persona
-un valor de tipo logico
que indica si la persona tiene algun tipo de discapacidad. Realize un programa
que dado un vector de personas rellene dos nuevos vectores: uno que contenga
las personas que no tienen ninguna discapacidad y otro que contenfa las personas
con discapacidad.*/

#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	bool discapacidad;
}personas[100], P_SD[100], P_CD[100];


int main(){
	
	int n_personas;
	int contador_CD=0, contador_SD=0;
	
	cout<<"Digite el numero de personas: "; cin>>n_personas;
	
	for(int i=0; i<n_personas; i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(personas[i].nombre,20,'\n');
		cout<<"Discapacidad: ";
		cin>>personas[i].discapacidad;
		cout<<"\n";
	}
	
	for(int i=0; i<n_personas; i++){
		if(personas[i].discapacidad == 1){
			P_CD[contador_CD] = personas[i];
			contador_CD++;
		}
		if(personas[i].discapacidad == 0){
			P_SD[contador_SD] = personas[i];
			contador_SD++;
		}
	}
	
	
	cout<<"\n.:Personas sin discapacidad:.\n";
	for(int i=0; i<contador_SD; i++){
		cout<<"- "<<P_SD[i].nombre<<endl;
	}
	
	cout<<endl;
	
	cout<<"\n.:Personas con discapacidad:.\n";
	for(int i=0; i<contador_CD; i++){
		cout<<"- "<<P_CD[i].nombre<<endl;
	}
	
	
	return 0;
}
