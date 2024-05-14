#ifndef MASCARA
#define MASCARA
#include "../core-simulador-hpp/Personagem.hpp"
class Mascara : public Personagem
{
    public:
        Mascara(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif