#ifndef FUZIL
#define FUZIL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Fuzil : public ArmaAtaque
{
    public:
        Fuzil(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif