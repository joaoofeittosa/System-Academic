#include "ListaDepartamentos.h"
#include "Departamento.h"
#include <iostream>
#include <cstring>

ListaDepartamentos::ListaDepartamentos(int nd, const char* n) {
    numero_dep = nd;
    cont_dep = 0;
    pElDepartamentoPrim = NULL;
    pElDepartamentoAtual = NULL;
    std::strcpy(nome, n);
}

ListaDepartamentos::~ListaDepartamentos() {
    ElDepartamento *paux1, *paux2;
    paux1 = pElDepartamentoPrim;
    while (paux1 != NULL) {
        paux2 = paux1->pProx;
        delete paux1;
        paux1 = paux2;
    }
    pElDepartamentoPrim = NULL;
    pElDepartamentoAtual = NULL;
}

void ListaDepartamentos::setNome(const char* n) {
    std::strcpy(nome, n);
}

void ListaDepartamentos::incluaDepartamento(Departamento* pd) {
    if (((cont_dep < numero_dep) || (numero_dep == -1)) && (pd != NULL)) {
        ElDepartamento* paux = new ElDepartamento();
        paux->setDepartamento(pd);

        if (pElDepartamentoPrim == NULL) {
            pElDepartamentoPrim = paux;
            pElDepartamentoAtual = paux;
        } else {
            pElDepartamentoAtual->pProx = paux;
            paux->pAnte = pElDepartamentoAtual;
            pElDepartamentoAtual = paux;
        }
        cont_dep++;
    }
}

void ListaDepartamentos::listeDepartamentos() {
    ElDepartamento* paux = pElDepartamentoPrim;
    while (paux != NULL) {
        std::cout << "Departamento: " << paux->getNome() << " da Universidade " << nome << std::endl;
        paux = paux->pProx;
    }
}

Departamento* ListaDepartamentos::localizar(const char* n) {
    ElDepartamento* paux = pElDepartamentoPrim;
    while (paux != NULL) {
        if (std::strcmp(n, paux->getNome()) == 0) {
            return paux->getDepartamento();
        }
        paux = paux->pProx;
    }
    return NULL;
}