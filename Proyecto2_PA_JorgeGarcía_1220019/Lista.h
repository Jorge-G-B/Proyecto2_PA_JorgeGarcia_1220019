#pragma once
#include "Nodo.h"
#include "Recordatorios.h"
#include "Actividades.h"
class Lista
{
public:
	Lista();
	~Lista();
public:
	Nodo * Head = nullptr;
	Nodo * End = nullptr;
public:
	int NElementos = 0;
public:
	void InsertarI(Actividades valor);
	void InsertarI(Recordatorios valor);
public:
	void InsertarF(Actividades valor);
	void InsertarF(Recordatorios valor);
public:
	void InsertarP(Actividades valor, int posicion);
	void InsertarP(Recordatorios valor, int posicion);
public:
	Actividades MostrarP(int Posicion);
	Recordatorios MostrarPR(int Posicion);
public:
	Actividades Eliminar(int posicion);
	Recordatorios EliminarR(int posicion);
};

