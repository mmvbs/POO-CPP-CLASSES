#include "Tumulos.h"
#include <iostream>
using namespace std;

Tumulos::Tumulos(float largura, float altura, const std::string &tela,
                 const std::string &sprite_nome, float velocidade,
                 float x_inicial, float y_inicial, float largura_sprite,
                 float altura_sprite)
    : Objeto(largura, altura, tela, sprite_nome, velocidade, x_inicial, y_inicial, largura_sprite, altura_sprite) {
}

void Tumulos::load_images(const std::string &sprite_nome, float largura_sprite,
                          float altura_sprite) {
    cout << "Carregando a imagem do tumulo: " << sprite_nome << endl;
}

void Tumulos::draw() {
    cout << "Desenha o tumulo!" << endl;
}

void Tumulos::update() {
    Objeto::update();
}
