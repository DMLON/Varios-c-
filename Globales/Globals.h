#pragma once
#include "cLista.h"
#include "Ciudad.h"

//Declaro como EXTERN la variable global, as� sabe el compilador que est� definido en algun otro lado
//OTRA FORMA, es en Ciudad.h hacerlo static
extern cLista<Ciudad>* Ciudades_global;
void Poblacionar_Ciudades();