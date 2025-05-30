#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>
#include <stdbool.h> //esta para poder usar booleanos

int main(){

//crear objetos
cJSON *json =cJSON_CreateObject();
    cJSON_AddStringToObject(json, "nombre", "Aaron Muñoz");
    cJSON_AddStringToObject(json, "edad", "20");
    cJSON_AddStringToObject(json, "carnet", "C35472");
    cJSON_AddBoolToObject(json, "Estudiante activo", true);


//convertir el objeto a string
char *json_str=cJSON_Print(json);

 //escribit rl string en un archivo
 FILE *fp =fopen("archivo.json" , "w"); //primero abrimos el archivo
 if (fp == NULL){ //si no se pudo abrir el archivo, salta un error
    printf("Error: no se pudo abrir el archivo" );
    return 1;
 }

printf("%s\n", json_str); //imprime el string en la terminal
fputs(json_str, fp);//escribe el string en el archivo
fclose(fp);//cierra el archivo

//liberar los punteros
free(json_str);
cJSON_Delete(json);

return 0;
}