#include "stdafx.h"
#include "CheckClave.h"


CheckClave::CheckClave()
{
}


CheckClave::~CheckClave()
{
}

int CheckClave::check(string clave) {
	if (clave.size() < 6) {
		return -1;
	}
	
	if (*claves.lower_bound(clave) == clave) {
		return -2;
	}

		string s2 = *claves.lower_bound(clave);
		string s3 = s2.substr(0,clave.size());
	
	if (clave == s3) {
		return -3;
	}

	return 1;
}


