#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "pesoyaltura.h"
#include "diametros.h"
#include "perimetros.h"
#include "paniculos.h"
#include "composicioncorporalPlicometro.h"
#include "factoractividad.h"
#include "superativdeficit.h"
#include "gastoenergeticoKmCardle.h"

class Persona
{

public:
    Persona();

    std::string getNombre() const;
    void setNombre(const std::string &value);

    int getSexo() const;
    void setSexo(int value);

    void calculaComposicionCorporalPlicometro();
    void calculaTasaMetabolicaKmCardle(double porcentajegraso,
                                       double pesoenKilogramos);

private:
    std::string nombre;
    int sexo;

public:
    PesoyAltura pesoyAltura;
    Diametros diametros;
    Perimetros perimetros;
    Paniculos paniculos;
    ComposicionCorporalPlicometro composicionCorporalPlicometro;
    FactorActividad factoract;
    SuperativDeficit superavitdef;
    GastoEnergeticoKmCardle gastoEKmCardle;

};

#endif // PERSONA_H
