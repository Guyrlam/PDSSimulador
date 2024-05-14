#ifndef SUPLA
#define SUPLA
#include "../core-simulador-hpp/Personagem.hpp"
class Supla : public Personagem
{
    public:
        Supla(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif