#ifndef ARRAYPASSENGERS_H_INCLUDED
#define ARRAYPASSENGERS_H_INCLUDED
#define TAM 1000
#define TRUE 0
#define FALSE 1

typedef struct{
    int id;
    char name[51];
    char lastName[51];
    float price;
    char flyCode[10];
    int typePassenger;
    int statusFlight;
    int isEmpty;
}Passenger;

#endif // ARRAYPASSENGERS_H_INCLUDED

void optionMenu();
int initPassengers(Passenger lista[], int len);
int addPassengers(Passenger lista[], int len, int* pId);
int findPassengerById(Passenger lista[], int len);
int modification(Passenger lista[], int len);
int removePassenger(Passenger lista[], int len);
int sortPassengers(Passenger lista[], int len, int order);
void printPassenger(Passenger a);
int printPassengers(Passenger lista[], int len);
