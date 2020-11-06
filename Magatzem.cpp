#include "Magatzem.h"

void Magatzem::enmagatzemarComanda(vector<Bicicleta*>& paquet, Data dataEntrada) {}
float Magatzem::procesQA(Comanda& c, vector<Bicicleta*>& paquet, Data dataActual) {}

/*
	El magatzem guarda un contenedor con el modelo de la bici y una estructura
	ordenada por fecha de llegada de las bicicletas de este modelo (modelo!= tipo)
*/
bool Magatzem::rebreComanda(Comanda& c, vector<Bicicleta*>& paquet, Data dataRecepcioPaquet) { // está a medias
	/*bool trobat = false;
	
	vector<Bicicleta*>::iterator aux = paquet.begin(); //es un vector no lista
	vector<lineaComanda> com; //lista comandas. Linea de comanda tiene tipus, m_cantidad, m_model
	com = c.getLlistaComanda();
	//vector<lineaComanda>::iterator lineacom = com.begin();//same
	priority_queue<Bicicleta*> nose;

	for(int i = 0; i < paquet.size(); ++i){

		if (paquet[i].getTipus() == TipusBicicleta::INFANTIL) {
			BicicletaInfantil bi = BicicletaInfantil(paquet[i].getModel(), "Descripcio", 2020, randomTalla(), randomQuadre(), randomRoda(), randomFre(), (*aux)->getTipus(), randomBool());
			for (int j = ; j < com[j].m_quantitat; j++) nose.push(new BicicletaInfantil(bi));
		}

		if (paquet[i].getTipus() == TipusBicicleta::CARRETERA) {
			BicicletaCarretera bc = BicicletaCarretera(paquet[i].getModel(), string("Descripcio"), 2020, randomTalla(), randomQuadre(), randomRoda(), randomFre(), (*aux)->getTipus(), randomModalitatC(), randomBool());
			for (int i = 0; i < .m_quantitat; i++)
				nose.push(new BicicletaCarretera(bc));
		}

		if (paquet[i].getTipus() == TipusBicicleta::MTB) {

			BicicletaMTB bmtb = BicicletaMTB((*aux)->getModel, "Descripcio", 2020, randomTalla(), randomQuadre(), randomRoda(), randomFre(),(*aux)->getTipus(), randomCategoria(), randomModalitat(), randomBool());

			for (int i = 0; i < (*lineacom).m_quantitat; i++)
				nose.push(new BicicletaMTB(bmtb));
		}
		lineacom++;
	}




	prioridad_bici.insert(pair< string, priority_queue<Bicicleta*>>("vALOR", nose));

	//Se tendria que poner las biciletas en unos contenedores sun el modelo de la bicicleta.


	if (dataRecepcioPaquet <= c.getDataEntregaPrevista()) {
		trobat = true;
	}

	
	return trobat; */
}

/*
	Se genera la factura final para el proveedor incluyendo datos de la entidad (codi_empresa, nom, telef)
	que la genera conjunatmente con los datos de la comanda realizada (se guarda como comanda.txt)
*/
void Magatzem::generaFactura(bool paquetComplet, float costCorregit, Comanda& c) { 
	Magatzem m;
	vector<lineaComanda> lc;
	lc = c.getLlistaComanda();
	vector<lineaComanda>::iterator aux = lc.begin();

	ofstream fitxer;
	// Variable per guardar el nom del fitxer
	string nomFitxer = "comanda.txt";
	fitxer.open(nomFitxer);
	
	if (fitxer.is_open()) {
		cout << "Resum comanda:" << endl;
		cout << "Dades Entitat responsable :" << endl;
		cout << "Codi identificatiu :"<<m.getNom() << endl;
		cout << "Codi identificatiu :" << m.getNom() << endl;
		for (aux = lc.begin(); aux != lc.end(); aux++) {
			cout << (*aux).m_model << " * " << (*aux).m_quantitat << endl;
		}
		cout << "Preu final: " << c.getCostTotal() << endl;// otra opcion **cout << "Preu final: " << costCorregit << endl;**
		fitxer.close();
	}
}

Bicicleta* Magatzem::agafaBicicletaAntiga(const string& model) {
	/*map<string, priority_queue<Bicicleta*>>::iterator it = m_stock.find(model);
	if (it != m_stock.end()) return it->top();
	else cout << "Model not found." << endl; */ 
}

void Magatzem::mostraCataleg() {}

