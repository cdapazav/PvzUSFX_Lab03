#pragma once
#include <iostream>
#include <string>

using namespace std;

class Proyectil
{
private:
	float daño;
	float velocidad;
	float posicionX;
	float posicionY;
	int cantidad;
	float tamaño;

public:
	//constructores
	Proyectil();
	Proyectil(float _daño, float _velocidad, float _posicionX, float _posicionY,
		int _cantidad, float _tamaño);

	//metodos accesores
	void setDaño(float _daño){ daño = _daño; }
float getDaño(){ return daño; }

    void setVelocidad(float _velocidad){ velocidad = _velocidad; }
	float getVelocidad(){ return velocidad; }

    void setPosicionX(float _posicionX){ posicionX = _posicionX; }
	float getPosicionX(){ return posicionX; }

	void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }

    void setCantidad(int _cantidad){ cantidad = _cantidad; }
	int getCantidad(){ return cantidad; }

	void setTamaño(float _tamaño){ tamaño = _tamaño; }
	float getTamaño(){ return tamaño; }


	//metodos propios
	void infligirDaño();
	void mover();
	void impactar();

};

