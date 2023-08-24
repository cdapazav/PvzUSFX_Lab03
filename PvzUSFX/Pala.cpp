#include "Pala.h"

Pala::Pala()
{
	posicionX = 0;
	posicionY = 0;
}

Pala::Pala(float _posicionX, float _posicionY)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
}

void Pala::removerPlanta()
{
	cout<< "Removiendo planta" << endl;
}
