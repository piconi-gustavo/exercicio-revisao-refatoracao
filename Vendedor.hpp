#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
    private:
        double quotaMensalVendas;
    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);
        double quotaTotalAnual() const;
        void setQuotaMensalVendas(double quotaMensalVendas);
        double getQuotaMensalVendas() const;
        void print() const;
};

#endif