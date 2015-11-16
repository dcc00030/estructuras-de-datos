#pragma once
#include<iostream>
#include<string>
#include <set>
using namespace std;

class CheckClave
{
private:
	set<string> claves;
public:
	CheckClave();
	virtual ~CheckClave();
	int check(string clave);
};

