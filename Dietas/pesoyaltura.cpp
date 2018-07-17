#include "pesoyaltura.h"

PesoyAltura::PesoyAltura()
{
    PesoenKilos = 0;
    AlturaCentimetros = 0;
}

double PesoyAltura::getPesoenKilos() const
{
    return PesoenKilos;
}

void PesoyAltura::setPesoenKilos(double value)
{
    PesoenKilos = value;
}

double PesoyAltura::getAlturaCentimetros() const
{
    return AlturaCentimetros;
}

void PesoyAltura::setAlturaCentimetros(double value)
{
    AlturaCentimetros = value;
}
