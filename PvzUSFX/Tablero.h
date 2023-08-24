#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Tablero
{
private:
	float barraProgreso;
	vector<float> acumuladorSoles;
	vector<float> acumuladorMonedas;
	int listaPlantas[7];
	float temporizador;

public:
	//Constructores
	Tablero();
	Tablero(float _barraProgreso, vector<float> _acumuladorSoles,
	vector<float> _acumuladorMonedas, int _listaPlantas[7], float _temporizador);

	//metodos accesores
	void setgetBarraProgreso(float _barraProgreso){ barraProgreso = _barraProgreso; }
	float getBarraProgreso(){ return barraProgreso; }
	
	void setTemporizador(float _temporizador){ temporizador = _temporizador; }
	float getTemporizador(){ return temporizador; }

	//metodos de la clase
	void generarMonedas();
	void generarSoles();
	void generarZombis();
	void recolectarMonedas();
	void recolectarSoles();

};

