#pragma once
#include <iostream>

using namespace std;

class Superviviente
{
public:
	void speedS(float _speedS);
	void MaterialS(float _MaterialS);
protected:
	string Color="Black";//color del superviviente
	string Form="Humano";//forma del superviviente
	float size=1.3f;//tamaño del superviviente
private:
	float speed;//velocidad
	string Material;//Material del superviviente
};

