#include "perimetros.h"

Perimetros::Perimetros()
{
    brazoRelajado = 0;
    brazoContraido = 0;
    antebrazo = 0;
    muneca = 0;
    torax = 0;
    cintura = 0;
    cadera = 0;
    muslo = 0;
    pierna = 0;
    tobillo = 0;
}

double Perimetros::getBrazoRelajado() const
{
    return brazoRelajado;
}

void Perimetros::setBrazoRelajado(double value)
{
    brazoRelajado = value;
}

double Perimetros::getBrazoContraido() const
{
    return brazoContraido;
}

void Perimetros::setBrazoContraido(double value)
{
    brazoContraido = value;
}

double Perimetros::getAntebrazo() const
{
    return antebrazo;
}

void Perimetros::setAntebrazo(double value)
{
    antebrazo = value;
}

double Perimetros::getMuneca() const
{
    return muneca;
}

void Perimetros::setMuneca(double value)
{
    muneca = value;
}

double Perimetros::getTorax() const
{
    return torax;
}

void Perimetros::setTorax(double value)
{
    torax = value;
}

double Perimetros::getCintura() const
{
    return cintura;
}

void Perimetros::setCintura(double value)
{
    cintura = value;
}

double Perimetros::getCadera() const
{
    return cadera;
}

void Perimetros::setCadera(double value)
{
    cadera = value;
}

double Perimetros::getMuslo() const
{
    return muslo;
}

void Perimetros::setMuslo(double value)
{
    muslo = value;
}

double Perimetros::getPierna() const
{
    return pierna;
}

void Perimetros::setPierna(double value)
{
    pierna = value;
}

double Perimetros::getTobillo() const
{
    return tobillo;
}

void Perimetros::setTobillo(double value)
{
    tobillo = value;
}
