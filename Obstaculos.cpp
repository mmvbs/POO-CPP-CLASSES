#include "Obstaculos.h"
#include <iostream>
#include <filesystem>

Obstaculo::Obstaculo(int largura, int altura, int x, int y, int velocidade, const std::string& image_file, int scale_width, int scale_height)
  : largura(largura), altura(altura), x(x), y(y), velocidade(velocidade), scale_width(scale_width), scale_height(scale_height) {
  rect_x = x;
  rect_y = y;
  load_images(image_file);
}

void Obstaculo::load_images(const std::string& image_file) {
  std::string base_path = std::filesystem::current_path().string() + "/../texturas/";
  std::string sprite_path = base_path + image_file;
  std::cout << "Carregando imagem a partir de: " << sprite_path << std::endl;
}

void Obstaculo::draw() {
  std::cout << "Desenhando obstáculo em (" << x << ", " << y << ")" << std::endl;
}

void Obstaculo::update() {
  x -= velocidade;
  if (x <= -scale_width) {
    x = largura;
  }
  rect_x = x;
  rect_y = y;
}

