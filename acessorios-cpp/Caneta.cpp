#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Caneta.hpp"

Caneta::Caneta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Caneta::gerarForcaAtaque()
{
    return maxForca;
}

string Caneta::gerarRuidoAtaque()
{
    return "flic flic";
}
