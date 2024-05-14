#include <iostream>
#include <string>

#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Caderno.hpp"
#include "../acessorios-hpp/Caneta.hpp"
#include "../acessorios-hpp/Capa.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Espelho.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Fuzil.hpp"
#include "../acessorios-hpp/Porta.hpp"
#include "../acessorios-hpp/Taco.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chapolin.hpp"
#include "../personagens-hpp/CanetaAzul.hpp"
#include "../personagens-hpp/Mascara.hpp"
#include "../personagens-hpp/PicaPau.hpp"
#include "../personagens-hpp/Supla.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Taco("Taco de beisebol",0,100);
    ArmaAtaque* arma4 = new Fuzil("Fuzil de pente alongado", 50,1000);
    ArmaAtaque* arma5 = new Espada("Espada longa", 10, 500);
    ArmaAtaque* arma6 = new Caneta("Taco de beisebol",0,40);
    ArmaAtaque* arma7 = new Faca("Faquinha de pão",0,300);

    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* escudo2 = new Capa("Capa de invisibilidade", 2);
    ArmaDefesa* escudo3 = new Espelho("Capa de invisibilidade", 200);
    ArmaDefesa* escudo4 = new Porta("Porta", 50);
    ArmaDefesa* escudo5 = new Caderno("Caderno brochurão", 10);
    ArmaDefesa* escudo6 = new Capacete("Porta", 150);

    Personagem* p1 = new Chaves(1, "Chaves del ocho", 100, arma, escudo);
    Personagem* p3 = new Chapolin(2, "heroi", 200, arma2, escudo2);
    Personagem* p2 = new CanetaAzul(3, "Azul caneta", 100, arma6, escudo3);
    Personagem* p4 = new Mascara(4, "Demais", 100, arma3, escudo4);
    Personagem* p5 = new PicaPau(5, "hehehe", 100, arma4, escudo5);
    Personagem* p6 = new Supla(6, "Papito", 120, arma6, escudo6);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    system("pause");

    return 0;
}