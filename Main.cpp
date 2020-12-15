#include <iostream>
#include <string>
#include <stdlib.h>

// #include "Locacao.cpp"
#include "Cliente.cpp"

void CriaArquivo();
void calculaPontosFidelidade();
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

void calculaPontosFidelidade(int codigoPessoa) {
    Cliente c;
    Locacao l;
    int pontosAcumulados = 0;

    for(int i = 0; i < l.lenght; i++) {
        if(l[i].getCodigo == codigoPessoa) {
            pontosAcumulados += (l[i].getDiasAlocados() * 10);
        }
    }

    c.setPontosFidelidade(pontosAcumulados);
    if(pontosAcumulados >= 500) {
        cout << "O cliente de código " << codigoPessoa << " possui " << pontosAcumulados << " pontos de fidelidade e está hábil a ganhar o kit!" << endl;
    }
}

void pesquisaClientesPremiados() {
    Cliente c;
    int codigoCliePremiado[c.lenght], contador = 0;

    for(int i = 0; i < c.lenght; i++) {
        if(c[i].getPontosFidelidade() >= 500) {
            codigoCliePremiado[contador] = c[i].getCodigoClie();
        }
    }

    if(codigoCliePremiado[0] != null) {
        cout << "Os clientes que possuem pontuação de fidelidade maior que 500 são:" << endl;
        for(int cont = 0; cont < codigoCliePremiado.lenght; cont++) {
            cout << "Cliente de código: " << codigoCliePremiado[cont] << endl;
        }
    }
    system("pause");
    system("cls");
}