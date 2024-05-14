#!/bin/bash

# Compilar os arquivos de acessórios
cd acessorios-cpp/
g++ -c *.cpp 
cd ..

# Compilar os arquivos do core do simulador
cd core-simulador-cpp
g++ -c *.cpp 
cd ..

# Compilar os arquivos dos personagens
cd personagens-cpp/
g++ -c *.cpp 
cd ..

# Compilar o programa principal e vincular todos os arquivos objeto
g++ principal/main.cpp acessorios-cpp/*.o core-simulador-cpp/*.o personagens-cpp/*.o -o programa_executavel

echo "Compiado!"