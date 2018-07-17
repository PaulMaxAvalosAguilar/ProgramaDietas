#ifndef GASTOENERGETICO_H
#define GASTOENERGETICO_H

#include "factoractividad.h"
#include "superativdeficit.h"

class GastoEnergeticoKmCardle
{
public:
    GastoEnergeticoKmCardle(double porcentajeGraso,
                            FactorActividad factoractividad,
                            SuperativDeficit valorSuperOdeficit);

    FactorActividad getFactorAct() const;
    SuperativDeficit getSupDef() const;
    double getPorcentajeGraso() const;
    double getTasaMetabolicaBasal() const;
    double getGastoEnergeticoTotal() const;

private:
    double calculaTasaMetabolicaBasal(double porcentajeGraso, double peso);
    double calculaGastoEenergeticoTotal(double superavitodeficit,
                                        double factorAct);
    void setGastoEnergeticoTotal(double value);
    void setTasaMetabolicaBasal(double value);
    void setPorcentajeGraso(double value);
    void setSupDef(const SuperativDeficit &value);
    void setFactorAct(const FactorActividad &value);

    FactorActividad factorAct;
    SuperativDeficit supDef;
    double peso;
    double porcentajeGraso;
    double tasaMetabolicaBasal;
    double gastoEnergeticoTotal;


};

#endif // GASTOENERGETICO_H
