#pragma once
#include <iostream>

using namespace std;
class Arma_arrojadiza
{
public:
	void fallingspeedAR(float _fallingspeedAR);
	void MaterialAR(string _MaterialAR);
protected:
	float damage=5.0f;
	string color="Gray";
	string form="Bottle";
	float size=0.75f;
private:
	float fallingspeed;
	string Material;
};

