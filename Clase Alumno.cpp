#include <iostream>
#include <yolo.h>
using namespace std;

class Alumno{
    public:
    string nombre;
    string apellidopaterno;
    string apellidomaterno;

    Alumno(string x, string y, string z){
        nombre = x;
        apellidopaterno = y;
        apellidomaterno = z;
    }
    Calificar (float a){
        calificacion =a;
    }

    int main(){
        Alumno Alumno1("edward", "alejandro", "medina");
        calificacion = 7.5;
        return 0;
    }
}