#include <iostream>
#include <string>
using namespace std;
class Pessoa
{
private:
    int codigo;
    string nome;
    string endereco;
    string dataNascimento;
    string telefone;

public:
    Pessoa();
    string getNome();
    void setNome(string n);
    string getEndereco();
    void setEndereco(string e);
    string getDataNascimento();
    void setDataNascimento(string d);
    string getTelefone();
    void setTelefone(string t);
};
Pessoa::Pessoa()
{
    cout << "\nExecutando construtor da classe Pessoa";
}
string Pessoa::getNome()
{
    return nome;
}
void Pessoa::setNome(string n)
{
    nome = n;
}
string Pessoa::getEndereco()
{
    return endereco;
}
void Pessoa::setEndereco(string e)
{
    endereco = e;
}
string Pessoa::getDataNascimento()
{
    return dataNascimento;
}
void Pessoa::setDataNascimento(string d)
{
    dataNascimento = d;
}
string Pessoa::getTelefone()
{
    return telefone;
}
void Pessoa::setTelefone(string t)
{
    telefone = t;
}