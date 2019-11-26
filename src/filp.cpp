#include "filp.h"
#include <cstring>
#include <sstream>

Filp::Filp()
{
	command = new char[strlen("Filp 20")+1];
	strcpy(command, "Filp 20");
}

Filp::Filp(int _value)
{
	std::stringstream sstream;
	sstream << "filp" << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Filp::get_delay()
{ 
	return 5; 
}