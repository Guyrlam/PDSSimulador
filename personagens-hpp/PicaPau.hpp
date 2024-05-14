#ifndef PICAPAU
#define PICAPAU
#include "../core-simulador-hpp/Personagem.hpp"
class PicaPau : public Personagem
{
    public:
        PicaPau(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif