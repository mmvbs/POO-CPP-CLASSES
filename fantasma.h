#ifndef FANTASMA_H
#define FANTASMA_H

#include "Entidade.h"
#include <string>
#include <vector>

class Fantasma : public Entidade {
public:
    Fantasma(int largura, int altura);

    void update() override;
    void draw() override;

private:
    void carregar_imagens();
    std::vector<std::string> caminhos_imagens;
    int tamanho_imagem_x = 135;
    int tamanho_imagem_y = 87;
};

#endif