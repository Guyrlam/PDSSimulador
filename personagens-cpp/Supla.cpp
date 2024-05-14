#include "../personagens-hpp/Supla.hpp"

Supla::Supla(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Supla::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Supla::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Supla::pegarDescricao() 
{
    return "Eai champs";
}