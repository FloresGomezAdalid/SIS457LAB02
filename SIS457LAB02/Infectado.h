#pragma once
#include <iostream>

using namespace std;

class Infectado
{
public:
	void speedI(float _speedI);
	void MaterialI(float _MaterialI);
protected:
	string Color="Gray";
	string Form="Humano";
	float size=1.5;
private:
	float speed;
	string Material;
};

