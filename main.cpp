#include <iostream>
#include "Objeto.h"
#include "Moita.h" 

using namespace std;

#define LARGURA 1280
#define ALTURA 720

int main() {
    cout << "CYG em cpp" << endl;

    Moita moita(LARGURA, ALTURA, "tela_exemplo", "moita.png", 5, 800, 600, 100, 100);
    moita.load_images("moita.png", 100, 100);
    for (int i = 0; i < 2; ++i) {//simulando 2 execuções
        cout << "Posicao antes de update: " << moita.getX() << endl;
        moita.update();
        cout << "Posicao depois de update" << moita.getX() << endl;
        moita.draw();
    }
    return 0;
}
