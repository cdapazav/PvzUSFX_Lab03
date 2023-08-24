#pragma once
#include <iostream>
#include <string>

using namespace std;

class Planta
{
private:
    string nombre;
    string tipoPlanta;
    /*string tipoAtaque;*/
    string habilidadEspecial;
    int costoSol;
    float vida;
    float daño;
    float tiempoRecarga;
    float rangoAtaque;
    int frecuenciaAtaque;

public:

    //Constructores
    Planta();
    Planta(string _nombre);
    Planta(string _nombre, string _tipoPlanta, string _habilidadEspecial, 
        int _costoSol, float _vida, float _daño,
        float _tiempoRecarga, float _rangoAtaque, int _frecuenciaAtaque);

    //metodos accesores
    void setNombre(string _nombre){ nombre = _nombre; }
    string getNombre(){ return nombre; }

    void setTipoPlanta(string _tipoPlanta){ tipoPlanta = _tipoPlanta; }
    string getTipoPlanta(){ return tipoPlanta; }

	void setHabilidadEspecial(string _habilidadEspecial){ habilidadEspecial = _habilidadEspecial; }
    string getHabilidadEspecial(){ return habilidadEspecial; }

	void setCostoSol(int _costoSol){ costoSol = _costoSol; }
    int getCostoSol(){ return costoSol; }

	void setVida(float _vida){ vida = _vida; }
    float getVida(){ return vida; }

    void setDaño(float _daño){ daño = _daño; }
    float getDaño(){ return daño; }

    void setTiempoRecarga(float _tiempoRecarga){ tiempoRecarga = _tiempoRecarga; }
    float getTiempoRecarga(){ return tiempoRecarga; }

    void setRangoAtaque(float _rangoAtaque){ rangoAtaque = _rangoAtaque; }
    float getRangoAtaque(){ return rangoAtaque; }

    void setFrecuenciaAtaque(int _frecuenciaAtaque){ frecuenciaAtaque = _frecuenciaAtaque; }
    int getFrecuenciaAtaque(){ return frecuenciaAtaque; }


    //metodos propios
        
    void disparar();
    void plantar(int x, int y);
    void generarSoles();
    void morir();
    void explotar();
    void quemar();
    void comer();
    void relentizar();


};

