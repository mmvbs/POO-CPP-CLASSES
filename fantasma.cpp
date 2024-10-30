#include "Fantasma.h"
#include <iostream>
#include <string>

Fantasma::Fantasma(int largura, int altura, int telaLargura, int telaAltura)
    : Entidade(largura, altura, 1000, 530, 0.5, 1), 
      tamanhoImagem(135, 87) {
    rectX = 1000;
    rectY = 530;

    std::vector<std::string> caminhosImagens = {
        "texturas/fantasma1.png",
        "texturas/fantasma2.png",
        "texturas/fantasma3.png",
        "texturas/fantasma4.png",
        "texturas/fantasma5.png"
    };

    carregarImagens(caminhosImagens, tamanhoImagem.first, tamanhoImagem.second);
}

void Fantasma::update() {
    atualizarAnimacao(5);
    atualizarPosicao(-1);
    rectX = x + 50;
    rectY = 530;
}

void Fantasma::draw() {
    std::cout << "Desenhando Fantasma na posição (" << x << ", " << y << ") com imagem " << imagemAtual << std::endl;
}