#pragma once
#include "Actividades.h"
#include "Recordatorios.h"
class Nodo
{
public:
	Nodo * Siguiente;

public:
	Actividades Valor;
	Recordatorios Value;

public:
	Nodo();
	~Nodo();
};

