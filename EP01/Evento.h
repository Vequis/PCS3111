#ifndef EVENTO_H
#define EVENTO_H

#include "Roteador.h"

class Roteador;

class Evento{
private:
    int instante;
    Roteador *destino;
    Datagrama *d;
public:
    Evento(int instante, Roteador* destino, Datagrama* d);
    ~Evento();

    int getInstante();
    Roteador* getDestino();
    Datagrama* getDatagrama();

    void imprimir();
};

#endif