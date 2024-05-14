#include "../personagens-hpp/Mascara.hpp"

Mascara::Mascara(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Mascara::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Mascara::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Mascara::pegarDescricao() 
{
    return "Quem não chora não mama";
}