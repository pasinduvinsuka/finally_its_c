#include <stdio.h>


struct car{
    char *name;  //char pointer
    float price;
    int speed;
};

void set_price(struct car *c, float new_price){
    c->price = new_price;
}

int main(void){
    struct car saturn_car = {"Saturn",1699.11,165};
    printf("saturn initial price : %f\n",saturn_car.price);

    struct car march_car = {.name ="March rider", .price = 423234.21 };
    printf("related to march car:%f\n",march_car.price);

    set_price(&saturn_car, 23.12);

    printf("new saturn price is %f\n",saturn_car.price);
}