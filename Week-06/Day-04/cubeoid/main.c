#include <stdio.h>
typedef struct rectangular_cuboid {

    double a;

    double b;

    double c;

}rectangular_cuboid_t;

double GetSurface(rectangular_cuboid_t *cuboid);
double GetVolume(rectangular_cuboid_t cuboid);
int main()

{
    rectangular_cuboid_t cuboid;
    printf("%.2lf \n",GetSurface(&cuboid));
    printf("%.2lf \n",GetVolume(cuboid));

    return 0;

}

double GetSurface(rectangular_cuboid_t *cuboid){
    printf("Give one side of the cuboid");
    scanf("%lf",&cuboid->a);
    printf("Give another side of the cuboid");
    scanf("%lf",&cuboid->b);
    printf("Give the last side of the cubeoid");
    scanf("%lf",&cuboid->c);

    return 2*(cuboid->a*cuboid->b+cuboid->a*cuboid->c+cuboid->b*cuboid->c);
}

double GetVolume(rectangular_cuboid_t cuboid){
    return (cuboid.a*cuboid.b*cuboid.c);
}