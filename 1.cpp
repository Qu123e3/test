#include <stdio.h>
int main(){
    int n;
    int S = 0;
    printf("\nNhap n =  ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        S += i;
    }
    printf("\nS = %d", S);
}