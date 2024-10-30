#ifndef FANTASMA_H
#define FANTASMA_H

#include "Entidade.h"
#include <string>
#include <vector>

class Fantasma : public Entidade {
public:
    Fantasma(int largura, int altura, int telaLargura, int telaAltura);
    void update();
    void draw();

private:
    std::pair<int, int> tamanhoImagem;
    int rectX, rectY; 
};

#endif