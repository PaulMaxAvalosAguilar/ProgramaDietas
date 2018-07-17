#include "gastoenergeticoKmCardle.h"

GastoEnergeticoKmCardle::GastoEnergeticoKmCardle(double porcentajeGraso,
                                                 FactorActividad factoractividad,
                                                 SuperativDeficit valorSuperOdeficit)
{
    this->factorAct = factoractividad;
    this->supDef = valorSuperOdeficit;
    tasaMetabolicaBasal = 0;
    this->porcentajeGraso = 0;
    this->gastoEnergeticoTotal = 0;
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

void GastoEnergeticoKmCardle::setGastoEnergeticoTotal(double value)
{
    gastoEnergeticoTotal = value;
}
