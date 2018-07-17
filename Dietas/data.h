#ifndef DATA_H
#define DATA_H

#include <string>

typedef struct Persona{
    std::string nombre;
    int sexo;
    int ano_nac;
    int mes;
    int dia;
    double estatura;
    int telefono;
}Persona;

typedef struct PesoyAltura{

}PesoyAltura;

typedef struct Perimetros{
    double brazoRelajado;
    double brazoContraido;
    double antebrazo;
    double muneca;
    double torax;
    double cintura;
    double cadera;
    double muslo;
    double pierna;
    double tobillo;
}Perimetros;

typedef struct Diametros
{
    double biacromial;
    double biepicondielianoHumero;
    double biestiloideo;
    double traversoTorax;
    double antroposteriorTorax;
    double bileocrestal;
    double biepicondileoFemur;
}Diametros;

typedef struct Paniculos{
    double Tricipital;
    double Subescapular;
    double Abdominal;
    double Suprailiaco;
    double Muslo;
    double Pantorrilla;
}Paniculos;




#endif // DATA_H
