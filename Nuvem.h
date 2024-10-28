#ifndef NUVEM_H
#define NUVEM_H

#include <string>

class Nuvem {
public:
    Nuvem(float largura, float altura, const std::string& tela);

    void load_images();  // Função vazia para carregar a imagem
    void draw();         // Função vazia para desenhar a nuvem na tela
    void update();       // Função vazia para atualizar a posição da nuvem

private:
    float largura, altura, x_size, y_size, x_pos, y_pos, velocidade;
    std::string tela;
};

#endif
