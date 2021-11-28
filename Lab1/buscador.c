#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main(){
    
	struct dirent *de;
    char texto[5];
    char raiz[] = "Laberinto";
    char resultado[3][100];

    for (int i = 1; i <= 3; i++)
    {
        char carpeta[50];
        sprintf(texto, "%d", i);
        strcat(strcpy(carpeta, raiz), "/");
        strcat(carpeta, texto);

        for (int j = 1; j <= 3; j++)
        {
            char subcarpeta[50];
            sprintf(texto, "%d", j);
            strcat(strcpy(subcarpeta, carpeta), "/");
            strcat(subcarpeta, texto);

            for (int k = 1; k <= 3; k++)
            {
                char subsubcarpeta[50];
                sprintf(texto, "%d", k);
                strcat(strcpy(subsubcarpeta, subcarpeta), "/");
                strcat(subsubcarpeta, texto);
                DIR *dr = opendir(subsubcarpeta);
                while ((de = readdir(dr)) != NULL)
                {
                    if (strcmp(de->d_name, "frase.txt") == 0)
                    {
                        // el print de abajo muestra la ubicacion de los 3 archivos frase.txt

                        printf("El archivo frase.txt se encuentra en la carpeta %s\n", subsubcarpeta);
                        char* path = strcat(subsubcarpeta, "/frase.txt");
                        int numero = 0;
                        char frase[100];
                        FILE* fp = fopen(path, "r");
                        while (fscanf(fp, "%d, %[^\n]", &numero, frase) != EOF)
                        {
                            if (numero == 1)
                            {
                                strcpy(resultado[0], frase);
                                break; 
                            }
                            else if (numero == 2)
                            {
                                strcpy(resultado[1], frase);
                                break;
                            }
                            else
                            {
                                strcpy(resultado[2], frase);
                                break;
                            }
                        }   
                    }
                    
                }
                closedir(dr);
            }
            
        }
        
    }

    printf("La frase secreta es: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%s", resultado[i]);
    }

    printf("\n");
    
	return 0;
}
