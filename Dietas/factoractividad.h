#ifndef FACTORACTIVIDAD_H
#define FACTORACTIVIDAD_H


class FactorActividad
{
public:
    FactorActividad();

    enum FactoresActividad
        {
            //Calculo energético de actividad diaria manual
            Manual,// = 1;
            //escaso o nulo ejercicio y trabajo de oficina
            Sedentario, // = 1.2
            /*Poca actividad diaria y ejercicio
              ligero 1-3 veces por semana*/
            LigeramenteActivo1, // = 1.3
            LigeramenteActivo2, // = 1.4
            /* Vida diaria moderadamente activa y
             ejercicio moderado 3-5 veces por semana*/
            ModeradamenteActivo1, // = 1.5
            ModeradamenteActivo2, // = 1.6
            /* Estilo de vida físicamente exigente y
             ejercicio o deportes intensos 6-7 veces por semana*/
            MuyActivo1, // = 1.7
            MuyActivo2, // = 1.8
            /* Ejercicio intenso a diario y trabajo físico*/
            ExtremadamenteActivo1, // = 1.9
            ExtremadamenteActivo2 // = 2
        };

    double getFactorActividad() const;
    void setFactorActividad(enum FactoresActividad act);

private:
    double factorActividad;
};

#endif // FACTORACTIVIDAD_H
