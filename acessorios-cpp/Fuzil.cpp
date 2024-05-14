#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Fuzil.hpp"

Fuzil::Fuzil(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Fuzil::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Fuzil::gerarRuidoAtaque()
{
    return "tum tum";
}