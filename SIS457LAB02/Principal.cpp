#include<iostream>
#include "Superviviente.h"
#include "Infectado.h"
#include "Mapa.h"
#include "Arma_de_fuego.h"
#include "Arma_cuerpo_a_cuerpo.h"
#include "Arma_arrojadiza.h"
#include "Botiquin.h"

using namespace std;

int main() {

	Superviviente* Player = new Superviviente();
	Player->speedS(10.0f);

	Infectado* Zombie = new Infectado();
	Zombie->speedI(15.0f);

	Mapa* Map = new Mapa();
	Map->ColorMap("Gray");

	Arma_de_fuego* AF = new Arma_de_fuego();
	AF->speedshotA(2.0f);

	Arma_cuerpo_a_cuerpo* AC = new Arma_cuerpo_a_cuerpo();
	AC->MaterialAC("Metal");

	Arma_arrojadiza* AA = new Arma_arrojadiza();
	AA->MaterialAR("Metal");

	Botiquin* B = new Botiquin();
	B->MaterialB("Metal");

	return 0;
}