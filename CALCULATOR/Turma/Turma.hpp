// #include "../Modalidade/Modalidade.hpp"
#include "../Professor/Professor.hpp"

class Turma{
    Modalidade* modalidade;
    char dataInicio[12];
    char dataTermino[12];
    Professor *professor;
    char nome[15];

public:
    void SetModalidade(Modalidade*);
    Modalidade* GetModalidade();

    void SetDataInicio(char*);
    char* GetDataInicio();

    void SetDataTermino(char*);
    char* GetDataTermino();

    void SetProfessor(Professor *);
    Professor* GetProfessor();

    void SetNome(char *);
    char* GetNome();
};