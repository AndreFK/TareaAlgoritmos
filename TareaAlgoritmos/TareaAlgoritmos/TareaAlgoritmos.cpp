// TareaAlgoritmos.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>

using namespace std;


//Minimo de los numeros
int minObjt(int objetos[]) {
	int objTmp;
	objTmp = objetos[0];
	for (int i = 1; i<3; i++) {
		if (objetos[i] < objTmp) {
			objTmp = objetos[i];
		}
	}
	cout << "El numero menor es: ";
	cout << objTmp << endl;
	cout << "" << endl;
	return 1;
}


//Average de Numeros
int avrObjt(int objetos[]) {
	int avg, num = 0;
	for (int i = 0; i <3; i++) {
		num += objetos[i];
	}
	avg = num / 3;
	cout << "El average es: ";
	cout << avg << endl;
	cout << "" << endl;
	return 1;
}


//Ordenar los numeros
int sorted(int objetos[]) {
	int sorting[3];
	for (int y = 0; y<3; y++) {
		sorting[y] = objetos[y];
	}
	for (int i = 0; i<3; i++) {
		for (int j = i + 1; j<3; j++) {
			if (sorting[i]>sorting[j] && (i != j)) {
				int objTmp = sorting[j];
				sorting[j] = sorting[i];
				sorting[i] = objTmp;
			}
		}
	}
	cout << "El arreglo ordenado es: ";
	for (int x = 0; x<3; x++) {
		cout << sorting[x] << " ";
	}
	cout << " " << endl;
	return 0;
}


int main()
{
	int opc = 99;
	int objetos[3];

	objetos[0] = 23;

	objetos[1] = 18;

	objetos[2] = 65;

	do {
		cout << "Arreglo original: ";
		for (int p = 0; p < 3; p++) {
			cout << objetos[p] << " ";
		}
		cout << " " << endl;
		cout << " " << endl;
		minObjt(objetos);
		avrObjt(objetos);
		sorted(objetos);
		cin >> opc;
	} while (opc != 0);

	return 0;
}
