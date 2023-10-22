//
// Created by keilo on 10/22/2023.
//

#ifndef PROYECTO_1_JUGADOR_H
#define PROYECTO_1_JUGADOR_H

#include <iostream>
#include "Lista.h"
using namespace std;
class Jugador {
    private:
        string id;
        string nombre;
        float dineroDisponible;
        //Lista<Vehiculo> vehiculosDisponibles;
    public:
        Jugador(const string &id, const string &nombre, float dineroDisponible);

        Jugador();

        virtual ~Jugador();

        const string &getId() const;

        void setId(const string &id);

        const string &getNombre() const;

        void setNombre(const string &nombre);

        float getDineroDisponible() const;

        void setDineroDisponible(float dineroDisponible);

};


#endif //PROYECTO_1_JUGADOR_H
