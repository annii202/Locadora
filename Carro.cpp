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
    void setPlaca(int p);
    string getDescricao();
    void setDescricao(int d);
    string getModelo();
    void setModelo(int m);
    string getCor();
    void setCor(int co);
    bool getStatus();
    void setStatus(bool s);
};
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
void Carro::setPlaca(int p){
    placa = p;
}
string Carro::getDescricao(){
    return descricao;
}
void Carro::setDescricao(int d){
    descricao = d;
}
string Carro::getModelo(){
    return modelo;
}
void Carro::setModelo(int m){
    modelo = m;
}
string Carro::getCor(){
    return cor;
}
void Carro::setCor(int co){
    cor = co;
}
bool Carro::getStatus(){
    return status;
}
void Carro::setStatus(bool s){
    status = s;
}