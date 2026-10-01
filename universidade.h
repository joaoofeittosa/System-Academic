#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
//Universidade.h
#include <cstring>

class Universidade {
private:
    char nome[30];

public:
    Universidade(const char* n = "");
    ~Universidade();
    void setNome(const char* n);
    char* getNome();
};

#endif