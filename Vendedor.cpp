#include "Vendedor.hpp"

// Construtor para a classe Vendedor
Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora){
	this->quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() const {
	return this->quotaMensalVendas * 12;
}

// Atribui um valor ao atributo quotaMensalVendas
void Vendedor::setQuotaMensalVendas(double quotaMensalVendas) {
    this->quotaMensalVendas = quotaMensalVendas;
}

// Obtem o atributo quotaMensalVendas
double Vendedor::getQuotaMensalVendas() const {
    return this->quotaMensalVendas;
}

void Vendedor::print() const {
	std::cout << "Nome: " << this->nome << std::endl;
	std::cout << "Salario Mes: " << this->pagamentoMes(6) << std::endl;  
	std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
}