#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Caderno.hpp"

Caderno::Caderno(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Caderno::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Caderno::getResistencia() 
{
    return this->resistencia;
}