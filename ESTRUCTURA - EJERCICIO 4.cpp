/*Hacer un arreglo de estructura llamada atleta para N atletas que contengas los siguientes campos:
-nombre
-pais 
-numero_medallas
y devuelva los datos (nombre, pais) del ateleta que ga ganado el mayor numero de medallas.*/

#include<iostream>
using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atletas[100];


int main(){
	
	
	int medallasM=0, medallasm=9999999;
	int posM, posm;
	
	int numero_de_atletas;
	cout<<"Digite la cantidad de atletas: ";
	cin>>numero_de_atletas;
	
	for(int i=0; i<numero_de_atletas; i++){
		fflush(stdin);
		cout<<i+1<<". Digite el nombre del atleta: ";
		cin.getline(atletas[i].nombre,20,'\n');
		cout<<i+1<<". Digite el pais del atleta: ";
		cin.getline(atletas[i].pais,20,'\n');
		cout<<i+1<<". Digite el numero de medallas del atleta: ";
		cin>>atletas[i].numero_medallas;
		cout<<"\n";
		
		
		if(atletas[i].numero_medallas>medallasM){
			medallasM=atletas[i].numero_medallas;
			posM=i;
		}
		/*if(atletas[i].numero_medallas<medallasm){
			medallasm = atletas[i].numero_medallas;
			posm=i;
		}*/
		
	}
	
	cout<<"\n.:Datos del atleta con mayor numero de medallas:.\n";
	cout<<"Nombre: "<<atletas[posM].nombre<<endl;
	cout<<"Pais: "<<atletas[posM].pais;
	
	return 0;
}
