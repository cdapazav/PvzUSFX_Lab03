#pragma once
#include <iostream>
#include <string>

using namespace std;

class Casilla
{
private:
	int posicionX;
	int posicionY;
	int alto;
	int ancho;
	bool visible;
	string estado;
	string material;
	string contenido; 

public:
	//constructores
	Casilla();
	Casilla(int _posicionX, int _posicionY, int _alto, int _ancho, bool _visible,
		string _estado, string _material, string _contenido);

	//metodos accesores
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	int getPosicionX() { return posicionX; }

	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
    int getPosicionY() { return posicionY; }

	 void setAlto(int _alto) { alto = _alto; }
	int getAlto() { return alto; }

    void setAncho(int _ancho) { ancho = _ancho; }
	int getAncho() { return ancho; }

	void setVisible(bool _visible) { visible = _visible; }
    bool getVisible() { return visible; }

    void setEstado(string _estado) { estado = _estado; }
	string getEstado() { return estado; }

	void setMaterial(string _material) { material = _material; }
	string getMaterial() { return material; }

	void setContenido(string _contenido) { contenido = _contenido; }
	string getContenido() { return contenido; }


	//metodos propios
	void verificarColision();
	void obtenerVecinos();



};

