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
    void CriaArquivo();
};
string Cliente::getEndereco()
{
    return endereco;
}
void Cliente::setEndereco(string e)
{
    endereco = e;
}

void Cliente::CriaArquivo(){
    Cliente c;
    FILE *arquivo;
    if ((arquivo = fopen("arquivo.txt", "a")) == NULL){
        printf("Erro de abertura! \n");
    }
    else{
        fprintf(arquivo,"%d;%s;%s;%s;%s", c.getCodigo(), c.getNome().c_str(), c.getTelefone().c_str(), c.getEndereco().c_str(), c.getDataNascimento().c_str());
        printf("%d;%s;%s;%s;%s", c.getCodigo(), c.getNome().c_str(), c.getTelefone().c_str(), c.getEndereco().c_str(), c.getDataNascimento().c_str());
        // fprintf(arquivo, "\n");
    } 
    fclose(arquivo);   
}
