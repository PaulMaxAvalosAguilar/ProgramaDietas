#ifndef DIAMETROS_H
#define DIAMETROS_H


class Diametros
{
public:
    Diametros();

    double getBiacromial() const;
    void setBiacromial(double value);

    double getBiepicondielianoHumero() const;
    void setBiepicondielianoHumero(double value);

    double getBiestiloideo() const;
    void setBiestiloideo(double value);

    double getTraversoTorax() const;
    void setTraversoTorax(double value);

    double getAntroposteriorTorax() const;
    void setAntroposteriorTorax(double value);

    double getBileocrestal() const;
    void setBileocrestal(double value);

    double getBiepicondileoFemur() const;
    void setBiepicondileoFemur(double value);

private:
    double biacromial;
    double biepicondielianoHumero;
    double biestiloideo;
    double traversoTorax;
    double antroposteriorTorax;
    double bileocrestal;
    double biepicondileoFemur;
};

#endif // DIAMETROS_H
