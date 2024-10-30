#include <iostream>
#include "Objeto.h"
#include "Moita.h"
#include "Tumulos.h" 

using namespace std;

#define LARGURA 1280
#define ALTURA 720

int main() {
    cout << "CYG em cpp" << endl;

    Moita moita(LARGURA, ALTURA, "tela_exemplo", "moita.png", 1, 800, 600, 100, 100);
    Tumulos tumulo(LARGURA, ALTURA, "tela_exemplo", "tumulo.png", 1, 1, 600, 100, 100);
    
    moita.load_images("moita.png", 100, 100);
    for (int i = 0; i < 2; ++i) {
    // Simulando 2 execuções para Moita
        cout << "Posicao antes de update (Moita): " << moita.getX() << endl;
        moita.update();
        cout << "Posicao depois de update (Moita): " << moita.getX() << endl;
        moita.draw();
    }
    cout << "-----------------------------------------------------------" << endl;
    
    tumulo.load_images("tumulo.png", 100, 100);
    for (int i = 0; i < 2; ++i) {
        cout << "Posicao antes de update (Tumulos): " << tumulo.getX() << endl;
        tumulo.update();
        cout << "Posicao depois de update (Tumulos): " << tumulo.getX() << endl;
        tumulo.draw();
    }

    return 0;
}
