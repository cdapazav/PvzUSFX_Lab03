#include "Obstaculo.h"

Obstaculo::Obstaculo()
{
	posicionX= 0;
	posicionY= 0;
	tipoObstaculo= "no";
}

Obstaculo::Obstaculo(int _posicionX, int _posicionY, string _tipoObstaculo)
{
	posicionX= _posicionX;
	posicionY= _posicionY;
	tipoObstaculo= _tipoObstaculo;
}

void Obstaculo::colocarObstaculo()
{
	cout<<"Obstaculo colocado en: "<<posicionX<<","<<posicionY<<endl;
}

void Obstaculo::removerObstaculo()
{
cout<<"Obstaculo removido de: "<<posicionX<<","<<posicionY<<endl;
}
