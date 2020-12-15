#include <iostream>
#include <string>
#include "Cliente.cpp"

using namespace std;

class Locacao : public Cliente{
    static int locacoes;
    private:
        int diasAlocados, codigoAloc, Retirada, Devolucao;
        bool Seguro;

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

int Locacao::getDiasAlocados() {
    return diasAlocados;
}
void Locacao::setDiasAlocados(int d) {
    diasAlocados = d;
}