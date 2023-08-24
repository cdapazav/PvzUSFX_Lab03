#include "Jardin.h"

Jardin::Jardin()
{
	filas = 5;
	columnas = 10;
}

Jardin::Jardin(int _filas, int _columnas)
{
	filas = _filas;
	columnas = _columnas;
}

void Jardin::obtenerCasilla()
{
	cout<<"Obteniendo casilla"<<endl;
}

void Jardin::colocarElementoEnCasilla()
{
	cout<<"Colocando elemento en casilla"<<endl;
}

void Jardin::removerElementoDeCasilla()
{
	cout<<"Removiendo elemento de casilla"<<endl;
}

void Jardin::verificarEstadoCasilla()
{
	cout<<"Verificando estado de casilla"<<endl;
}
