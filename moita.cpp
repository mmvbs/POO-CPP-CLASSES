#include "Moita.h"
#include <iostream>
using namespace std;

Moita::Moita(float largura, float altura, const std::string &tela,
               const std::string &sprite_nome, float velocidade,
               float x_inicial, float y_inicial, float largura_sprite,
               float altura_sprite)
    : Objeto(largura, altura, tela, sprite_nome, velocidade, x_inicial, y_inicial, largura_sprite, altura_sprite) {
}

void Moita::load_images(const std::string &sprite_nome, float largura_sprite,
                         float altura_sprite) {
    Objeto::load_images(sprite_nome, largura_sprite, altura_sprite);
}

void Moita::draw() {
    cout << "Desenha a moita!" << endl;
}

void Moita::update() {
    Objeto::update();
}
