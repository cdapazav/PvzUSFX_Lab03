#pragma once
#include <iostream>
#include <string>

using namespace std;

class Podadora
{
private:
	float daño;
	float velocidad;	
	string tipoPodadora;

public:
	//constructores
	Podadora();
	Podadora(float _daño, float _velocidad, string _tipoPodadora);

	//metodos accesores
	void setDaño(float _daño){ daño = _daño; }
	float getDaño(){ return daño; }

    void setVelocidad(float _velocidad){ velocidad = _velocidad; }
	float getVelocidad(){ return velocidad; }

	void setTipoPodadora(string _tipoPodadora){ tipoPodadora = _tipoPodadora; }
	string getTipoPodadora(){ return tipoPodadora; }
    
	//metodos propios
	void podar();


};

