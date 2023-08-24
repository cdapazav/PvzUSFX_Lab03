#include "Zombi.h"

Zombi::Zombi()
{
	vida = 100;
	resistencia=0;
    daño = 10;
	velocidad = 30;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	direccionX = 0.0f;
	direccionY = 0.0f;
	tipoZombi = "Zombie normal";
    tamaño="medio";
    escudo="no";
    habilidadEspecial="no";
	nombre = "Zombie anonimo";

}

Zombi::Zombi(string _nombre)
{
	vida = 100;
	resistencia=0;
	daño = 10;
	velocidad = 30;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	direccionX = 0.0f;
	direccionY = 0.0f;
	tipoZombi = "Zombie normal";
	tamaño="medio";
	escudo="no";
	habilidadEspecial="no";
	nombre = _nombre;	
}

Zombi::Zombi(float _vida, float _resistencia, float _daño, float _velocidad, float _posicionX, 
    float _posicionY, float _direccionX, float _direccionY, string _tipoZombi, string _tamaño, string _escudo,
    string _habilidadEspecial, string _nombre)
{
    vida = _vida;
	resistencia = _resistencia;
	daño = _daño;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	direccionX = _direccionX;
	direccionY = _direccionY;
	tipoZombi = _tipoZombi;
	tamaño = _tamaño;
	escudo = _escudo;
	habilidadEspecial = _habilidadEspecial;
	nombre = _nombre;   
}

void Zombi::caminar()
{
	posicionX += velocidad;
	posicionY += velocidad;
	cout << "Zombie caminando" << endl;
}

void Zombi::comer()
{
	cout << "Zombie comiendo" << endl;
}

void Zombi::explotar()
{
cout << "Zombie explotando" << endl;
}

void Zombi::quemar()
{
cout << "Zombie quemando" << endl;
}

void Zombi::lanzar()
{
	cout<<"Zombie lanzando"<<endl;
}

void Zombi::morir()
{
	vida = 0;
cout << "Zombie muerto" << endl;
}

void Zombi::volar()
{
cout << "Zombie volando" << endl;
}

void Zombi::disparar()
{
cout << "Zombie disparando" << endl;
}

void Zombi::excavar()
{
cout << "Zombie excavando" << endl;
}

void Zombi::serCongelado()
{
	velocidad = 0;
	cout << "Zombie congelado" << endl;
}
