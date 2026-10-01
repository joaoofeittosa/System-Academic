#include "ListaDisciplinas.h"
#include "Disciplina.h"
#include <iostream>
#include <cstring>

ListaDisciplinas::ListaDisciplinas(int nd, const char* n) {
    numero_disc = nd;
    cont_disc = 0;
    pElDisciplinaPrim = NULL;
    pElDisciplinaAtual = NULL;
    std::strcpy(nome, n);
}

ListaDisciplinas::~ListaDisciplinas() {
    ElDisciplina *paux1, *paux2;
    paux1 = pElDisciplinaPrim;
    while (paux1 != NULL) {
        paux2 = paux1->pProx;
        delete paux1;
        paux1 = paux2;
    }
    pElDisciplinaPrim = NULL;
    pElDisciplinaAtual = NULL;
}

void ListaDisciplinas::setNome(const char* n) {
    std::strcpy(nome, n);
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pdi) {
    if (((cont_disc < numero_disc) || (numero_disc == -1)) && (pdi != NULL)) {
        ElDisciplina* paux = new ElDisciplina();
        paux->setDisciplina(pdi);

        if (pElDisciplinaPrim == NULL) {
            pElDisciplinaPrim = paux;
            pElDisciplinaAtual = paux;
        } else {
            pElDisciplinaAtual->pProx = paux;
            paux->pAnte = pElDisciplinaAtual;
            pElDisciplinaAtual = paux;
        }
        cont_disc++;
    } else {
        std::cout << "Disciplina nao incluida." << std::endl;
    }
}

void ListaDisciplinas::listeDisciplinas() {
    ElDisciplina* paux = pElDisciplinaPrim;
    while (paux != NULL) {
        std::cout << "Disciplina " << paux->getNome() << " do departamento " << nome << "." << std::endl;
        paux = paux->pProx;
    }
}

void ListaDisciplinas::listeDisciplinas2() {
    ElDisciplina* paux = pElDisciplinaAtual;
    while (paux != NULL) {
        std::cout << "Disciplina " << paux->getNome() << " do departamento " << nome << "." << std::endl;
        paux = paux->pAnte;
    }
}