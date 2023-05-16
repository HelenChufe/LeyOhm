#include <iostream>
using namespace std;
 float Voltaje(float ampere, float ohm) {
    return ampere * ohm;
}
 float Corriente(float volt, float ohm) {
    return volt / ohm;
}
 float Resistencia(float volt, float ampere) {
    return volt / ampere;
}
 float ResistenciaParalelo(float resistencias[], int n) {
    float denominador = 0;
    for (int i = 0; i < n; i++) {
        denominador += 1 / resistencias[i];
    }
    return 1 / denominador;
}
 int main() {
    int opc = 0;
     while (opc != 5) {
        system("cls");
        cout << "\nCalculador eléctrico.";
        cout << "\n1. Voltaje.";
        cout << "\n2. Corriente.";
        cout << "\n3. Resistencia.";
        cout << "\n4. Calculadora de resistencias en paralelo.";
        cout << "\n5. Salir.\n";
        cin >> opc;
        system("cls");
         float res = 0;
         if (opc == 1) {
            res = Voltaje(float(input("Introduce la corriente(Amperes):")),float(input("Introduce la resistencia(Ohm):")));
            printf("El voltaje del circuito es de %.2f Volts", res);
        }
        else if (opc == 2) {
            res = Corriente(float(input("Introduce la voltaje(Volts):")),float(input("Introduce la resistencia(Ohm):")));
            printf("La corriente del circuito es de %.2f Amperes", res);
        }
        else if (opc == 3) {
            res = Resistencia(float(input("Introduce la voltaje(Volts):")),float(input("Introduce la Corriente(Ampere):")));
            printf("La resistencia del circuito es de %.2f Ohms", res);
        }
        else if (opc == 4) {
            int n = 0;
            cout << "¿Cuantas ramas tiene la resistencia?";
            cin >> n;
            float lista[n];
            for (int i = 0; i < n; i++) {
                system("cls");
                cout << "Ingresa el valor de la resistencia " << (i + 1) << ":";
                cin >> lista[i];
            }
            res = ResistenciaParalelo(lista, n);
            system("cls");
            printf("El resultado de la resistencia es de %.2f Ohms", res);
        }
        else if (opc == 5) {
            break;
        }
        else {
            cout << "Opción inválida.";
        }
        cin.ignore();
        cin.get();
    }
    return 0;
}