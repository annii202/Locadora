#include <iostream>
#include <string>
#include "Pessoa.cpp"
using namespace std;

class Cliente : public Pessoa {
    private:
        string codigoClie;
        string endereco;
        int pontosFidelidade;
    public:
        string getEndereco();
        void setEndereco(string e);
        string getCodigoClie();
        void setCodigoClie(string cod);
        int getPontosFidelidade();
        void setPontosFidelidade(int p);

};

string Cliente::getEndereco() {
    return endereco;
}

void Cliente::setEndereco(string e) {
    endereco = e;
}

string Cliente::getCodigoClie() {
    return codigoClie;
}

void Cliente::setCodigoClie(string cod) {
    codigoClie = cod;
}

int Cliente::getPontosFidelidade() {
    return pontosFidelidade;
}

void Cliente::setPontosFidelidade(int p) {
    pontosFidelidade = p;
}