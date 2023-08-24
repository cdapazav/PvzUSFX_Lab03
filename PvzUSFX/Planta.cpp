#include "Planta.h"

Planta::Planta()
{
    nombre= "Planta anonima";
    tipoPlanta= "girasol";
    habilidadEspecial= "generar soles";
    costoSol= 50;
	vida= 100;
    daño= 0;
    tiempoRecarga= 5;
    rangoAtaque= 0;
    frecuenciaAtaque= 0;
}

Planta::Planta(string _nombre)
{
    nombre= _nombre;
	tipoPlanta= "girasol";
	habilidadEspecial= "generar soles";
	costoSol= 50;
	vida= 100;
	daño= 0;
	tiempoRecarga= 5;
	rangoAtaque= 0;
	frecuenciaAtaque= 0;
}

Planta::Planta(string _nombre, string _tipoPlanta, string _habilidadEspecial, 
    int _costo, float _vida, float _daño, float _tiempoRecarga, 
    float _rangoAtaque, int _frecuenciaAtaque)
{
    nombre= _nombre;
    tipoPlanta= _tipoPlanta;
    habilidadEspecial= _habilidadEspecial;
    costoSol= _costo;
    vida= _vida;
    daño= _daño;
    tiempoRecarga= _tiempoRecarga;
    rangoAtaque= _rangoAtaque;
    frecuenciaAtaque= _frecuenciaAtaque;
}

void Planta::disparar()
{
	cout << "Planta disparando" << endl;

}

void Planta::plantar(int x, int y)
{
	cout << "Planta plantada en " << x << ", " << y << endl;
}

void Planta::generarSoles()
{
	cout << "Planta generando soles" << endl;
}

void Planta::morir()
{
    vida = 0;
cout << "Planta muerta" << endl;
}

void Planta::explotar()
{
	cout << "Planta explotada" << endl;
}

void Planta::quemar()
{
	cout << "Planta quemada" << endl;
}

void Planta::comer()
{
	cout << "Planta comio un zombi" << endl;
}

void Planta::relentizar()
{
	cout << "Planta relentizada" << endl;
}
