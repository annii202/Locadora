#include <iostream>
#include <string>
#include "Cliente.cpp"

using namespace std;

class Locacao :: public Cliente{
    static int locacoes;
    private:
        int diasAlocados;

    public:
        Locacao();
        ~Locacao();
        int getDiasAlocados();
        void setDiasAlocados(int d);
};

Locacao::Locacao() {
    locacoes++; //Conta quantas locações existem
}

Locacao::~Locacao() {
    locacoes--;
}

int Pessoa::getDiasAlocados() {
    return diasAlocados;
}
void Pessoa::setDiasAlocados(int d) {
    diasAlocados = d;
}