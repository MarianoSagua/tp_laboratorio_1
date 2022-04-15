/*Mariano Sagua, 1A TP-1*/
#include <stdio.h>
#include <stdlib.h>
#include "Vuelos.h"


int main(void) {
   setbuf(stdout, NULL);
   int opcion;
   int opcionVuelos;
   float kilometros;
   float precioVueloAerolineas;
   float precioVueloLatam;
   int flagKilometros = 0;
   int flagVuelos = 0;
   int flagVueloAerolineas = 0;
   int flagVueloLatam = 0;
   float resultadoTarjetaDebitoAerolineas;
   float resultadoTarjetaDebitoLatam;
   float resultadoTarjetaCreditoAerolineas;
   float resultadoTarjetaCreditoLatam;
   int flagCalculoCostos = 0;
   float resultadoBitcoinAerolineas;
   float resultadoBitcoinLatam;
   float resultadoPrecioUnitarioAerolineas;
   float resultadoPrecioUnitarioLatam;
   float resultadoDiferenciaPrecio;

   do{
	if(flagKilometros == 0){
		printf("\n1. Ingresar los kilometros\n");
		flagKilometros = 1;
	}else{
		printf("\n1. Ingresar los kilometros (Km = %.2f)\n", kilometros);
	}

	if(flagVuelos == 0){
		printf("\n2. Ingresar el precio de vuelos (Aerolineas/Latam)\n");
		flagVuelos = 1;
	}else{
		printf("\n2. Ingresar el precio de vuelos (Aerolineas = %.2f / Latam = %.2f)\n", precioVueloAerolineas, precioVueloLatam);
	}

	printf("\n3. Calcular todos los costos\n");
	printf("a) Tarjeta de Debito (Descuento del 10%)\n");
	printf("b) Tarjeta de Credito (Interes del 25%)\n");
	printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("d) Mostrar precio por km (Precio Unitario)\n");
	printf("e) Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n");

	printf("\n4. Informar resultados\n");
	printf("\n5. Carga forzada de datos\n");
	printf("\n6. Salir\n");
	printf("\nElija una opcion: ");
	scanf("%d", &opcion);

	switch(opcion){
	case 1:
		printf("\nIngrese los kilometros:");
		scanf("%f", &kilometros);
		int flagKilometros = 1;
		break;

	case 2:
		do{
			printf("\n1. Ingresar precio de vuelo de Aerolineas\n");
			printf("2. Ingresar precio de vuelo de Latam\n");
			printf("3. Salir\n");
			printf("Elije una opcion: \n");
			scanf("%d", &opcionVuelos);

			switch(opcionVuelos){
			case 1:
				printf("\nIngrese el precio de vuelo de Aerolineas:");
				scanf("%f", &precioVueloAerolineas);
				int flagVueloAerolineas = 1;
				break;
			case 2:
				printf("\nIngrese el precio de vuelo de Latam:");
				scanf("%f", &precioVueloLatam);
				int flagVueloLatam = 1;
				break;
			}

			system("pause");

		}while(opcionVuelos != 3);
		break;
	case 3:
		if(flagVuelos != 1){
		   printf("\n\n !!! HAY QUE INGRESAR EL PRECIO DE LOS VUELOS PRIMERO !!! \n\n");
		}else{
			resultadoTarjetaDebitoAerolineas = costoTarjetaDebitoAerolineas(precioVueloAerolineas);
			resultadoTarjetaDebitoLatam = costoTarjetaDebitoLatam(precioVueloLatam);
			resultadoTarjetaCreditoAerolineas = costoTarjetaCreditoAerolineas(precioVueloAerolineas);
			resultadoTarjetaCreditoLatam = costoTarjetaCreditoLatam(precioVueloAerolineas);
			resultadoBitcoinAerolineas = costoBitcoinAerolineas(precioVueloAerolineas);
			resultadoBitcoinLatam = costoBitcoinLatam(precioVueloLatam);
			resultadoPrecioUnitarioAerolineas = costoPrecioUnitarioAerolineas(precioVueloAerolineas, kilometros);
			resultadoPrecioUnitarioLatam = costoPrecioUnitarioLatam(precioVueloLatam, kilometros);
			resultadoDiferenciaPrecio = diferenciaPrecio(precioVueloAerolineas, precioVueloLatam);
			printf("\n!!! CALCULADO !!!\n");
		}
		flagCalculoCostos = 1;
		break;
	case 4:
		if(flagCalculoCostos != 1){
			printf("\n\n!!! HAY QUE CALCULAR LOS COSTOS PRIMERO !!!\n\n");
		}else{
			mostrarKilometros(kilometros);
			mostrarPrecioVueloAerolineas(precioVueloAerolineas);
			mostrarCostoDebitoAerolineas(resultadoTarjetaDebitoAerolineas);
			mostrarCostoCreditoAerolineas(resultadoTarjetaCreditoAerolineas);
			mostrarCostoBitcoinAerolineas(resultadoBitcoinAerolineas);
			mostrarPrecioUnitarioAerolineas(resultadoPrecioUnitarioAerolineas);

			mostrarPrecioVueloLatam(precioVueloLatam);
			mostrarCostoDebitoLatam(resultadoTarjetaDebitoLatam);
			mostrarCostoCreditoLatam(resultadoTarjetaCreditoLatam);
			mostrarCostoBitcoinLatam(resultadoBitcoinLatam);
			mostrarPrecioUnitarioLatam(resultadoPrecioUnitarioLatam);

			mostrarDiferenciaDePrecio(resultadoDiferenciaPrecio);
		}
		break;
	case 5:
		flagKilometros = 0;
		flagVuelos = 0;
		kilometros = 7090;
		precioVueloAerolineas = 162965;
		precioVueloLatam = 159339;

		resultadoTarjetaDebitoAerolineas = costoTarjetaDebitoAerolineas(precioVueloAerolineas);
		resultadoTarjetaDebitoLatam = costoTarjetaDebitoLatam(precioVueloLatam);
		resultadoTarjetaCreditoAerolineas = costoTarjetaCreditoAerolineas(precioVueloAerolineas);
		resultadoTarjetaCreditoLatam = costoTarjetaCreditoLatam(precioVueloAerolineas);
		resultadoBitcoinAerolineas = costoBitcoinAerolineas(precioVueloAerolineas);
		resultadoBitcoinLatam = costoBitcoinLatam(precioVueloLatam);
		resultadoPrecioUnitarioAerolineas = costoPrecioUnitarioAerolineas(precioVueloAerolineas, kilometros);
		resultadoPrecioUnitarioLatam = costoPrecioUnitarioLatam(precioVueloLatam, kilometros);
		resultadoDiferenciaPrecio = diferenciaPrecio(precioVueloAerolineas, precioVueloLatam);

		mostrarKilometros(kilometros);

		mostrarPrecioVueloAerolineas(precioVueloAerolineas);
		mostrarCostoDebitoAerolineas(resultadoTarjetaDebitoAerolineas);
		mostrarCostoCreditoAerolineas(resultadoTarjetaCreditoAerolineas);
		mostrarCostoBitcoinAerolineas(resultadoBitcoinAerolineas);
		mostrarPrecioUnitarioAerolineas(resultadoPrecioUnitarioAerolineas);

		mostrarPrecioVueloLatam(precioVueloLatam);
		mostrarCostoDebitoLatam(resultadoTarjetaDebitoLatam);
		mostrarCostoCreditoLatam(resultadoTarjetaCreditoLatam);
		mostrarCostoBitcoinLatam(resultadoBitcoinLatam);
		mostrarPrecioUnitarioLatam(resultadoPrecioUnitarioLatam);

		mostrarDiferenciaDePrecio(resultadoDiferenciaPrecio);

		break;
	}

   }while(opcion != 6);

   return EXIT_SUCCESS;
}
