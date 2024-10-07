// calculating consumption of power
#include<stdint.h>
int main (){

    int consumerID, consumerName, UnitConsumed;
    float totalbill, charge_per_unit;

    printf("enter consumer ID: ");
    scanf("%d",&consumerID);

    printf("enter consumer name: ");
    scanf("%d",consumerName);

    printf("enter unit consumed: ");
    scanf("%d",UnitConsumed);

    printf("enter charge per unit: ");
    scanf("%f",&charge_per_unit);

    printf("the total bill is %f\n", totalbill);

     if (UnitConsumed >= 1 && charge_per_unit >= 1.20) {
        totalbill = UnitConsumed * charge_per_unit;
    } else if (UnitConsumed >= 200 && UnitConsumed < 400 && charge_per_unit >= 1.50) {
        totalbill = UnitConsumed * charge_per_unit;
    } else if (UnitConsumed >= 400 && UnitConsumed < 600 && charge_per_unit >= 1.50) {
        totalbill = UnitConsumed * charge_per_unit;
    } else if (UnitConsumed >= 600 && charge_per_unit >= 2.0) {
        totalbill = UnitConsumed * charge_per_unit;
    } else {
        printf("the totalbill is %f\n",totalbill);
    }
        return 0;
    
}


