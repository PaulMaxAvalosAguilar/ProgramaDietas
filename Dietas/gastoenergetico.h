#ifndef GASTOENERGETICO_H
#define GASTOENERGETICO_H


class GastoEnergetico
{
public:
    GastoEnergetico();

    enum class factorActividad
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
        MuyActivo1,
        MuyActivo2,
        /* Ejercicio intenso a diario y trabajo físico*/
        ExtremadamenteActivo1,
        ExtremadamenteActivo2
    };

private:
    double porcentajeGraso;

};

#endif // GASTOENERGETICO_H
