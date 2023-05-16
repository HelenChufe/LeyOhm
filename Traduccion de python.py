import os

def Voltaje(ampere, ohm):
    return ampere * ohm
def Corriente(volt, ohm):
    return volt/ohm
def Resistencia(volt, ampere):
    return volt/ampere
def ResistenciaParalelo(resistencias):
    denominador = 0 
    for i in resistencias:
        denominador += 1/i
    return 1 / denominador


while(opc != 5):
    os.system("cls")
    print("""
    Calculado electrica.
    1. Voltaje.
    2. Corriente.
    3. Resistencia.
    4. Calculadora de resistencias en paralelo.
    5. Salir.""")
    opc = int(input())
    os.system("cls")
    if(opc == 1):
        res = Voltaje(float(input("Introduce la corriente(Amperes):")),float(input("Introduce la resistencia(Ohm):")))
        print("El voltaje del circuito es de {:.2f} Volts".format(res))

    elif(opc == 2):
        res = Corriente(float(input("Introduce la voltaje(Volts):")),float(input("Introduce la resistencia(Ohm):")))
        print("La corriente del circuito es de {:.2f} Amperes".format(res))
    elif(opc == 3):
        res = Resistencia(float(input("Introduce la voltaje(Volts):")),float(input("Introduce la Corriente(Ampere):")))
        print("La resistencia del circuito es de {:.2f} Ohms".format(res))
    elif(opc == 4):
        lista = []
        n = int(input("¿Cuantas ramas tiene la resistencia?"))
        for i in range(n):
            os.system("cls")
            lista.append(float(input(f"Ingresa el valor de la resistencia {i+1}:")))
        res = ResistenciaParalelo(lista)
        os.system("cls")
        print("El resultado de la resistencia es de {:.2f} Ohms".format(res))

