#ifndef PANICULOS_H
#define PANICULOS_H


class Paniculos
{
public:
    Paniculos();
    double getTricipital() const;
    void setTricipital(double value);

    double getSubescapular() const;
    void setSubescapular(double value);

    double getAbdominal() const;
    void setAbdominal(double value);

    double getSuprailiaco() const;
    void setSuprailiaco(double value);

    double getMuslo() const;
    void setMuslo(double value);

    double getPantorrilla() const;
    void setPantorrilla(double value);

private:
    double Tricipital;
    double Subescapular;
    double Abdominal;
    double Suprailiaco;
    double Muslo;
    double Pantorrilla;
};

#endif // PANICULOS_H
