#include "Empregado.hpp"

double Empregado::getPagamentoMes(double horasTrabalhadas) const {
    double horasTotais = horasTrabalhadas;

    // Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS_MINIMAS) {
        double horasExtras = horasTrabalhadas - HORAS_MINIMAS;
        horasTotais += horasExtras * PORCENTAGEM_HORAEXTRA;
    }

    return horasTotais * _salarioHora;
}