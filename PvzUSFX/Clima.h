#pragma once
#include <iostream>
#include <string>

using namespace std;

class Clima
{
private:
	string climaActual;
	string dia;
	string noche;
	string eclipse;
	string lluvia;
	string nublado;
	string soleado;
	string tormenta;
	string niebla;

public:
	//constructores
	Clima();
	Clima(string _climaActual, string _dia, string _noche, string _eclipse, string _lluvia, string _nublado, string _soleado, string _tormenta, string _niebla);

	//metodos accesores
	void setClimaActual(string _climaActual) { climaActual = _climaActual; }
	string getClimaActual() { return climaActual; }

	void setDia(string _dia) { climaActual = _dia; }
	string getDia() { return dia; }

	void setNoche(string _noche) { climaActual = _noche; }
	string getNoche() { return noche; }

	void setEclipse(string _eclipse) { climaActual = _eclipse; }
	string getEclipse() { return eclipse; }

	void setLluvia(string _lluvia) { climaActual = _lluvia; }
	string getLluvia() { return lluvia; }

	void setNublado(string _nublado) { climaActual = _nublado; }
	string getNublado() { return nublado; }

	void setSoleado(string _soleado) { climaActual = _soleado; }
	string getSoleado() { return soleado; }

	void setTormenta(string _tormenta) { climaActual = _tormenta; }
	string getTormenta() { return tormenta; }

	void setNiebla(string _niebla) { climaActual = _niebla; }
	string getNiebla() { return niebla; }


	//metodos propios
	void cambiarClima(string _climaProximo);
	void combinarClima();


};

