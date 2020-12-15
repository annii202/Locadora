#include <iostream>
#include <string>
#include <stdlib.h>

#include "Locacao.cpp"
#include "Cliente.cpp"
#include "Carro.cpp"

void CriaArquivo();
void calculaPontosFidelidade();
Cliente c;
Carro car;
int main()
{
    int codigo, ocupantes;
    string nome, endereco, telefone, dataNascimento, placa, descricao, cor, modelo;
    int condicao;
    do
    {
        cout << "Bem vinde a Locadora Loca Mais!! \n";
        cout << "Escolha o processo que você deseja realizar \n";
        cout << "1. Cadastrar cliente";
        cout << "2. Cadastrar funcionário";
        cout << "3. Cadastrar um carro";
        cout << "4. Cadastrar uma locacao";
        cout << "5. Dar baixa em uma locacao:";
        cout << "6. Mostra locacoes de um cliente";
        cout << "7. Pesquisar funcionário";
        cout << "8. Pesquisar cliente";
        cout << "9. Pontos de fidelidade";
        cout << "10. Sair...";
        switch (condicao)
        {
        case 1:
            cout << "Digite o codigo do cliente: ";
            cin >> codigo;
            c.setCodigo(codigo);
            cout << c.getCodigo();
            cout << "Digite o nome do cliente: ";
            cin >> nome;
            c.setNome(nome);
            fflush(stdin);
            cout << c.getNome();
            cout << "Digite o endereco do cliente: ";
            cin >> endereco;
            c.setEndereco(endereco);
            fflush(stdin);
            cout << "Digite o telefone do cliente: ";
            cin >> telefone;
            c.setTelefone(telefone);
            fflush(stdin);
            cout << "Digite a data de Nascimento do cliente: ";
            cin >> dataNascimento;
            c.setDataNascimento(dataNascimento);
            fflush(stdin);
            CriaArquivo();
            break;
        case 2:
        break;

        case 3:
            cout << "Digite o codigo do carro: ";
            cin >> codigo;
            car.setCodigo(codigo);
            cout << "Digite o numero de acentos do carro: ";
            cin >> ocupantes;
            car.setOcupantes(ocupantes);
            cout << "Digite a Placa do carro: ";
            cin >> placa;
            car.setPlaca(placa);
            fflush(stdin);
            cout << "Digite a descricao do carro: ";
            cin >> descricao;
            car.setDescricao(descricao);
            fflush(stdin);
            cout << "Digite o modelo do carro: ";
            cin >> modelo;
            car.setModelo(modelo);
            cout << "Digite a cor do carro: ";
            cin >> cor;
            car.setCor(cor);
            car.getStatus(1);
            fflush(stdin);
            CriaArquivo();
            break;
        break;

        default:
            break;
        }
    } while (condicao < 10);
}

void CriaArquivo()
{
    FILE *clientes;
    if ((clientes = fopen("cliente.txt", "a")) == NULL)
    {
        printf("Erro de abertura! \n");
    }
    else
    {
        fprintf(clientes, "%d;%s;%s;%s;%s \n", c.getCodigo(), c.getNome().c_str(), c.getTelefone().c_str(), c.getEndereco().c_str(), c.getDataNascimento().c_str());
    }
    fclose(clientes);
}
void CriaArquivo()
{
    FILE *carros;
    if ((carros = fopen("carro.txt", "a")) == NULL)
    {
        printf("Erro de abertura! \n");
    }
    else
    {
        fprintf(carros, "%d;%d;%s;%s;%s;%s;%s;%d \n", car.getCodigo(), car.getOcupantes(), car.getPlaca().c_str(),
        car.getModelo().c_str(), car.getDescricao().c_str(), car.getCor().c_str(), car.getStatus());
    }
    fclose(carros);
}

// void calculaPontosFidelidade(int codigoPessoa) {
//     Cliente c;
//     Locacao l;
//     int pontosAcumulados = 0;

//     for(int i = 0; i < l.lenght; i++) {
//         if(l[i].getCodigo == codigoPessoa) {
//             pontosAcumulados += (l[i].getDiasAlocados() * 10);
//         }
//     }

//     c.setPontosFidelidade(pontosAcumulados);
//     if(pontosAcumulados >= 500) {
//         cout << "O cliente de código " << codigoPessoa << " possui " << pontosAcumulados << " pontos de fidelidade e está hábil a ganhar o kit!" << endl;
//     }
// }

// void pesquisaClientesPremiados() {
//     Cliente c;
//     int codigoCliePremiado[c.lenght], contador = 0;

//     for(int i = 0; i < c.lenght; i++) {
//         if(c[i].getPontosFidelidade() >= 500) {
//             codigoCliePremiado[contador] = c[i].getCodigoClie();
//         }
//     }

//     if(codigoCliePremiado[0] != null) {
//         cout << "Os clientes que possuem pontuação de fidelidade maior que 500 são:" << endl;
//         for(int cont = 0; cont < codigoCliePremiado.lenght; cont++) {
//             cout << "Cliente de código: " << codigoCliePremiado[cont] << endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }