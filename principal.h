#ifndef PRINCIPAL_H
#define PRINCIPAL_H
//Principal.h
#include"Pessoa.h"

class Principal{
private:
	Pessoa Simao;
	Pessoa Einstein;
	Pessoa Newton;
	int diaAtual;
	int mesAtual;
	int anoAtual;

public:
	Principal();
	~Principal();
	void Executar();
};

#endif