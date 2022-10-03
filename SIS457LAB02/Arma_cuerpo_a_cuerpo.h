#pragma once
#include <iostream>

using namespace std;
class Arma_cuerpo_a_cuerpo
{
public:
	void MaterialAC(string _MaterialAC);
protected:
	float damage=15.0f;
	string color="Black";
	string form="melee weapon";
	float size=0.85f;
	float speedattack=5.0f;
public:
	string Material;
};

