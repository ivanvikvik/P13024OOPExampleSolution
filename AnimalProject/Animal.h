#pragma once
#include "main.h"

// abstract class
class Animal
{
public:
	string name;

	Animal(string name) : name(name) {}

	// overriding
	virtual void getVoice() = 0 {
		//...
	}
};

