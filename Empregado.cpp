#include "Empregado.hpp"

// Construtor para a classe Empregado
Empregado::Empregado(std::string nome, double salarioHora) {
    this->nome = nome;
    this->salarioHora = salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas) const {
    double t = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
    return t * salarioHora;
}

// Atribui um valor ao atributo nome
void Empregado::setNome(std::string nome) {
    this->nome = nome;
}

// Atribui um valor ao atributo salarioHora
void Empregado::setSalarioHora(double salarioHora) {
    this->salarioHora = salarioHora;
}

// Obtem o atributo nome
std::string Empregado::getNome() const {
    return this->nome;
}

// Obtem o atributo salarioHora
double Empregado::getSalarioHora() const {
    return this->salarioHora;
}

