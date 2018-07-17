#include "gastoenergeticoKmCardle.h"

GastoEnergeticoKmCardle::GastoEnergeticoKmCardle(double porcentajeGraso,
                                                 double pesoenKilogramos,
                                                 FactorActividad factoractividad,
                                                 SuperativDeficit valorSuperOdeficit)
{
    this->factorAct = factoractividad;
    this->supDef = valorSuperOdeficit;
    tasaMetabolicaBasal = 0;
    this->gastoEnergeticoTotal = 0;
    this->porcentajeGraso = porcentajeGraso;
    this->peso = pesoenKilogramos;
}

FactorActividad GastoEnergeticoKmCardle::getFactorAct() const
{
    return factorAct;
}

void GastoEnergeticoKmCardle::setFactorAct(const FactorActividad &value)
{
    factorAct = value;
}

SuperativDeficit GastoEnergeticoKmCardle::getSupDef() const
{
    return supDef;
}

double GastoEnergeticoKmCardle::getPeso() const
{
    return peso;
}

void GastoEnergeticoKmCardle::setPeso(double value)
{
    peso = value;
}

void GastoEnergeticoKmCardle::setSupDef(const SuperativDeficit &value)
{
    supDef = value;
}

double GastoEnergeticoKmCardle::getPorcentajeGraso() const
{
    return porcentajeGraso;
}

void GastoEnergeticoKmCardle::setPorcentajeGraso(double value)
{
    porcentajeGraso = value;
}

double GastoEnergeticoKmCardle::getTasaMetabolicaBasal() const
{
    return tasaMetabolicaBasal;
}

void GastoEnergeticoKmCardle::setTasaMetabolicaBasal(double value)
{
    tasaMetabolicaBasal = value;
}

double GastoEnergeticoKmCardle::getGastoEnergeticoTotal() const
{
    return gastoEnergeticoTotal;
}

void GastoEnergeticoKmCardle::calculaTasaMetabolicaBasal(double porcentajeGraso, double pesoenKilogramos)
{
    setTasaMetabolicaBasal( 370 + ( 21.6 * (pesoenKilogramos * (100 - porcentajeGraso))/100));
}

double GastoEnergeticoKmCardle::calculaGastoEenergeticoTotal(double superavitodeficit, double factorAct)
{

}

void GastoEnergeticoKmCardle::setGastoEnergeticoTotal(double value)
{
    gastoEnergeticoTotal = value;
}
