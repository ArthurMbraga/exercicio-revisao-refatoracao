#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>

#include "Empregado.hpp"

class Engenheiro : public Empregado {
   private:
    int _projetos;

   public:
    Engenheiro(std::string nome, double salarioHora, int projetos)
        : Empregado(nome, salarioHora), _projetos(projetos) {}

    int getProjetos() const { return _projetos; }
    void setProjetos(int projetos) { _projetos = projetos; };

    virtual void printDadosMes(double horasTrabalhadas) const override;
};

#endif