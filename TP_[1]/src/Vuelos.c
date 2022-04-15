#include <stdio.h>
#include "Vuelos.h"

float costoTarjetaDebitoAerolineas(float precioVueloAerolineas){
    float descuentoAerolineas;
    float costoFinalDebitoAerolineas;

    descuentoAerolineas = precioVueloAerolineas * 10 / 100;

    costoFinalDebitoAerolineas = precioVueloAerolineas - descuentoAerolineas;

    return costoFinalDebitoAerolineas;
}

float costoTarjetaDebitoLatam(float precioVueloLatam){
    float descuentoLatam;
    float costoFinalDebitoLatam;

    descuentoLatam = precioVueloLatam * 10 / 100;

    costoFinalDebitoLatam = precioVueloLatam - descuentoLatam;

    return costoFinalDebitoLatam;
}

float costoTarjetaCreditoAerolineas(float precioVueloAerolineas){
    float interesAerolineas;
    float costoFinalCreditoAerolineas;

    interesAerolineas = precioVueloAerolineas * 25 / 100;

    costoFinalCreditoAerolineas = precioVueloAerolineas + interesAerolineas;

    return costoFinalCreditoAerolineas;
}

float costoTarjetaCreditoLatam(float precioVueloLatam){
    float interesLatam;
    float costoFinalCreditoLatam;

    interesLatam = precioVueloLatam * 25 / 100;

    costoFinalCreditoLatam = precioVueloLatam + interesLatam;

    return costoFinalCreditoLatam;
}

float costoBitcoinAerolineas(float precioVueloAerolineas){
    float bitcoin = 4606954.55;
    float costoEnBitcoinAerolineas;

    costoEnBitcoinAerolineas = precioVueloAerolineas / bitcoin;

    return costoEnBitcoinAerolineas;
}

float costoBitcoinLatam(float precioVueloLatam){
    float bitcoin = 4606954.55;
    float costoEnBitcoinLatam;

    costoEnBitcoinLatam = precioVueloLatam / bitcoin;

    return costoEnBitcoinLatam;
}

float costoPrecioUnitarioAerolineas(float precioVueloAerolineas, float kilometros){
    float costoFinalPrecioUnitarioAerolineas;

    costoFinalPrecioUnitarioAerolineas = precioVueloAerolineas / kilometros;

    return costoFinalPrecioUnitarioAerolineas;
}

float costoPrecioUnitarioLatam(float precioVueloLatam, float kilometros){
    float costoFinalPrecioUnitarioLatam;

    costoFinalPrecioUnitarioLatam = precioVueloLatam / kilometros;

    return costoFinalPrecioUnitarioLatam;
}

float diferenciaPrecio(float precioVueloAerolineas, float precioVueloLatam){
    float diferenciaFinal;

    if(precioVueloAerolineas > precioVueloLatam){
        diferenciaFinal = precioVueloAerolineas - precioVueloLatam;
    }else{
        diferenciaFinal = precioVueloLatam - precioVueloAerolineas;
    }

    return diferenciaFinal;
}

void mostrarKilometros(float kilometros){
    printf("\nKMs Ingresados: %.2f\n", kilometros);
}

void mostrarPrecioVueloAerolineas(float precioVueloAerolineas){
    printf("\nPrecio Aerolineas: %.2f", precioVueloAerolineas);
}

void mostrarPrecioVueloLatam(float precioVueloLatam){
    printf("\nPrecio Latam: %.2f", precioVueloLatam);
}

void mostrarCostoDebitoAerolineas(float costoFinalDebitoAerolineas){
    printf("\na) Precio final con tarjeta de debito: $ %.2f", costoFinalDebitoAerolineas);
}

void mostrarCostoDebitoLatam(float costoFinalDebitoLatam){
    printf("\na) Precio final con tarjeta de debito: $ %.2f", costoFinalDebitoLatam);
}

void mostrarCostoCreditoAerolineas(float costoFinalCreditoAerolineas){
    printf("\nb) Precio final con tarjeta de credito: $ %.2f", costoFinalCreditoAerolineas);
}

void mostrarCostoCreditoLatam(float costoFinalCreditoLatam){
    printf("\nb) Precio final con tarjeta de credito: $ %.2f", costoFinalCreditoLatam);
}

void mostrarCostoBitcoinAerolineas(float costoEnBitcoinAerolineas){
    printf("\nc) Precio pagando con Bitcoin: %.2f BTC", costoEnBitcoinAerolineas);
}

void mostrarCostoBitcoinLatam(float costoEnBitcoinLatam){
    printf("\nc) Precio pagando con Bitcoin: %.2f BTC", costoEnBitcoinLatam);
}

void mostrarPrecioUnitarioAerolineas(float costoFinalPrecioUnitarioAerolineas){
    printf("\nd) Precio Unitario: $ %.2f\n", costoFinalPrecioUnitarioAerolineas);
}

void mostrarPrecioUnitarioLatam(float costoFinalPrecioUnitarioLatam){
    printf("\nd) Precio Unitario: $ %.2f", costoFinalPrecioUnitarioLatam);
}

void mostrarDiferenciaDePrecio(float diferenciaFinal){
    printf("\n\nLa diferencia de precio es: $ %.2f\n\n", diferenciaFinal);
}


