#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {
   private:
    const int MESES_ANO = 12;
    double _quotaMensalVendas;

   public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas)
        : Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) {}

    double getQuotaMensalVendas() { return _quotaMensalVendas; }
    void setQuotaMensalVendas(double quotaMensalVendas) {
        _quotaMensalVendas = quotaMensalVendas;
    }

    double getQuotaTotalAnual() const;

    virtual void printDadosMes(double horasTrabalhadas) const override;

    virtual ~Vendedor() {};
};

#endif