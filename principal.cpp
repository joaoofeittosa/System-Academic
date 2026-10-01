 #include "Principal.h"
#include <iostream>
//Pricipal.cpp
Principal::Principal() {
    Simao.Inicializa(3, 10, 1976, "Jean Simao");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");
    
    diaAtual = 25;
    mesAtual = 8;
    anoAtual = 2009;
}

Principal::~Principal() {}

void Principal::Executar() {
    Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
}
