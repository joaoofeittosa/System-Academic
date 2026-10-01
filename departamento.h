#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include <cstring>

class Departamento {
private:
    char nome[100];

public:
    Departamento();
    ~Departamento();
    void setNome(const char* n);
    char* getNome();
};

#endif