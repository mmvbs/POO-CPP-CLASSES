#include <iostream>
#include "Objeto.h"
#include "Obstaculos.h"
using namespace std;

#define largura = 1280
#define altura = 720
int main(){
  cout << "CYG em cpp" << endl;
  Obstaculo obstaculo(800, 600, 100, 300, 5, "obstaculo.png", 90, 100);

  for (int i = 0; i < 10; ++i) {
    obstaculo.update();
    obstaculo.draw();
  }

  return 0;
}
