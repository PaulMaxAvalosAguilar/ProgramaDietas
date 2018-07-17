#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "pesoyaltura.h"
#include "diametros.h"
#include "perimetros.h"
#include "paniculos.h"
#include "composicioncorporal.h"

class Persona
{

public:
    Persona();

    std::string getNombre() const;
    void setNombre(const std::string &value);

    int getSexo() const;
    void setSexo(int value);

    void calculaComposicionCorporalPlicometro();

private:
    std::string nombre;
    int sexo;

public:
    PesoyAltura pesoyAltura;
    Diametros diametros;
    Perimetros perimetros;
    Paniculos paniculos;
    ComposicionCorporalPlicometro composicionCorporalPlicometro;

};

#endif // PERSONA_H
