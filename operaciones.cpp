#include <list>
#include <stdio.h>
#include <conio.h>

using namespace std;
float Voltaje(float ampere,float ohm ) {
	float volt;
    if (ohm <= 0) {
        printf("Error: Ohm cannot be less than or equal to 0");
        return 0;
    }
    volt=ampere*ohm;
	return volt;
}
float Corriente(float volt, float ohm) {
	float ampere;
    if (ohm <= 0) {
        printf("Error: Ohm cannot be less than or equal to 0");
        return 0;
    }
	ampere=volt/ohm;
	return ampere;
}
float Resistencia(int volt, int ampere) {
	float ohm;
    if (ampere == 0) {
        printf("Error: Ampere cannot be equal to 0");
        return 0;
    }
	ohm=volt/ampere;
	return ohm;
}
float ResistenciaParalelo(list<float> lista) {
	float resultado, denominador = 0;
	for (list<float>::iterator i = lista.begin(); i != lista.end(); ++ i){
		float item = *i;
        if (item <= 0) {
            printf("Error: Resistors cannot be less than or equal to 0");
            return 0;
        }
		denominador = denominador + (1/item);
	}
	resultado = 1/denominador;
	return resultado;
}