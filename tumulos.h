#include "Objeto.h"
#include <string>

class Tumulos : public Objeto {
public:
    Tumulos(float largura, float altura, const std::string &tela,
            const std::string &sprite_nome, float velocidade,
            float x_inicial, float y_inicial, float largura_sprite,
            float altura_sprite);
    
    void load_images(const std::string &sprite_nome, float largura_sprite,
                     float altura_sprite);
    void draw();
    void update();
};