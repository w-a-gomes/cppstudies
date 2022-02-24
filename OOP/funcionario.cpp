#include "funcionario.hpp"

// Tem os atributos herdados e o dele (_salario)
// Tem os métodos herdados e o dele (salario, medo)
// Acessa atributo interno não recuperavel pelos métodos da herança (medo->_protected_value)
Funcionario::Funcionario(std::string nome, std::string cpf, double salario)
    :Pessoa(nome, cpf), _salario(salario)
{
    //
}

double Funcionario::salario()
{
    return this->_salario;
}

std::string Funcionario::medo()
{
    return this->_protected_value;
}