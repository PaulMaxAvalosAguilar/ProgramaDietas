#include "composicioncorporal.h"
#include <cmath>

ComposicionCorporalPlicometro::ComposicionCorporalPlicometro(PesoyAltura &pyA, Perimetros &p, Diametros &d, Paniculos &pa)
{
    complexion = 0;
    IMC = 0;
    pesoMin = 0;
    pesoMax = 0;
    pesoIdeal = 0;
    ICinturaCadera = 0;
    ICinturaAltura = 0;
    porcentajeGraso = 0;
    pesoMagro = 0;
    pesoGraso = 0;
    pesoResidual = 0;
    pesoOseo = 0;
    pesoMuscular = 0;

    setPesoyAltura(pyA);
    setPerimetros(p);
    setDiametros(d);
    setPaniculos(pa);
}





double ComposicionCorporalPlicometro::getComplexion() const
{
    return complexion;
}

double ComposicionCorporalPlicometro::getIMC() const
{
    return IMC;
}

double ComposicionCorporalPlicometro::getPesoMin() const
{
    return pesoMin;
}

double ComposicionCorporalPlicometro::getPesoMax() const
{
    return pesoMax;
}

double ComposicionCorporalPlicometro::getPesoIdeal() const
{
    return pesoIdeal;
}

void ComposicionCorporalPlicometro::setPesoIdeal(double value)
{
    pesoIdeal = value;
}

double ComposicionCorporalPlicometro::getICinturaCadera() const
{
    return ICinturaCadera;
}

double ComposicionCorporalPlicometro::getICinturaAltura() const
{
    return ICinturaAltura;
}

double ComposicionCorporalPlicometro::getPorcentajeGraso() const
{
    return porcentajeGraso;
}

double ComposicionCorporalPlicometro::getPesoMagro() const
{
    return pesoMagro;
}

double ComposicionCorporalPlicometro::getPesoGraso() const
{
    return pesoGraso;
}

double ComposicionCorporalPlicometro::getPesoResidual() const
{
    return pesoResidual;
}

double ComposicionCorporalPlicometro::getPesoOseo() const
{
    return pesoOseo;
}

double ComposicionCorporalPlicometro::getPesoMuscular() const
{
    return pesoMuscular;
}

PesoyAltura ComposicionCorporalPlicometro::getPesoyAltura() const
{
    return pesoyAltura;
}

Perimetros ComposicionCorporalPlicometro::getPerimetros() const
{
    return perimetros;
}

Diametros ComposicionCorporalPlicometro::getDiametros() const
{
    return diametros;
}


Paniculos ComposicionCorporalPlicometro::getPaniculos() const
{
    return paniculos;
}

void ComposicionCorporalPlicometro::setPesoyAltura(const PesoyAltura &value)
{
    pesoyAltura = value;
}

void ComposicionCorporalPlicometro::setPerimetros(const Perimetros &value)
{
    perimetros = value;
}


void ComposicionCorporalPlicometro::setDiametros(const Diametros &value)
{
    diametros = value;
}

void ComposicionCorporalPlicometro::setPaniculos(const Paniculos &value)
{
    paniculos = value;
}

void ComposicionCorporalPlicometro::setComplexion(double value)
{
    complexion = value;
}

void ComposicionCorporalPlicometro::setIMC(double value)
{
    IMC = value;
}

void ComposicionCorporalPlicometro::setPesoMin(double value)
{
    pesoMin = value;
}

void ComposicionCorporalPlicometro::setPesoMax(double value)
{
    pesoMax = value;
}

void ComposicionCorporalPlicometro::setICinturaCadera(double value)
{
    ICinturaCadera = value;
}


void ComposicionCorporalPlicometro::setICinturaAltura(double value)
{
    ICinturaAltura = value;
}


void ComposicionCorporalPlicometro::setPorcentajeGraso(double value)
{
    porcentajeGraso = value;
}

void ComposicionCorporalPlicometro::setPesoMagro(double value)
{
    pesoMagro = value;
}

void ComposicionCorporalPlicometro::setPesoGraso(double value)
{
    pesoGraso = value;
}

void ComposicionCorporalPlicometro::setPesoResidual(double value)
{
    pesoResidual = value;
}

void ComposicionCorporalPlicometro::setPesoOseo(double value)
{
    pesoOseo = value;
}


void ComposicionCorporalPlicometro::setPesoMuscular(double value)
{
    pesoMuscular = value;
}




//LOGICA DE CALCULOS
double ComposicionCorporalPlicometro::calculaComplexion(double alturaenCm, double muneca)
{
    return alturaenCm/muneca;
}

double ComposicionCorporalPlicometro::calculaIMC(double pesoenKilos, double alturaenCm)
{
    return pesoenKilos/(pow((alturaenCm/100),2));
}

double ComposicionCorporalPlicometro::calculapesoMinimo(double alturaenCm)
{
    return ((alturaenCm/100)*(alturaenCm/100))*20;
}

double ComposicionCorporalPlicometro::calculapesoMaximo(double alturaenCm)
{
    return ((alturaenCm/100)*(alturaenCm/100))*25;
}

double ComposicionCorporalPlicometro::calculapesoIdeal(double alturaenCm, double complexion)
{
    if(complexion >10.4){//Complexión pequeña

        return (  (pow((alturaenCm/100),2)) * 22)- 2;

    }else if(complexion >9.5){//Complexión media

        return (pow((alturaenCm/100),2))*22;

    }else{//complexión grande

        return (  (pow((alturaenCm/100),2)) * 22) + 2;

    }
}

double ComposicionCorporalPlicometro::calculaIndiceCinturaCadera(double perimetroCintura, double perimetroCadera)
{
    return perimetroCintura/perimetroCadera;
}

double ComposicionCorporalPlicometro::calculaIndiceCinturaAltura(double alturaenCm, double cintura)
{
    return cintura/alturaenCm;
}

double ComposicionCorporalPlicometro::calculaPorcentajeGraso(double tricipital, double subescapular,
                                                    double abdominal, double suprailiaco,
                                                    double muslo, double pantorrilla)
{
    double sumaPliegues;
    sumaPliegues = tricipital +subescapular +abdominal +suprailiaco +muslo +pantorrilla;
    return (3.64 + (sumaPliegues * 0.097));

}

double ComposicionCorporalPlicometro::calculaPesoGraso(double pesoenKilos, double porcentajeGraso)
{
    return (porcentajeGraso/100)*pesoenKilos;

}

double ComposicionCorporalPlicometro::calculaPesoMagro(double pesoenKilos,double pesoGraso)
{
    return (pesoenKilos -pesoGraso);
}

double ComposicionCorporalPlicometro::calculaPesoResidual(double pesoenKilos)
{
    return (pesoenKilos * 24.1)/100;
}

double ComposicionCorporalPlicometro::calculaPesoOseo(double alturaenCm, double biestiloideo, double biepicondileoFemur)
{
    return 3.02 * pow(( (pow((alturaenCm/100),2)) * (biestiloideo/100) * (biepicondileoFemur/100) *400 ), 0.712);
}

double ComposicionCorporalPlicometro::calculaPesoMuscular( double pesoenKilos,

                                                 double pesoGraso,
                                                 double pesoResidual,
                                                 double pesoOseo)
{
    return pesoenKilos -pesoGraso -pesoResidual -pesoOseo;
}

void ComposicionCorporalPlicometro::hacerCalculos()
{
    double alturaenCm = getPesoyAltura().getAlturaCentimetros();
    double peso = getPesoyAltura().getPesoenKilos();
    double pmuneca = getPerimetros().getMuneca();
    double pcintura = getPerimetros().getCintura();
    double pcadera = getPerimetros().getCadera();

    double pliTriceps = getPaniculos().getTricipital();
    double pliSupaIli = getPaniculos().getSuprailiaco();
    double plisubEsc = getPaniculos().getSubescapular();
    double pliPanto = getPaniculos().getPantorrilla();
    double pliMuslo = getPaniculos().getMuslo();
    double pliAbdominal = getPaniculos().getAbdominal();

    double biestiloideo = getDiametros().getBiestiloideo();
    double biepicondileoFemur = getDiametros().getBiepicondileoFemur();

    setComplexion(calculaComplexion(alturaenCm, pmuneca));
    setIMC(calculaIMC(peso,alturaenCm));
    setPesoMin(calculapesoMinimo(alturaenCm));
    setPesoMax(calculapesoMaximo(alturaenCm));
    setPesoIdeal(calculapesoIdeal(alturaenCm, getComplexion()));
    setICinturaCadera(calculaIndiceCinturaCadera(pcintura,pcadera));
    setICinturaAltura(calculaIndiceCinturaAltura(alturaenCm,pcintura));
    setPorcentajeGraso(calculaPorcentajeGraso(pliTriceps, plisubEsc,
                                              pliAbdominal, pliSupaIli,
                                              pliMuslo, pliPanto));
    setPesoGraso(calculaPesoGraso(peso, getPorcentajeGraso()));
    setPesoMagro(calculaPesoMagro(peso, getPesoGraso()));
    setPesoResidual(calculaPesoResidual(peso));
    setPesoOseo(calculaPesoOseo(alturaenCm, biestiloideo, biepicondileoFemur));
    setPesoMuscular(calculaPesoMuscular(peso,getPesoGraso(),
                                        getPesoResidual(), getPesoOseo()));

}
