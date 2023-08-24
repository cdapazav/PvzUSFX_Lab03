#include "Clima.h"

Clima::Clima()
{
	 climaActual = "soleado";
	dia = "activado";
	noche = "desactivado";
	eclipse = "desactivado";
	lluvia = "desactivado";
	nublado = "desactivado";
	soleado = "activado";
	tormenta = "desactivado";
	niebla = "desactivado";
}

Clima::Clima(string _climaActual, string _dia, string _noche, string _eclipse, string _lluvia, string _nublado, string _soleado, string _tormenta, string _niebla)
{
	climaActual = _climaActual;
	climaActual = _dia;
	climaActual = _noche;
	climaActual = _eclipse;
	climaActual = _lluvia;
	climaActual = _nublado;
	climaActual = _soleado;
	climaActual = _tormenta;
	climaActual = _niebla;
}

void Clima::cambiarClima(string _climaProximo)
{
	cout << "se cambio el clima" << endl;
}

void Clima::combinarClima()
{
	cout << "se combino climas" << endl;
}
