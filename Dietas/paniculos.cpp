#include "paniculos.h"

Paniculos::Paniculos()
{
    Tricipital = 0;
    Subescapular = 0;
    Abdominal = 0;
    Suprailiaco = 0;
    Muslo = 0;
    Pantorrilla = 0;
}

double Paniculos::getTricipital() const
{
    return Tricipital;
}

void Paniculos::setTricipital(double value)
{
    Tricipital = value;
}

double Paniculos::getSubescapular() const
{
    return Subescapular;
}

void Paniculos::setSubescapular(double value)
{
    Subescapular = value;
}

double Paniculos::getAbdominal() const
{
    return Abdominal;
}

void Paniculos::setAbdominal(double value)
{
    Abdominal = value;
}

double Paniculos::getSuprailiaco() const
{
    return Suprailiaco;
}

void Paniculos::setSuprailiaco(double value)
{
    Suprailiaco = value;
}

double Paniculos::getMuslo() const
{
    return Muslo;
}

void Paniculos::setMuslo(double value)
{
    Muslo = value;
}

double Paniculos::getPantorrilla() const
{
    return Pantorrilla;
}

void Paniculos::setPantorrilla(double value)
{
    Pantorrilla = value;
}
