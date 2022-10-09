//electricity bill
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unit,minicharge;
    float billamount;
    char name[50];
    printf("Enter the name and unit\n");
    scanf("%s%d",&name,&unit);
    minicharge=100;
    if(unit<=200)
    {
        billamount=unit*0.80+minicharge;
    }
    else if(unit<=300)
    {
        billamount=200*0.80+(unit-200)*0.90+minicharge;
    }
    else if(unit>300)
    {
        billamount=200*0.80+100*0.90+(unit-300)*1+minicharge;
    }
    if(billamount>=400)
    {
        billamount=billamount+billamount*0.15;
    }
    printf("The name is %s and billamount is %f",name,billamount);
    return 0;
}
