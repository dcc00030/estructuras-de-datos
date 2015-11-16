#include "stdafx.h"
#include "GestorUsuarios.h"


GestorUsuarios::GestorUsuarios()
{
}


GestorUsuarios::~GestorUsuarios()
{
}

void GestorUsuarios::altaUsuario(Usuario usuario) {
	if ((mapaUsuarios->count(usuario.getIdentificador()) != 0)&& (check->check(usuario.getClave()) == 1 )) {
		pair<string, Usuario> pair;
		pair.first = usuario.getIdentificador();
		pair.second = usuario;
		mapaUsuarios->insert(pair);
	}
}

void GestorUsuarios::bajaUsuario(string identificador) {
	if (mapaUsuarios->count(identificador) == 1) {
		mapaUsuarios->erase(identificador);
	}
}

void GestorUsuarios::cambiaClave(string identificador,string clave) {
	if (mapaUsuarios->count(identificador) == 1) {
		if (check->check(clave) == 1) {
			auto aux =  *mapaUsuarios->find(identificador);
			aux.second.setClave(clave);
		}
	}
}

void GestorUsuarios::conexion(string identificador, string clave) {

}

void GestorUsuarios::desconexion(string identificador) {

}

bool GestorUsuarios::estaConectado(string identificador) {
	return false;
}

set<string>* GestorUsuarios::usuariosConectados() {

}