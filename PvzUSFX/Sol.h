#pragma once
#include <iostream>
#include <string>

using namespace std;

class Sol
{
private:
	float posicionX;
	float posicionY;
	int valor;
	float tamaño;

public:
	//Constructores
	Sol();
	Sol(float _posicionX, float _posicionY, int _valor, float _tamaño);

	//Metodos Accesores
	void setPosicionX(float _posicionX){ posicionX = _posicionX; }
	float getPosicionX(){ return posicionX; }

	void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }

	void setValor(int _valor){ valor = _valor; }
	int getValor(){ return valor; }

    void setTamaño(float _tamaño){ tamaño = _tamaño; }
	float getTamaño(){ return tamaño; }

	//Metodos de la clase
	void aparecer();
	void desaparecer();


};

