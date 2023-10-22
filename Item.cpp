//
// Created by keilo on 10/22/2023.
//

#include "Item.h"

Item::Item(const string &id, const string &nombre, int precio, int traccion, int velocidad, int potencia) : id(id),
                                                                                                            nombre(nombre),
                                                                                                            precio(precio),
                                                                                                            traccion(traccion),
                                                                                                            velocidad(velocidad),
                                                                                                            potencia(potencia) {}

Item::Item() {
    id = "";
    nombre = "";
    precio = 0;
    traccion = 0;
    velocidad = 0;
    potencia = 0;
}

Item::~Item() {

}

const string &Item::getId() const {
    return id;
}

void Item::setId(const string &id) {
    Item::id = id;
}

const string &Item::getNombre() const {
    return nombre;
}

void Item::setNombre(const string &nombre) {
    Item::nombre = nombre;
}

int Item::getPrecio() const {
    return precio;
}

void Item::setPrecio(int precio) {
    Item::precio = precio;
}

int Item::getTraccion() const {
    return traccion;
}

void Item::setTraccion(int traccion) {
    Item::traccion = traccion;
}

int Item::getVelocidad() const {
    return velocidad;
}

void Item::setVelocidad(int velocidad) {
    Item::velocidad = velocidad;
}

int Item::getPotencia() const {
    return potencia;
}

void Item::setPotencia(int potencia) {
    Item::potencia = potencia;
}


