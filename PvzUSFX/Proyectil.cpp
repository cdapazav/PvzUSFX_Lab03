#include "Proyectil.h"

Proyectil::Proyectil()
{
	da�o = 10;
	velocidad = 10;
    posicionX = 0;
	posicionY = 0;
	cantidad = 1;
	tama�o = 1;
}

Proyectil::Proyectil(float _da�o, float _velocidad, float _posicionX,
	float _posicionY, int _cantidad, float _tama�o)
{
	da�o = _da�o;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	cantidad = _cantidad;
	tama�o = _tama�o;
}

void Proyectil::infligirDa�o()
{
	cout<<"El proyectil inflige "<<da�o<<" de da�o"<<endl;
}

void Proyectil::mover()
{
	cout<<"El proyectil se mueve a "<<velocidad<<" de velocidad"<<endl;
}

void Proyectil::impactar()
{
	cout<<"El proyectil impacta en la posicion ("<<posicionX<<", "<<posicionY<<")"<<endl;
}
