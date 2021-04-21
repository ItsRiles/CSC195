#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird() {}
	Bird(float flightSpeed) 
	{
		std::cout << "Bird construct\n";
		m_flightspeed = flightSpeed;
	}
	void Speak() override;

protected:
	float m_flightspeed = 0.0f;

};

