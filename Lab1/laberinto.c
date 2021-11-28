#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int crearFrases(char* frase, int* lista){

    char* frase1 = frase;
    FILE* fp;
    int random = rand() % 26 + 1;
    int count = 0;

    while (count != 3)
    {
        if (random != lista[count])
        {
            count++;
        }
        else
        {
            /* printf("%d ya esta en la lista, prueba con otro\n", random); */
            random = rand() % 26 + 1;
        }
    }
    
    switch (random)
    {
        case 0:

            fp = fopen("Laberinto/1/1/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 1:
            fp = fopen("Laberinto/1/1/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 2:
            fp = fopen("Laberinto/1/1/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;
    
        case 3:
            fp = fopen("Laberinto/1/2/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;
    
        case 4:
            fp = fopen("Laberinto/1/2/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;
        
        case 5:
            fp = fopen("Laberinto/1/2/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 6:
            fp = fopen("Laberinto/1/3/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 7:
            fp = fopen("Laberinto/1/3/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 8:
            fp = fopen("Laberinto/1/3/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 9:
            fp = fopen("Laberinto/2/1/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 10:
            fp = fopen("Laberinto/2/1/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 11:
            fp = fopen("Laberinto/2/1/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 12:
            fp = fopen("Laberinto/2/2/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 13:
            fp = fopen("Laberinto/2/2/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 14:
            fp = fopen("Laberinto/2/2/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 15:
            fp = fopen("Laberinto/2/3/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 16:
            fp = fopen("Laberinto/2/3/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 17:
            fp = fopen("Laberinto/2/3/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 18:
            fp = fopen("Laberinto/3/1/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 19:
            fp = fopen("Laberinto/3/1/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 20:
            fp = fopen("Laberinto/3/1/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 21:
            fp = fopen("Laberinto/3/2/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 22:
            fp = fopen("Laberinto/3/2/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 23:
            fp = fopen("Laberinto/3/2/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 24:
            fp = fopen("Laberinto/3/3/1/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 25:
            fp = fopen("Laberinto/3/3/2/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;

        case 26:
            fp = fopen("Laberinto/3/3/3/frase.txt", "w");
            fprintf(fp, "%s", frase1);
            fclose(fp);
            break;
    
        default:
            break;
    }

    return random;
}

int main(){

    srand(time(NULL));
    int checker;
    char texto[5];
    char raiz[] = "Laberinto";

    checker = mkdir(raiz, 0700);
    for (int i = 1; i <= 3; i++)
    {
        char carpeta[50];
        if (!checker)
        {
            sprintf(texto, "%d", i);
            strcat(strcpy(carpeta, raiz), "/");
            strcat(carpeta, texto);
            checker = mkdir(carpeta, 0700);
        }
        
        for (int j = 1; j <= 3; j++)
        {
            char subcarpeta[50];
            if (!checker)
            {
                sprintf(texto, "%d", j);
                strcat(strcpy(subcarpeta, carpeta), "/");
                strcat(subcarpeta, texto);
                checker = mkdir(subcarpeta, 0700);
            }

            for (int k = 1; k <= 3; k++)
            {
                char subsubcarpeta[50];
                if (!checker)
                {
                    sprintf(texto, "%d", k);
                    strcat(strcpy(subsubcarpeta, subcarpeta), "/");
                    strcat(subsubcarpeta, texto);
                    checker = mkdir(subsubcarpeta, 0700);
                }
            }
            
        }
        
    }
    
    int lista[3];
    int primero = crearFrases("1, Los hurones del ", lista);
    lista[0] = primero;
    int segundo = crearFrases("2, profesor de sistemas operativos son ", lista);
    lista[1] = segundo;
    int tercero = crearFrases("3, la razon por la que asisto a clases.", lista);
    lista[2] = tercero;
    
    /* printf("%d %d %d \n", primero, segundo, tercero); */

    /* if (checker == 0)
    {
        printf("Se crea la carpeta con exito.\n");
    }
    else
    {
        printf("Error al crear carpetas.\n");
    } */
    
    return 0;
}

