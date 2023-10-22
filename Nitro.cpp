//
// Created by keilo on 10/22/2023.
//

#include "Nitro.h"

Nitro::Nitro(Item* ptrItem, bool estado) {
    this->ptrItem = ptrItem;
    this->estado = estado;
}

string Nitro::getId()  {
    return this->ptrItem->getId();
}


void Nitro::setId(const string &id)  {
    this->ptrItem->setId(id);
}

string Nitro::getNombre()  {
    return this->ptrItem->getNombre();
}

void Nitro::setNombre(const string &nombre)  {
    this->ptrItem->setNombre(nombre);
}

int Nitro::getPrecio()  {
    return this->ptrItem->getPrecio();
}

void Nitro::setPrecio(int precio)  {
    this->ptrItem->setPrecio(precio);
}

int Nitro::getTraccion()  {
    return this->ptrItem->getTraccion();
}

void Nitro::setTraccion(int traccion)  {
    this->ptrItem->setTraccion(traccion);
}

int Nitro::getVelocidad()  {
    return this->ptrItem->getVelocidad();
}

void Nitro::setVelocidad(int velocidad)  {
    this->ptrItem->setVelocidad(velocidad);
}

int Nitro::getPotencia()  {
    return this->ptrItem->getPotencia();
}

void Nitro::setPotencia(int potencia)  {
    this->ptrItem->setPotencia(potencia);
}

string Nitro::toString() {
    stringstream s;
    s << this->ptrItem->toString() << endl;
    return s.str();
}