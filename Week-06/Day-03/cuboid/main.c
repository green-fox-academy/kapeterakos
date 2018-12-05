#include <stdio.h>

int main( )
{
    int a;
    int b;
    int c;
    int volume;
    int surface;

    printf("Give one side of the cuboid");
    scanf("%d",&a);
    printf("Give another side of the cuboid");
    scanf("%d",&b);
    printf("Give the last side of the cuboid");
    scanf("%d",&c);

    volume = a*b*c;
    surface = 2*(a*b+a*c+b*c);

    printf("Surface Area: %d\n",surface);
    printf("Volume: %d\n",volume);
    return 0;
}
