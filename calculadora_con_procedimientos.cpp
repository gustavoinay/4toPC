// calculadora_con_procedimientos.cpp: define el punto de entrada de la aplicación de consola.
//
/*
	Programador: Marvin Ajvatz
	Descripción: Calculadora con procedimientos
*/
#include "stdafx.h"
#include "iostream"

using namespace std;

void sumar();
int main()
{
	int opcion = 0;
	while (opcion!=5)
	{
		cout << "**************** Menu Principal **********+";
		cout << "\n";
		cout << "1. Sumar";
		cout << "\n";
		cout << "2. Restar";
		cout << "\n";
		cout << "3. Multiplicar";
		cout << "\n";
		cout << "4. Dividir";
		cout << "\n";
		cout << "5. Salir";
		cout << "\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion)
		{
		case 1: system("cls"); sumar(); system("cls"); break;
			break;
		}

	}
	return 0;
}

void sumar() {
	int numero1, numero2, resultado;
	cout << "Ingrese cantidad1: ";
	cin >> numero1;
	cout << "\n";
	cout << "Ingrese cantidad2: ";
	cin >> numero2;
	resultado = numero1 + numero2;
	cout << "\n";
	cout << "El resultado de la suma es: "<<resultado;
	cout << "\n";
	system("pause");

}
