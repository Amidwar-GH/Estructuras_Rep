/*Defina una estructura llamada Producto que contenga los siguientes campos:
-nombre (cadena de 20 caracteres)
-precio (float)
-stock (entero)

El programa debe:
-Pedir al usuario N productos y almacenarlos en un vector de estructuras.
-Mostrar todos los productos ingresados en forma de lista.
-Calcular y mostrar el producto más caro y el producto más barato.
-Mostrar todos los productos que tengan stock menor a 5 (para saber cuáles deben reponerse).
*/

#include<iostream>
using namespace std;

struct Producto{
	char nombre[20];
	float precio;
	int stock;
}productos[100];

int main(){
	float CARO=0, BARATO=999999;
	int n_productos,opcion;
	cout<<"Digite cuantos productos son: \n";
	cin>>n_productos;
	
	for(int i=0; i<n_productos; i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(productos[i].nombre,20,'\n');
		cout<<"Precio: ";
		cin>>productos[i].precio;
		cout<<"Stock: ";
		cin>>productos[i].stock;
		cout<<endl;
	}
	
	cout<<"Elija una opcion: \n";
	cout<<"1. Ver los productos\n";
	cout<<"2. Ver el producto mas caro y mas barato\n";
	cout<<"3. Ver productos a reponer\n";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			for(int i=0; i<n_productos; i++){
				cout<<"Nombre: "<<productos[i].nombre<<endl;
				cout<<"Precio: "<<productos[i].precio<<endl;
				cout<<"Stock: "<<productos[i].stock<<endl;
			}
		break;
		
		case 2:
			for(int i=0; i<n_productos; i++){
				if(productos[i].precio>CARO){
					CARO = productos[i].precio;
				}
				if(productos[i].precio<BARATO){
					BARATO = productos[i].precio;
				}
			}
			cout<<"\n.:PRODUCTO MAS CARO:.\n";
			cout<<CARO;
			cout<<"\n.:PRODUCTO MAS BARATO:.\n";
			cout<<BARATO;
		break;
		
		case 3:
			cout<<"\n.:PRODUCTOS A REPONER:.\n";
			for(int i=0; i<n_productos; i++){
				if(productos[i].stock<5){
					cout<<"- "<<productos[i].nombre<<" || Stock: "<<productos[i].stock<<endl;
				}
			}
		break;
		
		default: "Opcion invalida;";
			
	}

	
	return 0;
}
