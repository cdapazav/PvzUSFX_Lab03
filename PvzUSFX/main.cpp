#include <iostream>
#include <string>
#include <vector>
#include "Zombi.h"
#include "Planta.h"
#include "Tablero.h"
#include "Sol.h"
#include "Podadora.h"
#include "Jardin.h"
#include "Casilla.h"
#include "Clima.h"
#include "Moneda.h"
#include "Nivel.h"
#include "Obstaculo.h"
#include "Pala.h"
#include "Proyectil.h"

using namespace std;

int main() {

	Tablero tablerito;
	cout << "la barra de progreso es de: " << tablerito.getBarraProgreso() << endl << endl;

	Jardin jardincito;
	cout << "el jardin de cesped tiene: " << jardincito.getFilas() << " filas" << endl << endl;

	Casilla casillita;
	cout<< "la casilla tiene: " << casillita.getPosicionX() << " de posicion en X" << endl<< endl;

	Podadora podadorita;
	cout << "la podadora hace: " << podadorita.getDaño() << " de daño" << endl << endl;

	Clima climita;
	cout << "el clima es: " << climita.getClimaActual() << endl << endl;

	Planta plantita;
	cout << "la planta tiene: " << plantita.getVida() << " de vida" << endl << endl;

    Zombi Juanito("Juanito");
	cout << "El nombre del zombie es: " << Juanito.getNombre() << endl;
	cout << "La energia del zombie es: " << Juanito.getVida() << endl;
	cout << "La velocidad del zombie es: " << Juanito.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Juanito.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanito.getPosicionY() << endl;
	cout << "El tipo de zombie es: " << Juanito.getTipoZombi() << endl;


    return 0;
}
