#include <iostream>
#include <string>
#include "Cliente.cpp"
// código da locacao(inteiro), data de retirada(inteiro), 
    // data de devolução(inteiro), seguro(True or False), quantidade de dias(inteiro), 
    // código do cliente(arquivo), código do veiculo(arquivo)
using namespace std;

class CLocacao
{
    private:
    int cod, retirada, devolucao, qntdDias; 
    bool seguro;
    public:
    int getCod();
    void setCod(int c);
    int getRetirada();
    void setRetirada(int r);
    int getDevolucao();
    void setDevolucao(int d);
    bool getSeguro();
    bool setSeguro(bool s);
    int GetQntdDias(){
        qntdDias = devolucao - retirada;
        return qntdDias;
    }
};
    int CLocacao::getCod(){
        return cod;
    }
    void CLocacao::setCod(int c){
        cod = c;
    }
    int CLocacao::getRetirada(){
        return retirada;
    }
    void CLocacao::setRetirada(int r){
        retirada = r;
    }
    int CLocacao::getDevolucao(){
        return devolucao;
    }
    void CLocacao::setDevolucao(int d){
        devolucao = d;
    }
    bool CLocacao::getSeguro(){
        return seguro;
    }
    bool CLocacao::setSeguro(bool s){
        seguro = s;
    }   
    
