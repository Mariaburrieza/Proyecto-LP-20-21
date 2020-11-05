#include "Magatzem.h"

void Magatzem::enmagatzemarComanda(vector<Bicicleta*>& paquet, Data dataEntrada) {}
float Magatzem::procesQA(Comanda& c, vector<Bicicleta*>& paquet, Data dataActual) {}
bool Magatzem::rebreComanda(Comanda& c, vector<Bicicleta*>& paquet, Data dataRecepcioPaquet) {}
void Magatzem::generaFactura(bool paquetComplet, float costCorregit, Comanda& c) {}
Bicicleta* Magatzem::agafaBicicletaAntiga(const string& model) {}
void Magatzem::mostraCataleg() {}

Bicicleta* Magatzem::agafaBicicletaAntiga(const string& model) {
	map<string, priority_queue<Bicicleta*>>::iterator it = m_stock.find(model);
	if (it != m_stock.end()) return it->top();
	else cout << "Model not found." << endl;
}