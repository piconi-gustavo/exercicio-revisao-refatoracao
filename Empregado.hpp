#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  protected:
    std::string nome;
    double salarioHora;  
  public:
    Empregado(std::string nome, double salarioHora);
    double pagamentoMes(double horasTrabalhadas) const;
    void setNome(std::string nome);
    void setSalarioHora(double salarioHora);
    std::string getNome() const;
    double getSalarioHora() const;
    virtual void print() const = 0;
};

#endif