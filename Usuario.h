#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario
{
private:
	string identificador, nombre, clave;
public:
	void setIdentificador(string identificador);
	void setNombre(string nombre);
	void setClave(string clave);
	string getIdentificador();
	string getNombre();
	string getClave();
	Usuario();
	virtual ~Usuario();
};

