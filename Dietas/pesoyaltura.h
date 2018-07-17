#ifndef PESOYALTURA_H
#define PESOYALTURA_H


class PesoyAltura
{
public:
    PesoyAltura();
    double getPesoenKilos() const;
    void setPesoenKilos(double value);

    double getAlturaCentimetros() const;
    void setAlturaCentimetros(double value);

private:
    double PesoenKilos;
    double AlturaCentimetros;
};

#endif // PESOYALTURA_H
