//
// Created by keilo on 10/22/2023.
//

#ifndef PROYECTO_1_ITEM_H
#define PROYECTO_1_ITEM_H

#include <iostream>

using namespace std;

class Item {
    private:
        string id;
        string nombre;
        int precio;
        int traccion;
        int velocidad;
        int potencia;

    public:
        Item(const string &id, const string &nombre, int precio, int traccion, int velocidad, int potencia);

        Item();

        virtual ~Item();

        const string &getId() const;

        void setId(const string &id);

        const string &getNombre() const;

        void setNombre(const string &nombre);

        int getPrecio() const;

        void setPrecio(int precio);

        int getTraccion() const;

        void setTraccion(int traccion);

        int getVelocidad() const;

        void setVelocidad(int velocidad);

        int getPotencia() const;

        void setPotencia(int potencia);
};


#endif //PROYECTO_1_ITEM_H
