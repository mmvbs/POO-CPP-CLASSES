#ifndef MOITA_H
#define MOITA_H

#include "Objeto.h"

class Moita : public Objeto {
public:
    Moita(float largura, float altura, const std::string &tela,
          const std::string &sprite_nome, float velocidade,
          float x_inicial, float y_inicial, float largura_sprite,
          float altura_sprite);
    
    void load_images(const std::string &sprite_nome, float largura_sprite,
                     float altura_sprite);
    void draw();
    void update();
};

#endif  // MOITA_H
