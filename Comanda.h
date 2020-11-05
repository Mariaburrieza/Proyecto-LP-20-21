#pragma once
#include <vector>

#include "Bicicleta.h"
#include "Data.h"

/**
* Entrada que agrupa los datos de cada pedido. Contiene el tipo, la cantidad y el modelo.
**/
struct lineaComanda{
	TipusBicicleta tipus;
	int m_quantitat;
	string m_model;
};

/**
* Clase que almacena el pedido y los datos relacionados con �l.
* Una comanda debe de ser capaz de saber el totl de bicicletas pedidas, la fecha de entrega y el coste asociado a la misma.
**/
class Comanda {
	public:
		Comanda(const Data& dataComanda, vector<lineaComanda>& comanda); //implementado
		~Comanda() {}
		int getTotalBicicletes() const; //implementado
		Data getDataEntregaPrevista() const; //imp
		float getCostTotal() const;
		vector<lineaComanda> getLlistaComanda() const; //imp

	private:
		list<lineaComanda> m_comanda;
		Data m_dataComanda; //data en la que es genera la comanda.
};

