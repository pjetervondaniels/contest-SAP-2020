#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroPedras, distanciaMargem;
    scanf("%d", &numeroPedras);
    scanf("%d", &distanciaMargem);

    int i = 0, *vetorP;

    vetorP = (int *)malloc(numeroPedras * sizeof(int));

    while(i < numeroPedras){
        scanf("%d", &vetorP[i]);
        i++;
    }

    int posicaoAtual = 0, numeroSaltos = 0, saltosDuplo = 0, saltosNormais = 0, limiteSalto = 0, log = 0, n = 0;

    scanf("%d", &saltosNormais);
    scanf("%d", &saltosDuplo);

    i = 0;

    while (posicaoAtual < distanciaMargem){
        log = 0;
        if(posicaoAtual + saltosDuplo == distanciaMargem || posicaoAtual + saltosDuplo == vetorP[n] && limiteSalto != 1){
            posicaoAtual += saltosDuplo;
            limiteSalto == 1;
            numeroSaltos += 1;
            n += 1;
            log = 1;
        }

        if(posicaoAtual + saltosNormais == distanciaMargem || posicaoAtual + saltosNormais == vetorP[n]){
            posicaoAtual += saltosNormais;
            limiteSalto == 0;
            numeroSaltos += 1;
            n += 1;
            log = 1;
        }

        if(log == 0 && distanciaMargem != posicaoAtual){
            numeroSaltos = -1;
            break;
        }

    }

    if(numeroSaltos != -1){
        numeroSaltos -= 1;
    }
    

    printf("%d", numeroSaltos);
}