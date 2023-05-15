#include <list>
#include <stdio.h>
#include<conio.h>
#include "operaciones.cpp"

using namespace std;

int Menu(){
	int opc;
	system("cls");
	printf("Conversor de unidades.\n");
	printf("1. Voltaje.\n");
	printf("2. Corriente/Amperaje.\n");
	printf("3. Resistencia/Ohm.\n");
	printf("4. Calculadora de Resistencias en paralelo.\n");
	printf("5. Salir.\n");
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
				printf("|------%0.2f------|",num2);
				printf("%0.2f             |",num1);
				printf("|------%0.2f------|", Voltaje(num1,num2));
				break;
			case 2:
				system("cls");
				printf("Introduzca el voltaje (Volts)\n"); scanf("%f",&num1);
				printf("Introduzca la resistencia(Ohms)\n"); scanf("%f",&num2);
				printf("El amperaje es igual a: %0.6f Amperes.", Corriente(num1,num2));getch();
				printf("|------%0.2f------|",num2);
				printf("%0.2f             |",Corriente(num1,num2));
				printf("|------%0.2f------|", num1);
				break;
			case 3:
                system("cls");
				printf("Introduzca el voltaje(Volts): "); scanf("%f",&num1);
				printf("Introduzca el amperaje(Amperes): "); scanf("%f",&num2);
				printf("La resistencia es igual a: %0.6f Ohms", Resistencia(num1,num2));getch;
				printf("|------%0.2f------|",Resistencia(num1,num2));
				printf("%0.2f             |",num2);
				printf("|------%0.2f------|", num1);
				break;
			case 4:
				system("cls");
				int nr;
				list<float> lista;
				float vr;
				printf("Resistencia en Paralelo.");
				printf("\n¿Cuantas ramas tiene la resistencia?");scanf("%i",&nr);
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
				printf("El valor de la resistencia es igual a %0.4f.",ResistenciaParalelo(lista));
				break;
		}
	}while(opc!=5);
}

