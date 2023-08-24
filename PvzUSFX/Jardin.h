#pragma once
#include <iostream>
#include <string>
#include "casilla.h"
#include <vector>

using namespace std;

class Jardin
{
private:
	int filas;
	int columnas;
	vector<vector<Casilla>> Casillas;

public:
	//constructores
	Jardin();
	Jardin(int _filas, int _columnas);

	//metodos accesores
	void setFilas(int _filas){ filas = _filas; }
	int getFilas(){ return filas; }

	void setColumnas(int _columnas){ columnas = _columnas; }
	int getColumnas(){ return columnas; }

	//metodos propios
	void obtenerCasilla();
	void colocarElementoEnCasilla();
	void removerElementoDeCasilla();
	void verificarEstadoCasilla();



};

