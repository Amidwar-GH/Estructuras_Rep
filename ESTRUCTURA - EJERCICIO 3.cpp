#include<iostream>
using namespace std;

struct Empleado{
	char nombre[20];
	float salario;	
}emp[100];




int main(){
	
	int n_empleados;
	float mayor=0 , menor=9999; 
	int posM, posm;
	
	cout<<"Digite el numero de empleados: ";
	cin>>n_empleados;
	cout<<endl;
	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<". Nombre del empleado: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<". Salario del empleado: ";
		cin>>emp[i].salario;
		cout<<"\n";
		
		if(emp[i].salario>mayor){
			mayor = emp[i].salario;
			posM = i;
		}
		if(emp[i].salario<menor){
			menor = emp[i].salario;
			posm = i;
		}
	}
	
	cout<<"\n.:Datos del empleado con mayor salario:.\n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
	cout<<"\n.:Datos del empleado con menos salario:.\n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	
	
	
	return 0;
}
