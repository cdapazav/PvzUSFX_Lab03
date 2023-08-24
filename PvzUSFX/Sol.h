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
	float tama�o;

public:
	//Constructores
	Sol();
	Sol(float _posicionX, float _posicionY, int _valor, float _tama�o);

	//Metodos Accesores
	void setPosicionX(float _posicionX){ posicionX = _posicionX; }
	float getPosicionX(){ return posicionX; }

	void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }

	void setValor(int _valor){ valor = _valor; }
	int getValor(){ return valor; }

    void setTama�o(float _tama�o){ tama�o = _tama�o; }
	float getTama�o(){ return tama�o; }

	//Metodos de la clase
	void aparecer();
	void desaparecer();


};

