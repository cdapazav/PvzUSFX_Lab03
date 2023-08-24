#pragma once
#include <iostream>
#include <string>
#include "Planta.h"

using namespace std;

class Zombi
{
private:
    float vida;
    float resistencia;
    float daño;
    float velocidad;
    float posicionX;
    float posicionY;
    float direccionX;
    float direccionY;
    string tipoZombi;
    string tamaño;
    string escudo;
    string habilidadEspecial;
    string nombre;

public:
    //constructores
    Zombi();
    Zombi(string _nombre);
    Zombi(float _vida, float _resistencia,float _daño, float _velocidad, float _posicionX, 
        float _posicionY, float _direccionX, float _direccionY, string _tipoZombi, string _tamaño, string _escudo,
        string _habilidadEspecial, string _nombre);

    //metodos accesores
    void setVida(float _vida){vida = _vida;}
    float getVida(){return vida;}

    void setResistencia(float _resistencia){resistencia = _resistencia;}
    float getResistencia(){return resistencia;}

    void setDaño(float _daño){daño = _daño;}
    float getDaño(){return daño;}

    void setVelocidad(float _velocidad){velocidad = _velocidad;}
    float getVelocidad(){return velocidad;}

    void setPosicionX(float _posicionX){posicionX = _posicionX;}
    float getPosicionX(){return posicionX;}

    void setPosicionY(float _posicionY){posicionY = _posicionY;}
    float getPosicionY(){return posicionY;}

    void setDireccionX(float _direccionX){direccionX = _direccionX;}
    float getDireccionX(){return direccionX;}

    void setDireccionY(float _direccionY){direccionY = _direccionY;}
    float getDireccionY(){return direccionY;}

    void setTipoZombi(string _tipoZombi){tipoZombi = _tipoZombi;}
    string getTipoZombi(){return tipoZombi;}

    void setTamaño(string _tamaño){tamaño = _tamaño;}
    string getTamaño(){return tamaño;}

    void setEscudo(string _escudo){escudo = _escudo;}
    string getEscudo(){return escudo;}

    void setHabilidadEspecial(string _habilidadEspecial){habilidadEspecial = _habilidadEspecial;}
    string getHabilidadEspecial(){return habilidadEspecial;}

    void setNombre(string _nombre){nombre = _nombre;}
    string getNombre(){return nombre;}


    //metodos propios
    void caminar();
    void comer();
    void explotar();
    void quemar();
    void lanzar();
    void morir();
    void volar();
    void disparar();
    void excavar();
    void serCongelado();

};

