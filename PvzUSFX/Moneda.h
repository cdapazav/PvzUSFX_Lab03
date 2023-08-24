#pragma once
#include <iostream>
#include <string>

using namespace std;

class Moneda
{
private:
	string material;
	float posicionX;
	float posicionY;
	int valor;
	float tiempoDesaparicion;

public:
	//Constructores
	Moneda();
	Moneda(string _material, float _posicionX, float _posicionY, int _valor,
		float _tiempoDesaparicion);


	//metodos accesores
	void setMaterial(string _material){ material = _material; }
	string getMaterial(){return material;}

	void setPosicionX(float _posicionX){ posicionX = _posicionX; }
    float getPosicionX(){ return posicionX; }

	 void setPosicionY(float _posicionY){ posicionY = _posicionY; }
	float getPosicionY(){ return posicionY; }

    void setValor(int _valor){ valor = _valor; }
	int getValor(){ return valor; }

    void setTiempoDesaparicion(float _tiempoDesaparicion){ tiempoDesaparicion = _tiempoDesaparicion; }
	float getTiempoDesaparicion(){ return tiempoDesaparicion; }


	//metodos propios
	void aparecer();
	void desaparecer();
	void obtenerMaterial();
};

