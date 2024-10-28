#include <iostream>
#include "Objeto.h"

Objeto::Objeto(float largura, float altura, const std::string& tela, const std::string& sprite_nome, 
               float velocidade, float x_inicial, float y_inicial, float largura_sprite, float altura_sprite)
    : largura(largura), altura(altura), tela(tela), velocidade(velocidade),
      x(x_inicial), y(y_inicial), image(nullptr){}

    void Objeto::load_images(const std::string& sprite_nome, float largura_sprite, float altura_sprite){
        std::cout << "Carregando a imagem!" << sprite_nome << std::endl;
      }

    void Objeto::draw() {
    //Função vazia para desenhar na tela
      }

    void Objeto::update() {
        x -= velocidade;
        if (image != nullptr) {
            int image_width = getImageWidth(); //pega a largura da imagem
            if (x <= -image_width) {
                x = largura;
            }
        }
    }
    void Objeto::rect(){
        //Função vazia que faz o triangulo usado para detectar colisão
    }

    int getImageWidth(){
        //Função que obtem a largura
    }