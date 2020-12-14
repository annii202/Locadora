#include <iostream>
#include <string>
#include "Pessoa.cpp"
using namespace std;
class Aluno : public Pessoa
{
private:
    string curso;
    string semestre;

public:
    Aluno();
    string getCurso();
    void setCurso(string c);
    string getSemestre();
    void setSemestre(string s);
};