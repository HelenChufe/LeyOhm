#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include "Funciones.cpp"

void menuPrincipal(){
	int opc;
	do{
		float num1, num2, res;
		system("cls");
		printf("Conversor de unidades\n");
		printf("1. Voltaje\n");
		printf("2. Corriente/Amperaje\n");
		printf("3. Resistencia/Ohm\n");
		printf("4. Salir\n");
		printf("Elija una opcion:");
		scanf("%i",&opc);		
		switch(opc){
			case 1:
                Voltaje();
				break;
			case 2:
				Corriente();
				break;
			case 3:
                Resistencia();
				break;
			case 4:
				break;
		}
	}while(opc!=4);
}

int main(){
	float resistencia;
    menuPrincipal();
	resistencia = ResistenciaParalelo();
	printf("%f\n",resistencia);
	return 0;
}
	