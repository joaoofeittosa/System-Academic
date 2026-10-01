#ifndef PESSOA_H
#define PESSOA_H
//Pessoa.h
#include<iostream>
#include<cstring>

class Pessoa{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];

public:
	Pessoa(int diaNA, int mesNA, int anoNA, const char* nome = '''');
	Pessoa();
	~Pessoa();
	void inicializa(int diaNA, int mesNA, int anoNA, const char* nome = '''');
	void Calc_Idade(int diaAT, int mesAt, int anoAT);
	int informaIdade();
};

#endif