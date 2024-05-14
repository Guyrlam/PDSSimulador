#ifndef ESPELHO
#define ESPELHO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Espelho : public ArmaDefesa
{
    public:
        Espelho(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif