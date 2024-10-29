#include "Fantasma.h"
#include <iostream>

Fantasma::Fantasma(int largura, int altura)
    : Entidade(largura, altura, 1000, 530, 0.5, 1)
{
    caminhos_imagens = {
        "texturas/fantasma1.png",
        "texturas/fantasma2.png",
        "texturas/fantasma3.png",
        "texturas/fantasma4.png",
        "texturas/fantasma5.png"
    };

    carregar_imagens();
}

void Fantasma::carregar_imagens() {
    for (const auto& caminho : caminhos_imagens) {
        imagens.push_back(caminho);
    }
}

void Fantasma::update() {
    atualizar_animacao(5);
    atualizar_posicao(-1, 0);
    rect_x = x + 50;
    rect_y = 530;
}

void Fantasma::draw() {
    std::cout << "Desenhando Fantasma na posição (" << x << ", " << y << ")\n";
}