#pragma once
#include "Eventos.h"
#include <string>
#include <msclr\marshal_cppstd.h>
class Alarma: public Eventos
{
public:
	Alarma();
	~Alarma();
public: 
	int Hora;
};

