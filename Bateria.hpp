#pragma once // previene definiciones múltiples (igual que guardas)
#include <iostream>
// Es una bateria de celular
class Bateria{
    public:
        Bateria();
        Bateria (double, std::string);
        double getVoltaje() const;
        std::string getMarca() const;
        void setVoltaje(double);
        void setMarca(std::string);
        int iguales(Bateria);
        void imprime();
    private:
        double voltaje;
        std::string marca;
};
