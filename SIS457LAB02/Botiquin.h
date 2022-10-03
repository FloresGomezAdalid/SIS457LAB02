#pragma once
#include <iostream>

using namespace std;
class Botiquin
{
public:
	void MaterialB(string _MaterialB);
protected:
	float healing = 60.0;
	float speedcure = 10.0f;
	string Color = "Red";
	string form = "square";
	float size = 0.22f;
private:
	string Material;

};

