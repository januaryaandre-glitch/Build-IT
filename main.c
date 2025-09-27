#include <stdio.h>

int main()
{
    float jarak, waktu;
    scanf("%d", &jarak);
    scanf("%d", &waktu);
    float kecepatan = jarak/waktu;
    printf("%.3f", kecepatan);
    return 0;
}