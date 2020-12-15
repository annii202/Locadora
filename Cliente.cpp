#include <iostream>
#include <string>
#include "Pessoa.cpp"
using namespace std;

class Cliente : public Pessoa
{
    private:
    string endereco;
    public:
    string getEndereco();
    void setEndereco(string e);

};
string Cliente::getEndereco()
{
    return endereco;
}
void Cliente::setEndereco(string e)
{
    endereco = e;
}


