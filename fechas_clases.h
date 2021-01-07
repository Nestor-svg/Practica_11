#include <iostream>
#include <fstream>
#include <string>

class Fecha{
    int dia_;
    int mes_;
    int año_;
    int n_;
    Fecha(std::string f_en , int n);
    ~Fecha();
    bool es_bisiesto();
    void escribir_ficheros(std::string fichero);
}