//Estructuras anidadas
#include<iostream>
usingn namespace std;

struct info_direccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];



int main(){
	
	
	
	return 0;
}
