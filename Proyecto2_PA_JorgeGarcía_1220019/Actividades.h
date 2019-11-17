#pragma once
#include "Eventos.h"
#include <string>
#include <msclr\marshal_cppstd.h>
class Actividades : public Eventos
{
public:
	Actividades();
	~Actividades();
	int HoraI;
	int HoraF;
	std::string LugarReunion;
	std::string PersonasInvolucradas[30];
	std::string Materiales[20];
};

