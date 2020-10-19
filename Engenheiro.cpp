#include "Engenheiro.hpp"

#include <iostream>
#include <string>

void Engenheiro::printDadosMes(double horasTrabalhadas) const {
    std::cout << "Nome: " << this->getNome() << std::endl;
    std::cout << "Salario Mes: " << this->getPagamentoMes(horasTrabalhadas)
              << std::endl;
    std::cout << "Projetos: " << this->getProjetos() << std::endl;
    std::cout << std::endl;
}
