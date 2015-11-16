#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>
#include "Usuario.h"
#include "CheckClave.h"
using namespace std;

class GestorUsuarios
{
private:
	map<string,Usuario>* mapaUsuarios;
	map<string, Usuario>* conectados;
	CheckClave* check;
public:
	GestorUsuarios();
	virtual ~GestorUsuarios();
	void altaUsuario(Usuario usuario);
	void bajaUsuario(string identificador);
	void cambiaClave(string identificador,string clave);
	void conexion(string identificador, string clave);
	void desconexion(string identificador);
	bool estaConectado(string identificador);
	set<string>* usuariosConectados();
};

