#include <list>
#include <stdio.h>
#include <conio.h>

using namespace std;
float Voltaje(float ampere,float ohm ) {
	float volt;
    volt=ampere*ohm;
	return volt;
}

float Corriente(float volt, float ohm) {
	float ampere;
	ampere=volt/ohm;
	return ampere;
}

float Resistencia(int volt, int ampere) {
	float ohm;
	ohm=volt/ampere;
	return ohm;
}

float ResistenciaParalelo(list<float> lista) {
	float resultado, denominador = 0;

	for (list<float>::iterator i = lista.begin(); i != lista.end(); ++ i){
		float item = *i;
		denominador = denominador + (1/item);
	}
	resultado = 1/denominador;
	return resultado;
}