//
// Created by keilo on 10/22/2023.
//

#include "Jugador.h"

Jugador::Jugador(const string &id, const string &nombre, float dineroDisponible) : id(id), nombre(nombre),
                                                                                   dineroDisponible(dineroDisponible) {}


Jugador::Jugador() {
    id = "";
    nombre = "";
    dineroDisponible = 0.0;
}


Jugador::~Jugador() {

}

const string &Jugador::getId() const {
    return id;
}

void Jugador::setId(const string &id) {
    Jugador::id = id;
}

const string &Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(const string &nombre) {
    Jugador::nombre = nombre;
}

float Jugador::getDineroDisponible() const {
    return dineroDisponible;
}

void Jugador::setDineroDisponible(float dineroDisponible) {
    Jugador::dineroDisponible = dineroDisponible;
}
