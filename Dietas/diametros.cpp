#include "diametros.h"

Diametros::Diametros()
{
    biacromial = 0;
    biepicondielianoHumero = 0;
    biestiloideo = 0;
    traversoTorax = 0 ;
    antroposteriorTorax = 0;
    bileocrestal = 0;
    biepicondileoFemur = 0;
}


double Diametros::getBiacromial() const
{
    return biacromial;
}

void Diametros::setBiacromial(double value)
{
    biacromial = value;
}

double Diametros::getBiepicondielianoHumero() const
{
    return biepicondielianoHumero;
}

void Diametros::setBiepicondielianoHumero(double value)
{
    biepicondielianoHumero = value;
}

double Diametros::getBiestiloideo() const
{
    return biestiloideo;
}

void Diametros::setBiestiloideo(double value)
{
    biestiloideo = value;
}

double Diametros::getTraversoTorax() const
{
    return traversoTorax;
}

void Diametros::setTraversoTorax(double value)
{
    traversoTorax = value;
}

double Diametros::getAntroposteriorTorax() const
{
    return antroposteriorTorax;
}

void Diametros::setAntroposteriorTorax(double value)
{
    antroposteriorTorax = value;
}

double Diametros::getBileocrestal() const
{
    return bileocrestal;
}

void Diametros::setBileocrestal(double value)
{
    bileocrestal = value;
}

double Diametros::getBiepicondileoFemur() const
{
    return biepicondileoFemur;
}

void Diametros::setBiepicondileoFemur(double value)
{
    biepicondileoFemur = value;
}
