#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Taco.hpp"

Taco::Taco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Taco::gerarForcaAtaque()
{
    return maxForca;
}

string Taco::gerarRuidoAtaque()
{
    return "tac tac";
}
