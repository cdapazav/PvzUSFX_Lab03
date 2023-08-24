#include "Moneda.h"

Moneda::Moneda()
{
	material = "bronce";
	posicionX = 0;
    posicionY = 0;
	valor = 1;
	tiempoDesaparicion = 0;
}

Moneda::Moneda(string _material, float _posicionX, float _posicionY, int _valor, float _tiempoDesaparicion)
{
material = _material;
	posicionX = _posicionX;
	posicionY = _posicionY;
	valor = _valor;
	tiempoDesaparicion = _tiempoDesaparicion;
}

void Moneda::aparecer()
{
	cout<<"Apareciendo moneda"<<endl;
}

void Moneda::desaparecer()
{
	cout<<"Desapareciendo moneda"<<endl;
}

void Moneda::obtenerMaterial()
{
	cout<<"El material de la moneda es: "<<material<<endl;
}
