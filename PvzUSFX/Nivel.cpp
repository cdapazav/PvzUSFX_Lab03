#include "Nivel.h"

Nivel::Nivel()
{
	numeroNivel = 1;
	dificultad = "facil";
	objetivos = "matar a todos los zombies";
	zombisDisponibles = "zombie comun, zombie cono, zombie cubo";
	solesIniciales = 50;
	plantasDisponibles = "girasol, lanza guisantes, petacereza";
	condicionesVictoria = "matar a todos los zombies";

}

Nivel::Nivel(int _numeroNivel, string _dificultad, string _objetivos, string _zombisDisponibles, float _solesIniciales, string _plantasDisponibles, string _condicionesVictoria)
{
	numeroNivel = _numeroNivel;
	dificultad = _dificultad;
	objetivos = _objetivos;
	zombisDisponibles = _zombisDisponibles;
	solesIniciales = _solesIniciales;
	plantasDisponibles = _plantasDisponibles;
	condicionesVictoria = _condicionesVictoria;
}

void Nivel::cambiarNivel()
{
	cout << "se cambio de nivel" << endl;
}

void Nivel::cambiarDificultad()
{
	cout << "se cambio la dificultad" << endl;
}
