#include <iostream>
#include <yolo.h>
#include <ctime>
using namespace std;

struct Fecha{
    int dia, mes, anio;
};
class Alumno{
privare:
    string nombre;
    string matricula;
    Fecha fechaNacimiento;
public;
 Alumno (string x, int t, int d, int m, int a){
     nombre = x;
        matricula = t;
     fechaNacimiento.dia = d;
     fechaNacimiento.mes = m;
     fechaNacimiento.anio = a;
 }
 int calcular edad(){
     time_t t = time(0);
     struct tm * now = localtime(&t);
     int edad = now->tm_year + 1900 - fechaNacimiento.anio;
     if (now->tm_mon + 1 < fechaNacimiento.mes || (now->tm_mon + 1 == fechaNacimiento.mes && now->tm_mday < fechaNacimiento.dia))
     edad--;
     return edad;
 }
    int main(){
        Alumno Alumno1("Edward", "A24530273", 15, 10, 2004);
        cout << "La edad de " << Alumno1.nombre << " es " << Alumno1.calcularEdad() << " años" << endl;
        return 0;
    }
}