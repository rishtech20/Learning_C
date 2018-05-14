/*
*
* Author: Rishabh Madan
* Problem: Using union type in C
* Day 10 Prog 7
*
*/
#include <stdio.h>

/*Union can be said to be a way to save some memory on the program. Sometimes, we may not be required to use
all the attributes mentioned in the structure and that is the time we may use union. When an object is declared
for a union then, it allocates memory that is equal to the highest byte size. For example: In following union
the size allocated would only be 10 bytes i.e, the size of the character array.*/
typedef union{
    double weight;
    int size;
    char color[10];
}Description;

//Structure Template for Item
typedef struct{
    int ino;
    char name[20];
    double price;
    Description d;
    char dtype;
}Item;

//Function to take the input from the user for each and every object of Item that is declared.
void inputItem(Item *ip){
    printf("Enter the Item No: ");
    scanf("%d", &ip->ino);
    printf("Enter the name of the item: ");
    scanf(" %[^\n]", ip->name);//Space to avoid the flushing problem
    printf("Enter the price of the item: ");
    scanf("%lf", &ip->price);
    printf("Weight/color/size???(w, c, s): ");
    scanf(" %c", &ip->dtype);//Space to avoid the flushing problem

    switch(ip->dtype){
        case 'w':
            printf("Enter the weight of the item: ");
            scanf("%lf", &ip->d.weight);
            break;
        case 's':
            printf("Enter the size of the item: ");
            scanf("%d", &ip->d.size);
            break;
        case 'c':
            printf("Enter the color of the item: ");
            scanf(" %[^\n]", ip->d.color);//Space to avoid the flushing problem
            break;
        default :
            printf("Wrong input.....");
            return 0;
    }
}

void printItem(Item in){
    printf("-----------------------------------\n");
    printf("Item No.: %d\n", in.ino);
    printf("Name: %s\n", in.name);
    printf("Price: %0.2f\n", in.price);

    switch(in.dtype){
        case 'w':
            printf("Weight of the item: %0.2f\n", in.d.weight);
            break;
        case 's':
            printf("Size of the item: %d\n", in.d.size);
            break;
        case 'c':
            printf("Color of the item: %s\n", in.d.color);
    }

    printf("-----------------------------------\n");
}

int main(){
    Item i1;

    inputItem(&i1);

    printItem(i1);
    return 0;
}
