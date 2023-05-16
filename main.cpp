#include<stdio.h>
#include<conio.h>
#include<list>
#include<limits>
#include "operaciones.cpp"


using namespace std;


int main(){
// opc es la variable designada para almacenar la decision del menu
		int opc;
	do{
		system("cls");
		printf("Conversor de unidades.\n");
		printf("1. Voltaje.\n");
		printf("2. Corriente/Amperaje.\n");
		printf("3. Resistencia/Ohm.\n");
		printf("4. Calculadora de Resistencias en paralelo.\n");
		printf("5. Salir.\n");
		printf("Elija una opcion:");
		scanf("%i",&opc);
/*Las variables num1, num2, res y resistencia seran utilizadas para la solicitud de datos o
ayudar al proceso de alguna funcion.*/
		float num1, num2, res,resistencia;
/*Con este switch podremos intercalar entre los distintos menus que tiene el programa.*/
		switch(opc){
			case 1:
				system("cls");
				printf("Introduzca la corriente (Amperes)\n"); scanf("%f",&num1);
                if (num1 < 0) {
                    printf("Error: Ampere cannot be less than 0");
                    break;
                }
				printf("Introduzca la resistencia(Ohms)\n"); scanf("%f",&num2);
                if (num2 < 0) {
                    printf("Error: Ohm cannot be less than 0");
                    break;
                }
				printf("El voltaje es igual a: %0.6fV\n", Voltaje(num1,num2));
                printf("|------%0.2fOhms------|\n",num2);
				printf("%0.2fAmp              |\n",num1);
				printf("|------%0.2fVolt------|\n", Voltaje(num1,num2));getch();
				break;
			case 2:
				system("cls");
				printf("Introduzca el voltaje (Volts)\n"); scanf("%f",&num1);
                if (num1 < 0) {
                    printf("Error: Volt cannot be less than 0");
                    break;
                }
				printf("Introduzca la resistencia(Ohms)\n"); scanf("%f",&num2);
                if (num2 < 0) {
                    printf("Error: Ohm cannot be less than 0");
                    break;
                }
				printf("El amperaje es igual a: %0.6f Amperes.\n", Corriente(num1,num2));
                printf("|------%0.2fOhms------|\n",num2);
				printf("%0.2fAmp              |\n",Corriente(num1,num2));
				printf("|------%0.2fVolt------|\n", num1);getch();
				break;
			case 3:
                system("cls");
				printf("Introduzca el voltaje(Volts): "); scanf("%f",&num1);
                if (num1 < 0) {
                    printf("Error: Volt cannot be less than 0");
                    break;
                }
				printf("Introduzca el amperaje(Amperes): "); scanf("%f",&num2);
                if (num2 < 0) {
                    printf("Error: Ampere cannot be less than 0");
                    break;
                }
				resistencia = Resistencia(num1, num2);
				printf("La resistencia es igual a: %0.6f Ohms\n",resistencia );
				printf("|------%0.2fOhms------|\n",Resistencia(num1,num2));
				printf("%0.2fAmp              |\n",num2);
				printf("|------%0.2fVolt------|\n", num1);getch();
				break;
			case 4:
				system("cls");
				int nr;
				list<float> lista;
				float vr;
				printf("Resistencia en Paralelo.");
				printf("\n¿Cuantas ramas tiene la resistencia?");scanf("%i",&nr);
				system("cls");
				bool wi;
				for (int i = 1; i <= nr; i++) {
					do
					{
						wi = true;
						printf("Ingrese el valor en Ohms de la resistencia %i:",i);
						scanf("%f",&vr);
                        if (vr < 0) {
                            printf("Error: Resistors cannot be less than 0");
                            break;
                        }
						else if (vr>=1)
						{
							lista.push_back(vr);
							break;
						}
						else
						{
							system("cls");
							printf("Una resistencia no puede tener un valor de 0 un valor negativo.");
						}
					} while (wi);
				}
				printf("El valor de la resistencia es igual a %f.\n",ResistenciaParalelo(lista));
				getch();
				break;}
	}while(opc!=5);
	return 0;
}