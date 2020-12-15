#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <string>
using namespace std;
class CadFuncionario
{
private:
    float salario;
public:
    CadFuncionario();
    ~CadFuncionario();
    int codigo;
    string nome,telefone;
    float getSalario();
    void setSalario(float s);
    string getNome();
    void setNome(string n);
    string getTelefone();
    void setTelefone(string tel);
    int getCodigo();
    void setCodigo(int c);
};

CadFuncionario::CadFuncionario()
{
    cout << "Executando construtor\n";
}
CadFuncionario::~CadFuncionario()
{
    cout << "Executando...\n";
}

float CadFuncionario::getSalario()
{
    return salario;
}
void CadFuncionario::setSalario(float s)
{
    salario = s;
}

string CadFuncionario::getNome()
{
    return nome;
}
void CadFuncionario::setNome(string n)
{
    nome = n;
}

string CadFuncionario::getTelefone()
{
    return telefone;
}
void CadFuncionario::setTelefone(string tel)
{
    telefone = tel;
}

int CadFuncionario::getCodigo()
{
    return codigo;
}
void CadFuncionario::setCodigo(int c)
{
    codigo = c;
}


void salvaFuncionario(int cod);
int main()
{
    setlocale(LC_ALL,"portuguese");
    FILE *salvaFunc;
    FILE *salvaCodigo;
    CadFuncionario *f;
    f=new(CadFuncionario);
    char nome[50],telefone[50];
    int codigo,cod,aux=0;
    float salario;
    cout << "Diga o nome do funcionário:\n";
    fflush(stdin);
    gets(nome);
    f->setNome(nome);
    cout << "O código do funcionário é: " <<endl;
    cin >> codigo;
    f->setCodigo(codigo);
    if ((salvaCodigo=fopen("salvarCodigo.txt","a"))==NULL)
    {
        cout << "Erro!\n";
    }
    else
    {
        for (int i=0; i<100; i++)
        {
            fscanf(salvaCodigo,"%i",&cod);
            if (f->getCodigo() == cod)
            {
                cout << "Código já existente\n";
                aux=1;
            }
        }
        if (aux != 1)
        {
            f->setCodigo(codigo);
            fprintf(salvaCodigo,"%i\n",f->getCodigo());
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
        cout << f->getCodigo()<<endl;
        cout << "Nome: ";
        cout << f->getNome()<<endl;
        cout << "Salário: ";
        cout << f->getSalario()<<endl;
        cout << "Telefone: ";
        cout << f->getTelefone()<<endl;
        }
    }
    fclose(salvaFunc);
    return 0;
}

