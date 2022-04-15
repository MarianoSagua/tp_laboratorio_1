#include <stdio.h>
#include <stdlib.h>

#ifndef VUELOS_H_
#define VUELOS_H_

/** \brief Calcula el costo final con un descuento del 10 porciento.
 *
 * \param float precioVueloAerolineas
 * \return float costoFinalDebitoAerolineas
 *
 */
float costoTarjetaDebitoAerolineas(float precioVueloAerolineas);

/** \brief Calcula el costo final con un descuento del 10 porciento.
 *
 * \param float precioVueloLatam
 * \return float costoFinalDebitoLatam
 *
 */
float costoTarjetaDebitoLatam(float precioVueloLatam);

/** \brief Calcula el costo final con un interes del 25 porciento.
 *
 * \param float precioVueloAerolineas
 * \return float costoFinalCreditoAerolineas
 *
 */
float costoTarjetaCreditoAerolineas(float precioVueloAerolineas);

/** \brief Calcula el costo final con un interes del 25 porciento.
 *
 * \param float precioVueloLatam
 * \return float costoFinalCreditoLatam
 *
 */
float costoTarjetaCreditoLatam(float precioVueloLatam);

/** \brief Divide el precio del vuelo por el precio del bitcoin.
 *
 * \param float precioVueloAerolineas
 * \return float costoEnBitcoinAerolineas
 *
 */
float costoBitcoinAerolineas(float precioVueloAerolineas);

/** \brief Divide el precio del vuelo por el precio del bitcoin.
 *
 * \param float precioVueloLatam
 * \return float costoEnBitcoinLatam
 *
 */
float costoBitcoinLatam(float precioVueloLatam);

/** \brief Divide el precio del vuelo por los kilometros ingresados.
 *
 * \param float precioVueloAerolineas
 * \param float kilometros
 * \return float costoFinalPrecioUnitarioAerolineas
 *
 */
float costoPrecioUnitarioAerolineas(float precioVueloAerolineas, float kilometros);

/** \brief Divide el precio del vuelo por los kilometros ingresados.
 *
 * \param float precioVueloLatam
 * \param float kilometros
 * \return float costoFinalPrecioUnitarioLatam
 *
 */
float costoPrecioUnitarioLatam(float precioVueloLatam, float kilometros);

/** \brief Calcula la diferencia de precio entre los dos precios.
 *
 * \param float precioVueloAerolineas
 * \param float precioVueloLatam
 * \return float diferenciaFinal
 *
 */
float diferenciaPrecio(float precioVueloAerolineas, float precioVueloLatam);

/** \brief Muestra los kilometros ingresados.
 *
 * \param float kilometros
 * \return float void
 *
 */
void mostrarKilometros(float kilometros);

/** \brief Muestra el precio del vuelo de aerolineas.
 *
 * \param float precioVueloAerolineas
 * \return float void
 *
 */
void mostrarPrecioVueloAerolineas(float precioVueloAerolineas);

/** \brief Muestra el precio del vuelo de latam.
 *
 * \param float precioVueloLatam
 * \return float void
 *
 */
void mostrarPrecioVueloLatam(float precioVueloLatam);

/** \brief Muestra el costo del vuelo pagando con debito.
 *
 * \param float costoFinalDebitoAerolineas
 * \return float void
 *
 */
void mostrarCostoDebitoAerolineas(float costoFinalDebitoAerolineas);

/** \brief Muestra el costo del vuelo pagando con debito.
 *
 * \param float costoFinalDebitoLatam
 * \return float void
 *
 */
void mostrarCostoDebitoLatam(float costoFinalDebitoLatam);

/** \brief Muestra el costo del vuelo pagando con credito.
 *
 * \param float costoFinalCreditoAerolineas
 * \return float void
 *
 */
void mostrarCostoCreditoAerolineas(float costoFinalCreditoAerolineas);

/** \brief Muestra el costo del vuelo pagando con credito.
 *
 * \param float costoFinalCreditoLatam
 * \return float void
 *
 */
void mostrarCostoCreditoLatam(float costoFinalCreditoLatam);

/** \brief Muestra el costo del vuelo pagando con bitcoin.
 *
 * \param float costoEnBitcoinAerolineas
 * \return float void
 *
 */
void mostrarCostoBitcoinAerolineas(float costoEnBitcoinAerolineas);

/** \brief Muestra el costo del vuelo pagando con bitcoin.
 *
 * \param float costoEnBitcoinLatam
 * \return float void
 *
 */
void mostrarCostoBitcoinLatam(float costoEnBitcoinLatam);

/** \brief Muestra el precio unitario.
 *
 * \param float costoFinalPrecioUnitarioAerolineas
 * \return float void
 *
 */
void mostrarPrecioUnitarioAerolineas(float costoFinalPrecioUnitarioAerolineas);

/** \brief Muestra el precio unitario.
 *
 * \param float costoFinalPrecioUnitarioLatam
 * \return float void
 *
 */
void mostrarPrecioUnitarioLatam(float costoFinalPrecioUnitarioLatam);

/** \brief Muestra la diferencia de precio entre los dos precios ingresados.
 *
 * \param float diferenciaFinal
 * \return float void
 *
 */
void mostrarDiferenciaDePrecio(float diferenciaFinal);

#endif /* VUELOS_H_ */
