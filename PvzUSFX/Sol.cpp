#include "Sol.h"

Sol::Sol()
{
	posicionX = 0;
	posicionY = 0;
	valor = 50;
	tamaño = 10;
}

Sol::Sol(float _posicionX, float _posicionY, int _valor, float _tamaño)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	valor = _valor;
	tamaño = _tamaño;
}

void Sol::aparecer()
{
	cout<<"aparecio un sol"<<endl;
}

void Sol::desaparecer()
{
	cout<<"desaparecio un sol"<<endl;
}