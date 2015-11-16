#include "stdafx.h"
#include "Usuario.h"


Usuario::Usuario()
{
}


Usuario::~Usuario()
{
}

void Usuario::setClave(string clave) {
	this->clave = clave;
}

void Usuario::setIdentificador(string identificador) {
	this->identificador = identificador;
}

void Usuario::setNombre(string nombre) {
	this->nombre = nombre;
}

string Usuario::getClave() {
	return clave;
}

string Usuario::getIdentificador() {
	return identificador;
}

string Usuario::getNombre() {
	return nombre;
}