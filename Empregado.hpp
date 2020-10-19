#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
   private:
    const int HORAS_MINIMAS = 8;
    const int PORCENTAGEM_HORAEXTRA = 0.5;

    std::string _nome;
    double _salarioHora;

   public:
    Empregado(std::string nome, double salarioHora)
        : _nome(nome), _salarioHora(salarioHora) {}

    double getSalarioHora() const { return _salarioHora; }
    void setSalarioHora(double salarioHora) { _salarioHora = salarioHora; }

    std::string getNome() const { return _nome; }
    void setNome(std::string nome) { _nome = nome; }

    virtual void printDadosMes(double horasTrabalhadas) const = 0;

    double getPagamentoMes(double horasTrabalhadas) const;

    virtual ~Empregado() {};
};

#endif