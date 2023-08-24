#include "Casilla.h"

Casilla::Casilla()
{
	posicionX = -10;
	posicionY = 10;
	alto = 10;
	ancho = 5;
	visible = true;
	estado = "desocupado";
	material = "cesped";
	contenido = "vacio";
}

Casilla::Casilla(int _posicionX, int _posicionY, int _alto, int _ancho,
	 bool _visible, string _estado, string _material, string _contenido)
{
posicionX = _posicionX;
	posicionY = _posicionY;
	alto = _alto;
	ancho = _ancho;
	visible = _visible;
	estado = _estado;
	material = _material;
	contenido = _contenido;
}

void Casilla::verificarColision()
{
	cout << "se verifico las coliciones" << endl;
}

void Casilla::obtenerVecinos()
{
	cout << "se obtuvo las casillas vecinas" << endl;
}
