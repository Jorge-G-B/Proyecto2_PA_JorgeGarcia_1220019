#include "Lista.h"

Lista::Lista()
{
}


Lista::~Lista()
{
}

void Lista::InsertarI(Actividades valor) {
	Nodo *NuevoNodo = new Nodo();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		NuevoNodo->Siguiente = Head;
		Head = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarI(Recordatorios valor) {
	Nodo *NuevoNodo = new Nodo();
	NuevoNodo->Value = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		NuevoNodo->Siguiente = Head;
		Head = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarF(Actividades valor) {
	Nodo *NuevoNodo = new Nodo();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		End->Siguiente = NuevoNodo;
		NuevoNodo->Siguiente = nullptr;
		End = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarF(Recordatorios valor) {
	Nodo *NuevoNodo = new Nodo();
	NuevoNodo->Value = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		End->Siguiente = NuevoNodo;
		NuevoNodo->Siguiente= nullptr;
		End = NuevoNodo;
	}
	NElementos++;
}
Recordatorios Lista::MostrarPR(int posicion) {
	Nodo * Aux = new Nodo();
	Aux = Head;
	if (posicion >= 0 && posicion <= NElementos)
	{
		for (int i = 0; i < posicion; i++)
		{
			Aux = Aux->Siguiente;
		}
		return Aux->Value;
	}
	else
	{
		return Aux->Value;
	}

}
Actividades Lista::MostrarP(int posicion) {
	Nodo * Aux = new Nodo();
	Aux = Head;
	if (posicion >= 0 && posicion <= NElementos)
	{
		for (int i = 0; i < posicion; i++)
		{
			Aux = Aux->Siguiente;
		}
		return Aux->Valor;
	}
	else
	{
		return Aux->Valor;
	}

}
Actividades Lista::Eliminar(int posicion)
{
	NElementos = NElementos - 1;
	Nodo * Aux;
	Nodo * Aux2;
	if (posicion == 1)
	{
		Aux = Head;
		Head = Head->Siguiente;
		return Aux->Valor;
	}
	else if (posicion == NElementos)
	{
		Aux = End;
		return Aux->Valor;
	}
	else if (posicion > 1 && posicion < NElementos)
	{
		Aux = Head;
		Aux2 = Head;
		for (int i = 0; i < posicion; i++)
		{
			Aux = Aux->Siguiente;
		}
		for (int i = 0; i < posicion-1; i++)
		{
			Aux2 = Aux2->Siguiente;
		}
		Aux2->Siguiente = Aux->Siguiente;
		return Aux->Valor;
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Error posición invalida");
	}
}
Recordatorios Lista::EliminarR(int posicion)
{
	NElementos = NElementos - 1;
	Nodo * Aux;
	Nodo * Aux2;
	if (posicion == 1)
	{
		Aux = Head;
		Head = Head->Siguiente;
		return Aux->Value;
	}
	else if (posicion == NElementos)
	{
		Aux = End;
		return Aux->Value;
	}
	else if (posicion > 1 && posicion < NElementos)
	{
		Aux = Head;
		Aux2 = Head;
		for (int i = 0; i < posicion; i++)
		{
			Aux = Aux->Siguiente;
		}
		for (int i = 0; i < posicion - 1; i++)
		{
			Aux2 = Aux2->Siguiente;
		}
		Aux2->Siguiente = Aux->Siguiente;
		return Aux->Value;
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Error posición invalida");
	}
}