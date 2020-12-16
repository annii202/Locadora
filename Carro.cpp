#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class Carro
{
private:
    int cod, ocupantes;
    bool status;
    string placa, descricao, modelo, cor;
public:
    Carro();
    int getCodigo();
    void setCodigo(int c);
    int getOcupantes();
    void setOcupantes(int o);
    string getPlaca();
    void setPlaca(string p);
    string getDescricao();
    void setDescricao(string d);
    string getModelo();
    void setModelo(string m);
    string getCor();
    void setCor(string co);
    bool getStatus();
    void setStatus(bool s);
};
Carro:: Carro(){
    cout<< "Rodando";
}
int Carro::getCodigo(){
    return cod;
}
void Carro::setCodigo(int c){
    cod = c;
}
int Carro::getOcupantes(){
    return ocupantes;
}
void Carro::setOcupantes(int o){
    ocupantes = o;
}
string Carro::getPlaca(){
    return placa;
}
void Carro::setPlaca(string p){
    placa = p;
}
string Carro::getDescricao(){
    return descricao;
}
void Carro::setDescricao(string d){
    descricao = d;
}
string Carro::getModelo(){
    return modelo;
}
void Carro::setModelo(string m){
    modelo = m;
}
string Carro::getCor(){
    return cor;
}
void Carro::setCor(string co){
    cor = co;
}
bool Carro::getStatus(){
    return status;
}
void Carro::setStatus(bool s){
    status = s;
}