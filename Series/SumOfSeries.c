// 1*2 + 2*3 + 3*4 + .....+ N1 + N2
#include <stdio.h>
int main() {
    int n1, n2, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("1*2 + 2*3 + 3*4 + .....+ %d*%d = ", n1,n2);
    int a = 1, b = 1;
    while(a <= n1 && b <= n2){
        sum+= a*b;
        a++;
        b++;
    }
    printf("%d", sum);
    return 0;
}