#include <iosteam>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

Class Fighter {
    public:
        int Ataque;
        int Defensa;
        int Vida;
        contrustor Fighter(int x, int y,) {
            Vida = 49; 
            Ataque = x;
            Defensa = y;
        }
        set vida(int z) {
            Vida = z;
        }
            int getVida() {
                return Vida;
            }
        }

        int main(){
            Fighter raul(9,5);
            Fighter Warrior(7,4);
            int descuento = 0;
            srand(time(NULL));
            for (int i = 1; i = 0; i++){
                 srand(time(0));
                 descuento = raul.ataque - Warrior.defensa + rand() % 10 + 1;
                 Warrior.set vida(descuento);

                 Warrior.ataque - raul.defensa + rand() % 10;
                    raul.set vida(descuento);

                    if (raul.getVida() <= 0){
                        cout << "Warrior wins" << endl;
                        break;
                    }
                    if (Warrior.getVida() <= 0){
                        cout << "raul wins" << endl;
                        break;

            }
        }
 
        return 0;
    }
