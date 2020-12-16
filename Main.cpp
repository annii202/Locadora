#include <iostream>
#include <string>
#include <stdlib.h>

#include "Locacao.cpp"
#include "Cliente.cpp"
#include "Carro.cpp"
#include "cadastraFuncionario.cpp"

void CriaArquivo();
void CriaArquivoCarro();
void CriaArquivoFuncionario();
void calculaPontosFidelidade(FILE *arquivo, string codClie);
void pesquisaClientesPremiados(FILE *arquivo);

Cliente c;
CadFuncionario f;
Locacao l;

int main()
{
    int codigo, codClie, codFunc;
    string nome, endereco, telefone, dataNascimento;
    int condicao;
    do
    {
        cout << "Bem vinde a Locadora Loca Mais!!" << endl;
        cout << "Escolha o processo que você deseja realizar" << endl;
        cout << "1. Cadastrar cliente" << endl;
        cout << "2. Cadastrar funcionário" << endl;
        cout << "3. Cadastrar um carro" << endl;
        cout << "4. Cadastrar uma locacao" << endl;
        cout << "5. Dar baixa em uma locacao:" << endl;
        cout << "6. Mostra locacoes de um cliente" << endl;
        cout << "7. Pesquisar funcionário" << endl;
        cout << "8. Pesquisar cliente" << endl;
        cout << "9. Calcular pontos de fidelidade" << endl;
        cout << "10. Sair..." << endl;
        cin >> condicao;
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
            CriaArquivoFuncionário();
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
            fflush(stdin);
            cout << "Digite a cor do carro: ";
            cin >> cor;
            car.setCor(cor);
            fflush(stdin);
            car.setStatus(true);
            fflush(stdin);
            CriaArquivoCarro();
            break;
        case 7:
            FILE *funcionarios;
            if ((funcionarios = fopen("salvarFuncionario.txt", "r")) == NULL) {
                printf("Erro de abertura! \n");
            } else {
                cout << "Digite o código de funcionário que deseja buscar:" << endl;
                cin >> codFunc;
                calculaPontosFidelidade(funcionarios, codFunc);
            }
            break;
        case 8:
            FILE *clientes;
            if ((clientes = fopen("cliente.txt", "a")) == NULL) {
                printf("Erro de abertura! \n");
            } else {
                cout << "Digite o código de cliente que deseja buscar:" << endl;
                cin >> codClie;
                calculaPontosFidelidade(clientes, codClie);
            }
            break;
        case 9:
            FILE *clientes;
            if ((clientes = fopen("cliente.txt", "r")) == NULL) {
                printf("Erro de abertura! \n");
            } else {
                cout << "Digite o código de cliente que deseja calcular os Pontos de Fidelidade" << endl;
                cin >> codClie;
                calculaPontosFidelidade(clientes, codClie);
            }
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
void CriaArquivoCarro()
{
    FILE *carros;
    if ((carros = fopen("carro.txt", "a")) == NULL)
    {
        printf("Erro de abertura! \n");
    }
    else
    {
        fprintf(carros, "%d;%d;%s;%s;%s;%s;%d \n", car.getCodigo(), car.getOcupantes(), car.getPlaca().c_str(),
        car.getModelo().c_str(), car.getDescricao().c_str(), car.getCor().c_str(), car.getStatus());
    }
    fclose(carros);
}

void CriaArquivoFuncionario() {
    FILE *salvaFunc;
    FILE *salvaCodigo;
    CadFuncionario *f;
    f = new(CadFuncionario);
    char nome[50],telefone[50];
    int codigo,cod,aux=0;
    float salario;
    cout << "Diga o nome do funcionário:\n";
    fflush(stdin);
    gets(nome);
    f->setNome(nome);
    cout << "O código do funcionário é: " <<endl;
    cin >> codigo;
    f->setCodigoFunc(codigo);
    if ((salvaCodigo=fopen("salvarCodigo.txt","a"))==NULL)
    {
        cout << "Erro!\n";
    }
    else
    {
        for (int i=0; i<100; i++)
        {
            fscanf(salvaCodigo,"%i",&cod);
            if (f->getCodigoFunc() == cod)
            {
                cout << "Código já existente\n";
                aux=1;
            }
        }
        if (aux != 1)
        {
            f->setCodigoFunc(codigo);
            fprintf(salvaCodigo,"%i\n",f->getCodigoFunc());
        }
    }
    fclose(salvaCodigo);
    cout << "Digite o telefone do funcionário:"<< endl;
    fflush(stdin);
    gets(telefone);
    f->setTelefone(telefone);
    cout << "Digite o salário do funcionário:"<< endl;
    cin >> salario;
    f->setSalario(salario);
    if ((salvaFunc = fopen("salvarFuncionario.txt","a")) == NULL)
    {
        cout << "Erro\n";
    }
    else
    {
        if (aux != 1){
        fprintf(salvaFunc,"%s\n",f->getNome().c_str());
        fprintf(salvaFunc,"%s\n",f->getTelefone().c_str());
        fprintf(salvaFunc,"%.2f\n",f->getSalario());
        cout << "Código: ";
        cout << f->getCodigoFunc()<<endl;
        cout << "Nome: ";
        cout << f->getNome()<<endl;
        cout << "Salário: ";
        cout << f->getSalario()<<endl;
        cout << "Telefone: ";
        cout << f->getTelefone()<<endl;
        }
    }
    fclose(salvaFunc);
}

void calculaPontosFidelidade(FILE *arquivo, string codClie) {
    int pontosAcumulados = 0;

    fseek(f,0,SEEK_SET);
    fread(&l, sizeof(l), 1, arquivo);
    
    while(!feof(arquivo)) {
        if(l.codigoClie.compare(codClie) == 0) {
            pontosAcumulados += (l.diasAlocados() * 10);
        }
        fread(&l, sizeof(l), 1, arquivo);
    }

    c.setPontosFidelidade(pontosAcumulados);
    if(pontosAcumulados >= 500) {
        cout << "O cliente de código " << codClie << " possui " << pontosAcumulados << " pontos de fidelidade e está hábil a ganhar o kit!" << endl;
    }
}

void pesquisaClientesPremiados(FILE *arquivo) {
    int codigoCliePremiado[c.lenght], contador = 0, existe = 0;

    fseek(f,0,SEEK_SET);
    fread(&l, sizeof(l), 1, arquivo);
    
    while(!feof(arquivo)) {
        if(c.pontosFidelidade() >= 500) {
            codigoCliePremiado[contador] = c.codigoClie();
            existe = 1;
        }
    }

    if(existe == 1) {
        cout << "Os clientes que possuem pontuação de fidelidade maior que 500 são:" << endl;
        for(int cont = 0; cont < codigoCliePremiado.lenght; cont++) {
            if(codigoCliePremiado[cont] !== null && codigoCliePremiado[cont] !== 'undefined') {
                cout << "Cliente de código: " << codigoCliePremiado[cont] << endl;
            }
        }
    }
    system("pause");
    system("cls");
}

void imprimeDados(int funcClie) {
    if(funcClie == 1) { //1 para Funcionário, 2 para Cliente
        cout << "Imprimindo dados do Funcionário." << endl;
        cout << "Nome:" << f.getNome() << endl;
        cout << "Data de nascimento:" << f.getDataNascimento() << endl;
        cout << "Telefone: " << f.getTelefone() << endl;
        cout << "Código de Funcionário: " << f.getCodigoFunc() << endl;
        cout << "Salário: " << f.getSalario() << endl;
    } else if(funcClie == 2){
        cout << "Imprimindo dados do Cliente." << endl;
        cout << "Nome:" << c.getNome() << endl;
        cout << "Data de nascimento:" << c.getDataNascimento() << endl;
        cout << "Telefone: " << c.getTelefone() << endl;
        cout << "Código de Cliente: " << c.getCodigoClie() << endl;
        cout << "Pontos de Fidelidade: " << c.getPontosFidelidade() << endl;
        cout << "Endereço: " << c.getEndereco() << endl;
    }
    system("pause");
    system("cls");
}