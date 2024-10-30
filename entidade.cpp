#include "Entidade.h"
#include <iostream>

Entidade::Entidade(int largura, int altura, int x, int y, float velocidade, float escala)
    : largura(largura), altura(altura), x(x), y(y), velocidade(velocidade), escala(escala), stepIndex(0) {
    rectX = x;
    rectY = y;
}

void Entidade::carregarImagens(const std::vector<std::string>& caminhos, int tamanhoX, int tamanhoY) {
    imagens = caminhos;
    if (!imagens.empty()) {
        imagemAtual = imagens[0]; 
    }
}

void Entidade::atualizarPosicao(float dx, float dy) {
    x += dx * velocidade;
    y += dy * velocidade;
    rectX = static_cast<int>(x);
    rectY = static_cast<int>(y);
}

void Entidade::desenhar() {

    std::cout << "Desenhando imagem: " << imagemAtual << " na posição (" << x << ", " << y << ")\n";
}

void Entidade::atualizarAnimacao(int frameRate) {
    if (!imagens.empty()) {
        stepIndex = (stepIndex + 1) % (imagens.size() * frameRate);
        imagemAtual = imagens[stepIndex / frameRate];
    }
}

bool Entidade::checarColisao(const Entidade& objeto) const {
    int largura1 = largura;
    int altura1 = altura;
    int largura2 = objeto.largura;
    int altura2 = objeto.altura;

    bool colisaoX = rectX < objeto.rectX + largura2 && rectX + largura1 > objeto.rectX;
    bool colisaoY = rectY < objeto.rectY + altura2 && rectY + altura1 > objeto.rectY;

    return colisaoX && colisaoY;
}