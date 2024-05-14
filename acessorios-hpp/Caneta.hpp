#ifndef CANETA
#define CANETA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Caneta : public ArmaAtaque
{
    public:
        Caneta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif