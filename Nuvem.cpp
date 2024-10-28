#include <iostream>
#include "Nuvem.h"
#include <cstdlib>  // para rand() e srand()

Nuvem::Nuvem(float largura, float altura, const std::string& tela)
    : largura(largura), altura(altura), tela(tela), x_size(630), y_size(100), x_pos(largura), y_pos(30), velocidade(3) {}

void Nuvem::load_images() {
    // Função vazia para simular o carregamento da imagem
    std::cout << "Carregando imagem da nuvem." << std::endl;
}

void Nuvem::draw() {
    // Função vazia para simular o desenho da nuvem na tela
    std::cout << "Desenhando a nuvem na tela." << std::endl;
}

void Nuvem::update() {
    // Simula a movimentação da nuvem
    x_pos -= velocidade;
    if (x_pos <= -x_size) {
        x_pos = largura;  // Reposiciona a nuvem à direita da tela
        y_pos = (rand() % 3 + 8) * 9;  // Calcula nova posição vertical aleatória
        std::cout << "Reposicionando a nuvem em x=" << x_pos << " e y=" << y_pos << std::endl;
    }
}
