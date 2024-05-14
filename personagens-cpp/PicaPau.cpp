#include "../personagens-hpp/PicaPau.hpp"

PicaPau::PicaPau(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int PicaPau::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int PicaPau::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string PicaPau::pegarDescricao() 
{
    return "O nenem não é nenem";
}