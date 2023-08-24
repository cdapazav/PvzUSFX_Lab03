#include "Podadora.h"

Podadora::Podadora()
{
	daño = 1000;
	velocidad = 50;
	tipoPodadora = "terrestre";
}

Podadora::Podadora(float _daño, float _velocidad, string _tipoPodadora)
{
	daño = _daño;
	velocidad = _velocidad;
	tipoPodadora = _tipoPodadora;
}

void Podadora::podar()
{
	cout << "la podadora se activo" << endl;
}
