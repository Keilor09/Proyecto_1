//
// Created by keilo on 10/22/2023.
//

#ifndef PROYECTO_1_LLANTAS_H
#define PROYECTO_1_LLANTAS_H

#include "Tienda.h"

class Llantas : public Tienda {
public:

    Llantas(Item* ptrItem, bool estado);

    string getId() ; // Metodo virtual puro

    void setId(const string &id); // Metodo virtual puro

    string getNombre() ; // Metodo virtual puro

    void setNombre(const string &nombre); // Metodo virtual puro

    int getPrecio() ; // Metodo virtual puro

    void setPrecio(int precio); // Metodo virtual puro

    int getTraccion() ; // Metodo virtual puro

    void setTraccion(int traccion); // Metodo virtual puro

    int getVelocidad() ; // Metodo virtual puro

    void setVelocidad(int velocidad); // Metodo virtual puro

    int getPotencia(); // Metodo virtual puro

    void setPotencia(int potencia); // Metodo virtual puro

    string toString();
};


#endif //PROYECTO_1_LLANTAS_H
