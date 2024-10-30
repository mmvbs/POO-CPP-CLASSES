// Objeto.h
#ifndef OBJETO_H
#define OBJETO_H

#include <string>

class Objeto {
public:
  Objeto(float largura, float altura, const std::string &tela,
         const std::string &sprite_nome, float velocidade, float x_inicial,
         float y_inicial, float largura_sprite, float altura_sprite);

  void load_images(const std::string &sprite_nome, float largura_sprite,
                   float altura_sprite);
  void draw();
  void update();
  void rect(); // Função paar susbtituir a função rect do pygame
  float getX() const;
protected:
  float largura, altura;
  std::string tela;
  float velocidade;
  float x, y;
  void *image;

  int getImageWidth(); // Função vazia para obter a largura da imagem
};

#endif
