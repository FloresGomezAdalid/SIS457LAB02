#pragma once
#include <iostream>

using namespace std;
class Arma_de_fuego
{
public:
	void speedshotA(float _speedshotA);
	void MaterialA(float _MaterialA);
protected:
	float damage=10.0f;
	string color="gray";
	string form="Rifle";
	float size=0.75f;
private:
	float speedshot;
	string Material;
};

