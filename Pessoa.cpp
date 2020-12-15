#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class Pessoa
{
private:
    int codigo;
    string nome;
    string dataNascimento;
    string telefone;

public:
    Pessoa();
    int getCodigo();
    void setCodigo(int c);
    string getNome();
    void setNome(string n);
    string getDataNascimento();
    void setDataNascimento(string d);
    string getTelefone();
    void setTelefone(string t);
    void pesquisaCliente(string nome);
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
int Pessoa::getCodigo()
{
    return codigo;
}
void Pessoa::setCodigo(int c)
{
    codigo = c;
}

void Pessoa::imprimeDadosPessoa() {
    cout << "Código de Pessoa: " << getCodigo() << endl;
    cout << "Nome da Pessoa: " << getNome() << endl;
    cout << "Data de nascimento da Pessoa: " << getDataNascimento() << endl;
    cout << "Telefone da Pessoa: " << getTelefone() << endl;
    system("pause");
}