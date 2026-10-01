#include "ElDepartamento.h"
#include "Departamento.h"
#include <cstddef>

ElDepartamento::ElDepartamento() {
    pDepartamento = NULL;
    pProx = NULL;
    pAnte = NULL;
}

ElDepartamento::~ElDepartamento() {
    pDepartamento = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void ElDepartamento::setDepartamento(Departamento* pd) {
    pDepartamento = pd;
}

Departamento* ElDepartamento::getDepartamento() {
    return pDepartamento;
}

const char* ElDepartamento::getNome() {
    return pDepartamento->getNome();
}