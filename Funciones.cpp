#include <list>
#include <stdio.h>
#include<conio.h>
#include "operaciones.cpp"

using namespace std;

int Menu(){
	int opc;
	system("cls");
	printf("Conversor de unidades\n");
	printf("1. Voltaje\n");
	printf("2. Corriente/Amperaje\n");
	printf("3. Resistencia/Ohm\n");
	printf("4. Salir\n");
	printf("Elija una opcion:");
	scanf("%i",&opc);
	return opc;
}
void menuPrincipal(int opc){
	do{
		float num1, num2, res;
		switch(opc){
			case 1:
				system("cls");
				printf("Introduzca la corriente (Amperes)\n"); scanf("%f",&num1);
				printf("Introduzca la resistencia(Ohms)\n"); scanf("%f",&num2);
				printf("El voltaje es igual a: %0.6fV", Voltaje(num1,num2)); getch();
				break;
			case 2:
				system("cls");
				printf("Introduzca el voltaje (Volts)\n"); scanf("%f",&num1);
				printf("Introduzca la resistencia(Ohms)\n"); scanf("%f",&num2);
				printf("El amperaje es igual a: %0.6f Amperes.", Corriente(num1,num2));
				getch();
				break;
			case 3:
                system("cls");
				printf("Introduzca el voltaje(Volts): "); scanf("%f",&num1);
				printf("Introduzca el amperaje(Amperes): "); scanf("%f",&num2);
				printf("La resistencia es igual a: %0.6f Ohms", Resistencia(num1,num2));
				getch;
				break;
			case 4:
				
				break;
		}
	}while(opc!=4);
}

float ResistenciaParalelo() {
	int nr,d1;
	float resultado, denominador = 0, vr;
	list<float> lista;
	printf("Resistencia en Paralelo.");
	printf("\n¿Cuantas ramas tiene la resistencia?");
	scanf("%i",&nr);
	system("cls");
	for (int i = 1; i <= nr; i++) {
		do
		{
			printf("Ingrese el valor en Ohms de la resistencia ",i,":");
			scanf("%f",&vr);
			if (vr>=1)
			{
				lista.push_back(vr);
				break;
			}
			else
			{
				system("cls");
				printf("Una resistencia no puede tener un valor de 0 un valor negativo.");
			}
		} while (true);
	}
	system("cls");


	for (list<float>::iterator i = lista.begin(); i != lista.end(); ++ i){
		float item = *i;
		denominador = denominador + (1/item);
	}
	resultado = 1/denominador;
	return resultado;
}