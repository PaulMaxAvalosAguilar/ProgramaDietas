#ifndef PERIMETROS_H
#define PERIMETROS_H


class Perimetros
{
public:
    Perimetros();
    double getBrazoRelajado() const;
    void setBrazoRelajado(double value);

    double getBrazoContraido() const;
    void setBrazoContraido(double value);

    double getAntebrazo() const;
    void setAntebrazo(double value);

    double getMuneca() const;
    void setMuneca(double value);

    double getTorax() const;
    void setTorax(double value);

    double getCintura() const;
    void setCintura(double value);

    double getCadera() const;
    void setCadera(double value);

    double getMuslo() const;
    void setMuslo(double value);

    double getPierna() const;
    void setPierna(double value);

    double getTobillo() const;
    void setTobillo(double value);

private:
    double brazoRelajado;
    double brazoContraido;
    double antebrazo;
    double muneca;
    double torax;
    double cintura;
    double cadera;
    double muslo;
    double pierna;
    double tobillo;
};

#endif // PERIMETROS_H
