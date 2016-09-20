#include<stdio.h>
#include<math.h>
#define pi (2*acos(0.0))
#define eps 0.0000000001

int main()
{
    int i,tCase;
    double r,sqr_area,cir_area,res;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%lf",&r);

        sqr_area=(4*r*r);

        cir_area=pi*r*r;

        res=sqr_area-cir_area;

        printf("Case %d: %.2lf\n",i,res+eps);

    }


    return 0;
}
