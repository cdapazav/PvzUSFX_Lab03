#include "Sol.h"

Sol::Sol()
{
	posicionX = 0;
	posicionY = 0;
	valor = 50;
	tama�o = 10;
}

Sol::Sol(float _posicionX, float _posicionY, int _valor, float _tama�o)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	valor = _valor;
	tama�o = _tama�o;
}

void Sol::aparecer()
{
	cout<<"aparecio un sol"<<endl;
}

void Sol::desaparecer()
{
	cout<<"desaparecio un sol"<<endl;
}