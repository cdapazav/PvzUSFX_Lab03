#pragma once
#include <iostream>
#include <string>

using namespace std;

class Proyectil
{
private:
	float da�o;
	float velocidad;
	float posicionX;
	float posicionY;
	int cantidad;
	float tama�o;

public:
	//constructores
	Proyectil();
	Proyectil(float _da�o, float _velocidad, float _posicionX, float _posicionY,
		int _cantidad, float _tama�o);

	//metodos accesores
	void setDa�o(float _da�o){ da�o = _da�o; }
float getDa�o(){ return da�o; }

    void setVelocidad(float _velocidad){ velocidad = _velocidad; }
	float getVelocidad(){ return velocidad; }

    void setPosicionX(float _posicionX){ posicionX = _posicionX; }
	float getPosicionX(){ return posicionX; }

	void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }

    void setCantidad(int _cantidad){ cantidad = _cantidad; }
	int getCantidad(){ return cantidad; }

	void setTama�o(float _tama�o){ tama�o = _tama�o; }
	float getTama�o(){ return tama�o; }


	//metodos propios
	void infligirDa�o();
	void mover();
	void impactar();

};

