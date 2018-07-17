#ifndef COMPOSICIONCORPORAL_H
#define COMPOSICIONCORPORAL_H


#include "pesoyaltura.h"
#include "perimetros.h"
#include "diametros.h"
#include "paniculos.h"

class ComposicionCorporalPlicometro
{
    friend class Persona;

public:
    ComposicionCorporalPlicometro(PesoyAltura &pyA, Perimetros &p, Diametros &d, Paniculos &pa);

    double getComplexion() const;
    double getIMC() const;
    double getPesoMin() const;
    double getPesoMax() const;
    double getPesoIdeal() const;
    double getICinturaCadera() const;
    double getICinturaAltura() const;
    double getPorcentajeGraso() const;
    double getPesoMagro() const;
    double getPesoGraso() const;
    double getPesoResidual() const;
    double getPesoOseo() const;
    double getPesoMuscular() const;

private:
    PesoyAltura getPesoyAltura() const;
    void setPesoyAltura(const PesoyAltura &value);

    Perimetros getPerimetros() const;
    void setPerimetros(const Perimetros &value);

    Diametros getDiametros() const;
    void setDiametros(const Diametros &value);

    Paniculos getPaniculos() const;
    void setPaniculos(const Paniculos &value);

    void setComplexion(double value);
    void setIMC(double value);
    void setPesoMin(double value);
    void setPesoMax(double value);
    void setPesoIdeal(double value);
    void setICinturaCadera(double value);
    void setICinturaAltura(double value);
    void setPorcentajeGraso(double value);
    void setPesoMagro(double value);
    void setPesoGraso(double value);
    void setPesoResidual(double value);
    void setPesoOseo(double value);
    void setPesoMuscular(double value);

    double calculaComplexion(double alturaenCm, double muneca);
    double calculaIMC(double pesoenKilos, double alturaenCm);
    double calculapesoMinimo(double alturaenCm);
    double calculapesoMaximo(double alturaenCm);
    double calculapesoIdeal(double alturaenCm, double complexion);
    double calculaIndiceCinturaCadera(double perimetroCintura,
                                      double perimetroCadera);
    double calculaIndiceCinturaAltura(double alturaenCm,
                                      double cintura);
    double calculaPorcentajeGraso(double tricipital,
                                  double subescapular,
                                  double abdominal,
                                  double suprailiaco,
                                  double muslo,
                                  double pantorrilla);
    double calculaPesoGraso(double pesoenKilos, double porcentajeGraso);
    double calculaPesoMagro(double pesoenKilos, double pesoGraso);
    double calculaPesoResidual(double pesoenKilos);
    double calculaPesoOseo(double alturaenCm, double biestiloideo,
                           double biepicondileoFemur);
    double calculaPesoMuscular(double pesoenKilos,
                               double pesoGraso,
                               double pesoResidual,
                               double pesoOseo);
    void hacerCalculos();

    PesoyAltura pesoyAltura;
    Perimetros perimetros;
    Diametros diametros;
    Paniculos paniculos;
    double complexion;
    double IMC;
    double pesoMin;
    double pesoMax;
    double pesoIdeal;
    double ICinturaCadera;
    double ICinturaAltura;
    double porcentajeGraso;
    double pesoMagro;
    double pesoGraso;
    double pesoResidual;
    double pesoOseo;
    double pesoMuscular;


};

#endif // COMPOSICIONCORPORAL_H
