#ifndef _ELDEPARTAMENTO_H_
#define _ELDEPARTAMENTO_H_

class Departamento;

class ElDepartamento {
private:
    Departamento* pDepartamento;

public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento* pProx;
    ElDepartamento* pAnte;

    void setDepartamento(Departamento* pd);
    Departamento* getDepartamento();
    const char* getNome();
};

#endif