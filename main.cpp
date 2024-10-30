#include <iostream>
#include "Objeto.h"
#include "Moita.h"
#include "Tumulos.h" // Inclusão da classe Tumulos

using namespace std;

#define LARGURA 1280
#define ALTURA 720

int main() {
    cout << "CYG em cpp" << endl;

    Moita moita(LARGURA, ALTURA, "tela_exemplo", "moita.png", 5, 800, 600, 100, 100);
    moita.load_images("moita.png", 100, 100);
    
    // Simulando 2 execuções para Moita
    for (int i = 0; i < 2; ++i) {
        cout << "Posicao antes de update (Moita): " << moita.getX() << endl;
        moita.update();
        cout << "Posicao depois de update (Moita): " << moita.getX() << endl;
        moita.draw();
    }
    cout << "-----------------------------------------------------------" << endl;
    Tumulos tumulo(LARGURA, ALTURA, "tela_exemplo", "tumulo.png", 3, 900, 600, 100, 100);
    tumulo.load_images("tumulo.png", 100, 100);
    
    for (int i = 0; i < 2; ++i) {
        cout << "Posicao antes de update (Tumulos): " << tumulo.getX() << endl;
        tumulo.update();
        cout << "Posicao depois de update (Tumulos): " << tumulo.getX() << endl;
        tumulo.draw();
    }

    return 0;
}
