#include <iostream>
#include <string>
// #include "Locacao.cpp"
#include "Cliente.cpp"

int main(){
    Cliente c;
    int codigo;
    string nome, endereco, telefone, dataNascimento;
    cout<<"Digite o codigo do cliente: ";
    cin >> codigo;
    c.setCodigo(codigo);
    cout<<"Digite o nome do cliente: ";
    cin >> nome;
    c.setNome(nome);
    fflush(stdin);
    cout<<"Digite o endereco do cliente: ";
    cin >> endereco;
    c.setEndereco(endereco);
    fflush(stdin);
    cout<<"Digite o telefone do cliente: ";
    cin >> telefone;
    c.setTelefone(telefone);
    fflush(stdin);
    cout<<"Digite a data de Nascimento do cliente: ";
    cin >> dataNascimento;
    c.setDataNascimento(dataNascimento);
    fflush(stdin);
    c.CriaArquivo();
}