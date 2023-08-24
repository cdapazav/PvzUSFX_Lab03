#include "Proyectil.h"

Proyectil::Proyectil()
{
	daño = 10;
	velocidad = 10;
    posicionX = 0;
	posicionY = 0;
	cantidad = 1;
	tamaño = 1;
}

Proyectil::Proyectil(float _daño, float _velocidad, float _posicionX,
	float _posicionY, int _cantidad, float _tamaño)
{
	daño = _daño;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	cantidad = _cantidad;
	tamaño = _tamaño;
}

void Proyectil::infligirDaño()
{
	cout<<"El proyectil inflige "<<daño<<" de daño"<<endl;
}

void Proyectil::mover()
{
	cout<<"El proyectil se mueve a "<<velocidad<<" de velocidad"<<endl;
}

void Proyectil::impactar()
{
	cout<<"El proyectil impacta en la posicion ("<<posicionX<<", "<<posicionY<<")"<<endl;
}
