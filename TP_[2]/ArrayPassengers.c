#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassengers.h"

void optionMenu(){
    int option;
    int contAltas = 0;
    Passenger lista[TAM];
    int nextId = 10000;

    if(initPassengers(lista, TAM) == -1){
        printf("\n!!Hubo un error en la inicializacion!!\n");
    }else{
        initPassengers(lista, TAM);
    }

    do{
        printf("\n1.ALTAS\n");
        printf("2.MODIFICAR\n");
        printf("3.BAJA\n");
        printf("4.INFORMAR\n");
        printf("5.SALIDA\n");
        printf("\nElija una opcion: ");
        scanf("%d", &option);

        switch(option){
        case 1:
            system("cls");
            if(addPassengers(lista, TAM, &nextId) == 0){
                printf("\n!!ALTA EXITOSA!!\n");
                contAltas++;
            }else{
                printf("\n!!ERROR EN LA ALTA!!\n");
            }
            break;
        case 2:
            system("cls");
            if(contAltas > 0){
                if(modification(lista, TAM) == 0){
                    printf("\n!!BAJA EXISTOSA!!\n");
                }else{
                    printf("\n!ERROR EN LA BAJA!\n");
                }
            }else{
                printf("\n!!PRIMERO DEBE DAR DE ALTA!!\n");
            }
            break;
        case 3:
            system("cls");
            if(contAltas > 0){
                if(removePassenger(lista, TAM) == 0){
                    printf("\n!!MODIFICACION EXISTOSA!!\n");
                }else{
                    printf("\n!ERROR EN LA MODIFICACION!\n");
                }
            }else{
                printf("\n!!PRIMERO DEBE DAR DE ALTA!!\n");
            }
            break;
        case 4:
            system("cls");
            if(contAltas > 0){
                sortPassengers(lista, TAM, 1);
                printPassengers(lista, TAM);
            }else{
                printf("\n!!PRIMERO DEBE DAR DE ALTA!!\n");
            }
            break;
        }

    }while(option != 5);
}

int initPassengers(Passenger lista[], int len){
    if(lista != NULL && len > 0){
        for(int i=0; i<len; i++){
            lista[i].isEmpty = TRUE;
        }

        return 0;
    }

    return -1;
}

int addPassengers(Passenger lista[], int len, int* pId){
    int index = -1;
    Passenger auxList;

    if(lista != NULL && len > 0 && pId){
        for(int i=0; i<len; i++){
            if(lista[i].isEmpty == TRUE){
                index = i;
                break;
            }
        }

        if(index != -1){
            auxList.id = *pId;
            (*pId)++;

            printf("Ingrese el nombre: ");
            fflush(stdin);
            gets(auxList.name);

            printf("Ingrese el apellido: ");
            fflush(stdin);
            gets(auxList.lastName);

            printf("Ingrese el precio: ");
            scanf("%f", &auxList.price);

            printf("Ingrese el codigo de vuelo: ");
            fflush(stdin);
            gets(auxList.flyCode);

            printf("Ingrese el type Passenger: ");
            scanf("%d", &auxList.typePassenger);

            printf("Ingrese el estatus de vuelo: ");
            scanf("%d", &auxList.statusFlight);

            auxList.isEmpty = FALSE;
            lista[index] = auxList;
        }else{
            printf("\n!!!No hay espacio para cargar mas!!!\n");
        }

        return 0;
    }

    return -1;
}

int findPassengerById(Passenger lista[], int len){
    int idSearch;
    int index = -1;

    printf("\nIngrese el id: ");
	scanf("%d", &idSearch);

	for(int i=0; i<len; i++){
		if(idSearch == lista[i].id){
            index = i;
			break;
		}
	}

	return index;
}

int modification(Passenger lista[], int len){
    int index;

    if(lista != NULL && len > 0){
        index = findPassengerById(lista, len);

        if(index != -1){
            printf("Ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(lista[index].name);

            printf("Ingrese el nuevo apellido: ");
            fflush(stdin);
            gets(lista[index].lastName);

            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[index].price);

            printf("Ingrese el nuevo type passenger: ");
            scanf("%d", &lista[index].typePassenger);

            printf("Ingrese el nuevo estatus de vuelo: ");
            scanf("%d", &lista[index].statusFlight);
        }else{
            printf("\n!!No se encontro el ID!!\n");
        }

        return 0;
    }

    return -1;
}

int removePassenger(Passenger lista[], int len){
    int index;

    if(lista != NULL && len > 0){
        index = findPassengerById(lista, len);

        if(index != -1){
          lista[index].isEmpty = TRUE;
        }else{
            printf("\n!!No se encontro el ID!!\n");
        }

        return 0;
    }

    return -1;
}

int sortPassengers(Passenger lista[], int len, int order){
    Passenger auxListTwo;

    if(lista != NULL && len > 0 && order != NULL){
        for(int i=0; i<len-1; i++){
            for(int j=i+1; j<len; j++){
                if((order == 1 && (strcmp(lista[i].lastName, lista[j].lastName) > 0)) || (order == 0 && (strcmp(lista[i].lastName, lista[j].lastName) < 0))){
                    auxListTwo = lista[i];
                    lista[i] = lista[j];
                    lista[j] = auxListTwo;
                }
            }
        }

        return 0;
    }

    return -1;
}

void printPassenger(Passenger a){
    printf("%d\t %s\t %s\t %.2f\t %s\t %d\t %d\n", a.id, a.name, a.lastName, a.price, a.flyCode, a.typePassenger, a.statusFlight);
}

int printPassengers(Passenger lista[], int len){
    if(lista != NULL && len > 0){
       for(int i=0; i<len; i++){
            if(lista[i].isEmpty == FALSE){
                printPassenger(lista[i]);
            }
        }

       printf("\n");
       return 1;
    }

    return 0;
}
