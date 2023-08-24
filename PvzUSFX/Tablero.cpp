#include "Tablero.h"

Tablero::Tablero()
{
	barraProgreso = 0;
	acumuladorSoles = { 0,0,0,0,0,0,0 };
	acumuladorMonedas = { 0,0,0,0,0,0,0 };
	for (int i = 0; i < 7; i++)
	temporizador = 0;
}

Tablero::Tablero(float _barraProgreso, vector<float> _acumuladorSoles, vector<float> _acumuladorMonedas, int _listaPlantas[7], float _temporizador)
{
	barraProgreso = _barraProgreso;
	acumuladorSoles = _acumuladorSoles;
	acumuladorMonedas = _acumuladorMonedas;
	for (int i = 0; i < 7; i++)
	{
		listaPlantas[i] = _listaPlantas[i];
	}
	temporizador = _temporizador;
}

void Tablero::generarMonedas()
{
	cout<<"Generando monedas"<<endl;
}

void Tablero::generarSoles()
{
	cout << "Generando soles" << endl;
}

void Tablero::generarZombis()
{
cout << "Generando zombis" << endl;
}

void Tablero::recolectarMonedas()
{
	cout<<"Recolectando monedas"<<endl;
}

void Tablero::recolectarSoles()
{
cout << "Recolectando soles" << endl;
}
