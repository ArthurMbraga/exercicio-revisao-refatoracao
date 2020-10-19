#include "Vendedor.hpp"

#include <iostream>
#include <string>

double Vendedor::getQuotaTotalAnual() const {
    return _quotaMensalVendas * MESES_ANO;
}

void Vendedor::printDadosMes(double horasTrabalhadas) const {
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Salario Mes: " << this->getPagamentoMes(horasTrabalhadas)
              << std::endl;
    std::cout << "Quota vendas: " << this->getQuotaTotalAnual() << std::endl;
    std::cout << std::endl;
}