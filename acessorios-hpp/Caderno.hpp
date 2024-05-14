#ifndef CADERNO
#define CADERNO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Caderno : public ArmaDefesa
{
    public:
        Caderno(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif