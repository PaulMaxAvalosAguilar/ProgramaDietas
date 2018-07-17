#include "persona.h"
#include "composicioncorporalPlicometro.h"

Persona::Persona()
    :nombre(""),
      sexo(0),
      pesoyAltura(),
      diametros(),
      perimetros(),
      paniculos(),
      composicionCorporalPlicometro(pesoyAltura, perimetros,
                          diametros, paniculos),
      factoract(),
      superavitdef(),
      gastoEKmCardle(0,0,factoract, superavitdef)
{

}

std::string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const std::string &value)
{
    nombre = value;
}

int Persona::getSexo() const
{
    return sexo;
}

void Persona::setSexo(int value)
{
    sexo = value;
}

void Persona::calculaComposicionCorporalPlicometro()
{
    composicionCorporalPlicometro.setPesoyAltura(this->pesoyAltura);
    composicionCorporalPlicometro.setDiametros(this->diametros);
    composicionCorporalPlicometro.setPerimetros(this->perimetros);
    composicionCorporalPlicometro.setPaniculos(this->paniculos);
    composicionCorporalPlicometro.hacerCalculos();
}

void Persona::calculaTasaMetabolicaKmCardle(double porcentajegraso,
                                            double pesoenKilogramos)
{
    gastoEKmCardle.setPorcentajeGraso(porcentajegraso);
    gastoEKmCardle.setPeso(pesoenKilogramos);
    gastoEKmCardle.setFactorAct(factoract);
    gastoEKmCardle.setSupDef(superavitdef);
    gastoEKmCardle.calculaTasaMetabolicaBasal(gastoEKmCardle.getPorcentajeGraso(),
                                     gastoEKmCardle.getPeso());
}




