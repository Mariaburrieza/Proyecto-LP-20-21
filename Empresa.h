#pragma once
#include <string>

#include "Botiga.h"
#include "Comanda.h"
#include "Magatzem.h"
#include "Proveidor.h"

/**
 *
* La clase empresa aglutina la inforamcion para gestionar la comunicacion del almacen con el proveedor, asi como las tiendas.
* La empresa se define por un conjunto de tiendas, un almacen y un proveedor.
* La empresa realizar� pedidos al provedor y recibira una notificacion indicando si el pedido ha llegado correctamente a almacen.
* 
**/

class Empresa {
	public:
		Empresa(string name, int numBotigues, Magatzem& magatzemPrincipal, Proveidor& p): m_name(name), m_numBotigues(numBotigues), m_magatzemPrincipal(magatzemPrincipal) {}
		string getName() const { return m_name; }
		Magatzem& getMagatzem(); //
		vector<Botiga*>& getBotigues(); //
		void setProveidor(Proveidor& proveidor);
		Proveidor& getProveidor();
		void afegeixBotiga(Botiga* b);
		static int getSeguentCodiRus();

		bool realitzaComanda(Comanda& c, Proveidor& p);
		string static generaCodiRus(const string& model);

	private:
		string m_name;
		int m_numBotigues;
		Magatzem m_magatzemPrincipal;
		Proveidor m_proveidor;
		//vector<Botiga> m_botigues;
};
