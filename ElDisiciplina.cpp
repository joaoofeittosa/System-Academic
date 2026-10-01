#include "ElDisciplina.h"
#include "Disciplina.h"
#include <cstddef>

ElDisciplina::ElDisciplina() {
    pDisciplina = NULL;
    pProx = NULL;
    pAnte = NULL;
}

ElDisciplina::~ElDisciplina() {
    pDisciplina = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void ElDisciplina::setDisciplina(Disciplina* pdi) {
    pDisciplina = pdi;
}

Disciplina* ElDisciplina::getDisciplina() {
    return pDisciplina;
}

const char* ElDisciplina::getNome() {
    return pDisciplina->getNome();
}