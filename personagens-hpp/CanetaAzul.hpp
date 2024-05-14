#ifndef CANETAAZUL
#define CANETAAZUL
#include "../core-simulador-hpp/Personagem.hpp"
class CanetaAzul : public Personagem
{
    public:
        CanetaAzul(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif