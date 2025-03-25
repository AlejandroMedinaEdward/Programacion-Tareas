#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Pokemon {
    public
    int ataque 
    int defensa
    int vida
    
    Pokemon(int x, int y){
        vida = 85;
        ataque = x;
        defensa = y;
    }
      set vida(){
        vida = get vida() - z;
      }
      
      int get vida(){
        return vida
      }
    }


    int main(){
        Pokemon Charmander (5,4);
        Pokemon Squirle (6,3);
        int descuento = 0;
        srand(time(NULL));
        for(int ; = 1; i > 0; i++)
        {
            srand(time(0));
            descuento = (Charmander.ataque - Squirle.defensa + rand() % 10 + 1);
            Squirle.setvida (descuento);
        }

        descuento = (Squirle.ataque - Charmander.defensa + rand() % 10 + 1);
        Charmander.setvida(descuento);

        if(Charmander.getvida)(< = 0){
            cout << "squirtle Win";
            break;
        }

        if(Squirle.getvida)( < = 0){
            cout << "Charmander Win";
            break;
        }
    }
return 0
}