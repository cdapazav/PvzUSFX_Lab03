#pragma once
#include <iostream>
#include <string>

using namespace std;

class Podadora
{
private:
	float da�o;
	float velocidad;	
	string tipoPodadora;

public:
	//constructores
	Podadora();
	Podadora(float _da�o, float _velocidad, string _tipoPodadora);

	//metodos accesores
	void setDa�o(float _da�o){ da�o = _da�o; }
	float getDa�o(){ return da�o; }

    void setVelocidad(float _velocidad){ velocidad = _velocidad; }
	float getVelocidad(){ return velocidad; }

	void setTipoPodadora(string _tipoPodadora){ tipoPodadora = _tipoPodadora; }
	string getTipoPodadora(){ return tipoPodadora; }
    
	//metodos propios
	void podar();


};

