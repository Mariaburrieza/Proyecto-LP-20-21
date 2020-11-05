#include "Comanda.h"

Comanda::Comanda(const Data& dataComanda, vector<lineaComanda>& comanda) {
    m_dataComanda = dataComanda;
    for (list<lineaComanda>::const_iterator it = m_comanda.begin(); it != m_comanda.end(); it++) {
        it->m_comanda.tipus = it->comanda.tipus;
        it->m_comanda.m_quantitat = it->comanda.m_quantitat;
        it->m_comanda.m_model = it->comanda.m_model;
    }
}

int Comanda::getTotalBicicletes() const {
    int total = 0;
    for (list<lineaComanda>::const_iterator it = m_comanda.begin(); it != m_comanda.end(); it++) {
        total += it->m_comanda.m_quantitat;
    }
    return total;
}

vector<lineaComanda> Comanda::getLlistaComanda() const {
    return m_comanda;
}

Data Comanda::getDataEntregaPrevista() const { //getDataComanda
    return m_dataComanda;
}