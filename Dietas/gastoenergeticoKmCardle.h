#ifndef GASTOENERGETICO_H
#define GASTOENERGETICO_H

#include "factoractividad.h"
#include "superativdeficit.h"

class GastoEnergeticoKmCardle
{
public:
    friend class Persona;

    GastoEnergeticoKmCardle(double porcentajeGraso,
                            double pesoenKilogramos,
                            FactorActividad factoractividad,
                            SuperativDeficit valorSuperOdeficit);



    double getTasaMetabolicaBasal() const;
    double getGastoEnergeticoTotal() const;



private:
    void calculaTasaMetabolicaBasal(double porcentajeGraso, double pesoenKilogramos);
    double calculaGastoEenergeticoTotal(double superavitodeficit,
                                        double factorAct);
    void setGastoEnergeticoTotal(double value);
    void setTasaMetabolicaBasal(double value);

    double getPorcentajeGraso() const;
    void setPorcentajeGraso(double value);

    void setSupDef(const SuperativDeficit &value);
    void setFactorAct(const FactorActividad &value);

    double getPeso() const;
    void setPeso(double value);

    FactorActividad getFactorAct() const;
    SuperativDeficit getSupDef() const;

    FactorActividad factorAct;
    SuperativDeficit supDef;
    double peso;
    double porcentajeGraso;
    double tasaMetabolicaBasal;
    double gastoEnergeticoTotal;


};

#endif // GASTOENERGETICO_H
