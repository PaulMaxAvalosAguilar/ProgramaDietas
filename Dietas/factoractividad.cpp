#include "factoractividad.h"

FactorActividad::FactorActividad()
{
    factorActividad = 0;
}

double FactorActividad::getFactorActividad() const
{
    return factorActividad;
}

void FactorActividad::setFactorActividad(FactoresActividad act)
{
    if(act == 0){
        factorActividad = 1;
    }else if(act == 1){
        factorActividad = 1.2;
    }else if(act == 2){
        factorActividad = 1.3;
    }else if(act == 3){
        factorActividad = 1.4;
    }else if(act == 4){
        factorActividad = 1.5;
    }else if(act == 5){
        factorActividad = 1.6;
    }else if(act == 6){
        factorActividad = 1.7;
    }else if(act == 7){
        factorActividad = 1.8;
    }else if(act == 8){
        factorActividad = 1.9;
    }else if(act == 9){
        factorActividad = 2;
    }
}
