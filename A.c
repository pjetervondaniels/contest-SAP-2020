#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeroUniversidades, i, candidatosUniversidade, possiveisCandidatos = 0;
    scanf("%d", &numeroUniversidades);
    i = 0;
    while (i < numeroUniversidades){
        scanf("%d",&candidatosUniversidade);
        if(candidatosUniversidade % 3 != 0){
            while (candidatosUniversidade % 3 != 0){
                candidatosUniversidade -= 1;
            }
        }
        if(candidatosUniversidade % 3 == 0){
                possiveisCandidatos += candidatosUniversidade;
        }
        i++;
    }
    printf("%d", possiveisCandidatos);
    printf("\n");
}