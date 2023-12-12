//--- PLANTEAMIENTO DE PROBLEMA ---
// La Fundación Salud Ecuador, es una organización no gubernamental sin fines de lucro, la cual, a través 
// de donaciones de empresas privadas y población civil, financia hasta un 90% de los tratamientos de pacientes 
// con enfermedades raras en el Ecuador. La fundación desea optimizar sus recursos y una de sus necesidades 
// prioritarias es contar con un registro sistematizado de los principales insumos médicos con los que cuenta.
// Para resolver esto, suponga que inicialmente se desea manejar solo 30 insumos médicos, por medio de un programa 
// que maneje los datos de ingresos y egresos (unidades) para cada insumo, y para cada uno de los meses del año. 
// El programa debe permitir interactuar con el usuario con estas 2 opciones:
// 1) Imprimir en pantalla todo el detalle de ingresos y egresos de cada mes y por cada insumo.
// 2) Obtener el total de ingresos y egresos en todo el año por cada insumo e imprimirlo en pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_MESES 12
#define MAX_INSUMOS 30
 
int Num_Aleatorio(){
    return rand()%100+1;
}

void Ingresos_Egresos_con_Rand(int ingresos[MAX_MESES], int egresos[MAX_MESES]){
    for (int i = 0; i < MAX_MESES; i++)
    {
        ingresos[i]=Num_Aleatorio();
        egresos[i]=Num_Aleatorio();
    }
    
}

void Imprimir_Ingresos_Egresos(int ingresos[MAX_MESES], int egresos[MAX_MESES]){
     
    printf("\nDetalle de ingresos y egresos del insumo\n");
    for (int i = 0; i < MAX_MESES; i++)
    {
        printf("Mes %d: Ingresos: %d, Egresos %d\n",i+1, ingresos[i], egresos[i]);
    }

}

void Totales(int ingresos[MAX_MESES], int egresos[MAX_MESES]){
    int totalIngresos=0;
    int totalEgresos=0;

    for (int i = 0; i < MAX_MESES; i++)
    {
        totalIngresos+=ingresos[i];
        totalEgresos+=egresos[i];
    }

    printf("\nTotal de ingresos y egresos al ano\n");
    printf("Ingresos: %d  Egresos: %d\n", totalIngresos, totalEgresos);
    
}

int main(){

    srand(time(NULL));
    int opcion;
    int insumos[MAX_INSUMOS][MAX_MESES];

    for (int i = 0; i < MAX_INSUMOS ; i++)
    {
        Ingresos_Egresos_con_Rand(insumos[i], insumos[i]+MAX_MESES/2);
    }
    
    do
    {
        printf("\n1. Ingresos y egresos de cada mes por cada insumo\n");
        printf("2. Total de ingresos y egresos de todo el ano por cada insumo\n"),
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < MAX_INSUMOS; i++)
            {
                Imprimir_Ingresos_Egresos(insumos[i], insumos[i]+MAX_MESES/2);
            }
            break;
        case 2:
            for (int i = 0; i < MAX_INSUMOS; ++i) {
                Totales(insumos[i], insumos[i] + MAX_MESES / 2);
            }
            break;
        case 3:
        printf("Saliendo...\n");
            break;
        
        default:
        printf("Opcion invalida, intenar nuevamente\n");
            break;
        }
    } while (opcion!=3);
    
    return 0;
}