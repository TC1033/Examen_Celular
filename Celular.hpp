#pragma once
#include "Bateria.hpp"

class Celular{
    public:
        Celular();
        Celular(std::string, std::string, Bateria);
        //Agrega el encabezado de getters

        //Agrega el encabezado de setters

        void imprime();
    private:
        std::string modelo;
        std::string marca;
        Bateria bateria;
};
