#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pala
{
private:
	float posicionX;
	float posicionY;

public:
	//constructores
	Pala();
	Pala(float _posicionX, float _posicionY);


	//metodos accesores
	void setPosicionX(float _posicionX){ posicionX = _posicionX; }
	float getPosicionX(){ return posicionX; }

	void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }


	//metodos propios
	void removerPlanta();

};

