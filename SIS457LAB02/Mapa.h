#pragma once
#include<iostream>

using namespace std;
class Mapa
{
public:
	void ColorMap(string _ColorMap); 
protected:
	string form = "triangle";
	float size = 10.0f;
	string Material = "Rock";
private:
	string Color;
};

