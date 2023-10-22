//
// Created by keilo on 10/22/2023.
//

#ifndef PROYECTO_1_ITEM_H
#define PROYECTO_1_ITEM_H

#include <iostream>

using namespace std;

class Item { // Clase abstracta // Interfaz
    public:
        string id;

        string nombre;

        int precio;

        int traccion;

        int velocidad;

        int potencia;

        virtual ~Item();

        virtual string &getId() const = 0;

        virtual void setId(const string &id) = 0;

        virtual string &getNombre() const = 0;

        virtual void setNombre(const string &nombre) = 0;

        virtual int getPrecio() const = 0;

        virtual void setPrecio(int precio) = 0;

        virtual int getTraccion() const = 0;

        virtual void setTraccion(int traccion) = 0;

        virtual int getVelocidad() const = 0;

        virtual void setVelocidad(int velocidad) = 0;

        virtual int getPotencia() const = 0;

        virtual void setPotencia(int potencia) = 0;
};


#endif //PROYECTO_1_ITEM_H
