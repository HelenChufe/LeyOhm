#include<stdio.h>
#include<conio.h>
#include<windows.h>

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
                system("cls");
                printf("Introduzca la corriente (Amperes)\n");
                scanf("%f",&num1);
                printf("Introduzca la resistencia(Ohms)\n");
                scanf("%f",&num2);
                res=num1*num2;
                printf("El voltaje es igual a: %0.6fV", res);
                getch();
				break;
			case 2:
				system("cls");
				printf("Introduzca el voltaje (Volts)\n");
                scanf("%f",&num1);
                printf("Introduzca la resistencia(Ohms)\n");
                scanf("%f",&num2);
                res=num1/num2;
                printf("El amperaje es igual a: %0.6f Amperes.", res);
                getch();
				break;
			case 3:
                system("cls");
                printf("Introduzca el voltaje(Volts): ");
                scanf("%f",&num1);
                printf("Introduzca el amperaje(Amperes): ");
                scanf("%f",&num2);
                res=num1/num2;
                printf("La resistencia es igual a: %0.6f Ohms", res);
                getch();
				break;
			case 4:
				break;
		}
	}while(opc!=4);
}

main(){
    menuPrincipal();
}
	