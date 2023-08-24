#pragma once
#include <iostream>
#include <string>

using namespace std;

class Obstaculo
{
private:
	int posicionX;
	int posicionY;
	string tipoObstaculo;

public:
	//constructores
	Obstaculo();
	Obstaculo(int _posicionX, int _posicionY, string _tipoObstaculo);

	//metodos propios
	void colocarObstaculo();
	void removerObstaculo();




};

