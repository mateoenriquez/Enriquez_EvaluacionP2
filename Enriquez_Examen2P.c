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

#define MAX_MESES 12
#define MAX_IUNSUMOS 30

int 
int main(){

    int insumo, cantidad, mes, opcion;

    
    do
    {
        printf("1. Ingresos y egresos de cada mes por cada insumo\n");
        printf("2. Total de ingresos y egresos de todo el año por cada insumo\n"),
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
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