#include<stdio.h>
#include<windows.h>
int main()
{
    double start,stop;
    start=clock();
    for(int i=10;i<=100;i=i+10)
    {
        printf("[");
        for(int k=10;k<=i;k=k+10)
            printf("*");
        for(int j=i+10;j<=100;j=j+10)
            printf("-");
        printf("]");
        printf("%d%%",i);
        Sleep(500);
        printf("    ");
        stop=clock();
        printf("%.4f",stop-start);
        printf("\r");
    }
    return 0;
}
