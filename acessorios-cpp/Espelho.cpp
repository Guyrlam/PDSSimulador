#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Espelho.hpp"

Espelho::Espelho(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Espelho::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Espelho::getResistencia() 
{
    return this->resistencia;
}