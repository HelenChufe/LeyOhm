#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include "Funciones.cpp"
#include "operaciones.cpp"


int main(){
	int opc;
	float resistencia;


	opc = Menu();
    menuPrincipal(opc);
	resistencia = ResistenciaParalelo();
	printf("%f\n",resistencia);
	return 0;
}
	