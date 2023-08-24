#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nivel
{
private:
	int numeroNivel;
	string dificultad;
	string objetivos;
	string zombisDisponibles;
	float solesIniciales;
	string plantasDisponibles;
	string condicionesVictoria;

public:
	//constructores
	Nivel();
	Nivel(int _numeroNivel, string _dificultad, string _objetivos, string _zombisDisponibles,
		float _solesIniciales, string _plantasDisponibles, string _condicionesVictoria);


	//metodos accesores
	void setNumeroNivel(int _numeroNivel){ numeroNivel = _numeroNivel; }
	int getNumeroNivel(){ return numeroNivel; }

    void setDificultad(string _dificultad){ dificultad = _dificultad; }
	string getDificultad(){ return dificultad; }

	void setObjetivos(string _objetivos){ objetivos = _objetivos; }
	string getObjetivos(){ return objetivos; }

	void setZombisDisponibles(string _zombisDisponibles){ zombisDisponibles = _zombisDisponibles; }
	string getZombisDisponibles(){ return zombisDisponibles; }

	void setSolesIniciales(float _solesIniciales){ solesIniciales = _solesIniciales; }
	float getSolesIniciales(){ return solesIniciales; }

	void setPlantasDisponibles(string _plantasDisponibles){ plantasDisponibles = _plantasDisponibles; }
	string getPlantasDisponibles(){ return plantasDisponibles; }

	void setCondicionesVictoria(string _condicionesVictoria){ condicionesVictoria = _condicionesVictoria; }
	string getCondicionesVictoria(){ return condicionesVictoria; }


	//metodos de la clase
	void cambiarNivel();
	void cambiarDificultad();
};

