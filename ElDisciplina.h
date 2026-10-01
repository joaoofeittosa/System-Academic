#ifndef _ELDISCIPLINA_H_
#define _ELDISCIPLINA_H_

class Disciplina;

class ElDisciplina {
private:
    Disciplina* pDisciplina;

public:
    ElDisciplina();
    ~ElDisciplina();

    ElDisciplina* pProx;
    ElDisciplina* pAnte;

    void setDisciplina(Disciplina* pdi);
    Disciplina* getDisciplina();
    const char* getNome();
};

#endif