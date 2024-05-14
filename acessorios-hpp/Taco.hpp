#ifndef TACO
#define TACO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Taco : public ArmaAtaque
{
    public:
        Taco(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif