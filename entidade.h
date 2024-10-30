#ifndef ENTIDADE_H
#define ENTIDADE_H

#include <vector>
#include <string>

class Entidade {
public:
    Entidade(int largura, int altura, int x, int y, float velocidade, float escala);
    
    void carregarImagens(const std::vector<std::string>& caminhos, int tamanhoX, int tamanhoY);
    void atualizarPosicao(float dx = 0, float dy = 0);
    void desenhar();
    void atualizarAnimacao(int frameRate);
    bool checarColisao(const Entidade& objeto) const;

protected:
    int largura;
    int altura;
    float x, y;
    float velocidade;
    float escala;
    int stepIndex;
    std::vector<std::string> imagens; 
    std::string imagemAtual;
    int rectX, rectY; 
};

#endif