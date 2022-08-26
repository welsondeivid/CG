#include <stdio.h>

void TraceLine (int xI, int yI, int xF, int yF, int dX, int dY)
{
    int dStart = (2 * dY) - dX;
    int dltE = 2 * dY;
    int dltNE = 2 * (dY - dX);
    int dOld = dStart;
    
    printf ("\nCoordenadas da linha: \n");
    printf ("x = %d, y = %d\n", xI, yI);
    
    while (xI != xF && yI != yF)
    {
        
        if (dOld >= 0)
        {
            xI += 1;
            yI += 1;
            dOld = dOld + dltNE;
        }
        else
        {
            xI += 1;
            dOld = dOld + dltE;
        }
        
        printf ("x = %d, y = %d\n", xI, yI);    
    }
}

int main()
{
    int xI, yI, xF, yF;
    printf ("Digite as coordenadas do ponto incial: ");
    scanf ("%d%d", &xI, &yI);
    
    printf("\nDigite as coordenadas do ponto final: ");
    scanf ("%d%d", &xF, &yF);
    
    int dX = xF - xI;
    int dY = yF - yI;
    
    TraceLine (xI, yI, xF, yF, dX, dY);

    return 0;
}
