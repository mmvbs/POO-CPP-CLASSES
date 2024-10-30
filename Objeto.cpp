#include "Objeto.h"
#include <iostream>
using namespace std;
Objeto::Objeto(float largura, float altura, const std::string &tela,
               const std::string &sprite_nome, float velocidade,
               float x_inicial, float y_inicial, float largura_sprite,
               float altura_sprite)
    : largura(largura), altura(altura), tela(tela), velocidade(velocidade),
      x(x_inicial), y(y_inicial), image(nullptr) {}

void Objeto::load_images(const std::string &sprite_nome, float largura_sprite,
                         float altura_sprite) {
  cout << "Carregando a imagem:" << sprite_nome << std::endl;
}

void Objeto::draw() {
    cout << "desenha o objeto" << endl;
}

void Objeto::update() {
  x -= velocidade;

    int image_width = getImageWidth(); // pega a largura da imagem
    if (x <= -image_width) {
      x = largura;
    }
}
void Objeto::rect() {
  // Função vazia que faz o triangulo usado para detectar colisão
}

float Objeto::getImageWidth(){
  // Função que obtem a largura
  return 1;
}
float Objeto::getX(){
    return x;  // Retorna a posição atual de x
}
