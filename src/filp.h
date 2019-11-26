#pragma once
#include "TelloPro.h"

class Filp: public TelloPro
{
public:
	Filp();
	Filp(int _value);
	
public:
	double get_delay();
};