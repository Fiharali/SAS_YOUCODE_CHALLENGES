#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2,MN;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    MN=sqrt((pow ((x1-x2), 2)) + ( pow ((x1-x2), 2)));
    printf("%d", MN);
    return 0;
}