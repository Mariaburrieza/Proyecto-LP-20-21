#include "Proveidor.h"

void Proveidor::setCodiProveidor(const int& proveidor) {
    m_codiProveidor = proveidor;
}

int Proveidor::getCodiProveidor() const {
    return m_codiProveidor;
}

Data Proveidor::generaDataEnviament(Data dataComanda, int diesmaxim) {
    return dataComanda + diesmaxim;
}

bool Proveidor::procesaComanda(Comanda c, Magatzem& m) {
    int dies = rand() % 30 + 1; // Genera números aleatorios de 1 a 30.
    Data dataEnviament = generaDataEnviament(c.getDataEntregaPrevista(), dies);
    
}