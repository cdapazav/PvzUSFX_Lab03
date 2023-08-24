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
    float da�o;
    float velocidad;
    float posicionX;
    float posicionY;
    float direccionX;
    float direccionY;
    string tipoZombi;
    string tama�o;
    string escudo;
    string habilidadEspecial;
    string nombre;

public:
    //constructores
    Zombi();
    Zombi(string _nombre);
    Zombi(float _vida, float _resistencia,float _da�o, float _velocidad, float _posicionX, 
        float _posicionY, float _direccionX, float _direccionY, string _tipoZombi, string _tama�o, string _escudo,
        string _habilidadEspecial, string _nombre);

    //metodos accesores
    void setVida(float _vida){vida = _vida;}
    float getVida(){return vida;}

    void setResistencia(float _resistencia){resistencia = _resistencia;}
    float getResistencia(){return resistencia;}

    void setDa�o(float _da�o){da�o = _da�o;}
    float getDa�o(){return da�o;}

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

    void setTama�o(string _tama�o){tama�o = _tama�o;}
    string getTama�o(){return tama�o;}

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

