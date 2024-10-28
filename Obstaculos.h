#ifndef OBSTACULO_H
#define OBSTACULO_H

#include <string>

class Obstaculo {
public:
  Obstaculo(int largura, int altura, int x, int y, int velocidade, const std::string& image_file, int scale_width, int scale_height);
  void load_images(const std::string& image_file); // Placeholder de carregamento de imagem
  void draw(); // Placeholder de desenho
  void update(); // Atualiza posição

private:
  int largura, altura;
  int x, y;
  int velocidade;
  int scale_width, scale_height;
  int rect_x, rect_y;
};

#endif

