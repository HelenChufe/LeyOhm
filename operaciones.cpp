#include <list>
#include <stdio.h>
#include <conio.h>

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



