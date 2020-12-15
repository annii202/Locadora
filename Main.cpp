#include <iostream>
#include <string>
// #include "Locacao.cpp"
#include "Cliente.cpp"

void CriaArquivo();
Cliente c;
int main(){

    int codigo;
    string nome, endereco, telefone, dataNascimento;
    cout<<"Digite o codigo do cliente: ";
    cin >> codigo;
    c.setCodigo(codigo);
    cout<<c.getCodigo();
    cout<<"Digite o nome do cliente: ";
    cin >> nome;
    c.setNome(nome);
    fflush(stdin);
    cout<<c.getNome();
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
    CriaArquivo();
}

void CriaArquivo(){
    cout << c.getCodigo();
    printf("\n");
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