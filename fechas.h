#include <iostream>
#include <fstream>
#include <string>

class Fecha{
    private:
        int dia_;
        int mes_;
        int anio_;
        int n_;
    public:
        Fecha(int d, int m , int a , int n);
        Fecha();
        ~Fecha();
        bool es_bisiesto();
        void escribir_ficheros(std::string fichero);
};