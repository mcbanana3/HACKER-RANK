#include<stdio.h>

int main() {
    
    int t;
    int x;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        
        if (x < 1500)
        {
            printf("%f\n", x + ((10/100) * x) + ((90/100) * x));
        }

        else if (x >= 1500)
        {
            printf("%f\n", x + 500 + ((98/100) * x));
        }
        
    }

    return 0;
    
}