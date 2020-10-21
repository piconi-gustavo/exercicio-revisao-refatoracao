#include "Engenheiro.hpp"

// Construtor para a classe Engenheiro
Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora){
  this->projetos = projetos;
}

// Atribui um valor ao atributo projetos
void Engenheiro::setProjetos(int projetos) {
  this->projetos = projetos;
}

// Obtém o atributo projetos
int Engenheiro::getProjetos() const {
  return this->projetos;
}

void Engenheiro::print() const {
  std::cout << "Nome: " << this->nome << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << this->projetos << std::endl;
}

