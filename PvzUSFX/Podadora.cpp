#include "Podadora.h"

Podadora::Podadora()
{
	da�o = 1000;
	velocidad = 50;
	tipoPodadora = "terrestre";
}

Podadora::Podadora(float _da�o, float _velocidad, string _tipoPodadora)
{
	da�o = _da�o;
	velocidad = _velocidad;
	tipoPodadora = _tipoPodadora;
}

void Podadora::podar()
{
	cout << "la podadora se activo" << endl;
}
