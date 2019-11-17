#pragma once
#include "Eventos.h"
#include <string>
#include <msclr\marshal_cppstd.h>
class Recordatorios : public Eventos
{
public:
	Recordatorios();
	~Recordatorios();
public:
	int horal;
};
