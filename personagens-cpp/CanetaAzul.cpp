#include "../personagens-hpp/CanetaAzul.hpp"

CanetaAzul::CanetaAzul(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int CanetaAzul::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int CanetaAzul::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string CanetaAzul::pegarDescricao() 
{
    return "Caneta Azul";
}