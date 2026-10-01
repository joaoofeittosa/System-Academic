#include "Pessoa.h"
//Pessoa.cpp
Pessoa::Pessoa(int diaNA, int mesNA, int anoNA, const char* nome){
Inicializa(diaNA, mesNA, anoNA, nome);
}

Pessoa::Pessoa(){
Inicializa(0,0,0,"");
}

Pessoa::~Pessoa()

void Pessoa::Inicializa(int diaNA, int mesNA, int anoNA, const char* nome){
diaP = diaNA;
mesP = mesNA;
anoP = anoNA;
idadeP = -1;
std::strcpy(nomeP, nome);
}
void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT){
idadeP = anoAT - anoP;
if(mesP > mesAT){
idadeP--;
}else if(mesP == mesAT){
if(diaP > diaAT){
idadeP--;
}
}
std::cout<<"A idade da pessoa "<<nomeP<<"seria"<<idadeP<<"anos"<<std::endl;
}

int Pessoa::informaIdade(){
return idadeP;
}	