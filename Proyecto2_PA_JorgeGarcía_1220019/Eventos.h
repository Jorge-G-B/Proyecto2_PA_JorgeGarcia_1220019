#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
class Eventos
{
public:
	Eventos();
	~Eventos();
	std::string Fecha;
	int prioridad;
	std::string ID;
	std::string Descripción;
};

