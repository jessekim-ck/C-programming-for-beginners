#include <stdio.h>
#include <stdlib.h>


struct item {
    char *name;
    int quantity;
    float price;
    float amount;
};


void read_item(struct item *item_ptr) {
    printf("Input values: ");
    scanf("%s %i %f", item_ptr->name,
                      &item_ptr->quantity,
                      &item_ptr->price);
    item_ptr->amount = (float) item_ptr->quantity * item_ptr->price;
}


void print_item(struct item const *item_ptr) {
    printf("%s, %i, %f, %f\n", item_ptr->name,
                               item_ptr->quantity,
                               item_ptr->price,
                               item_ptr->amount);
}


void main() {
    // struct item itm;
    struct item *item_ptr;
    
    // note that you need to allocate memory for the struct itself,
    // and also the pointer members of it.
    // item_ptr = &itm;
    item_ptr = (struct item *) malloc(sizeof(struct item));
    item_ptr->name = (char *) malloc(20*sizeof(char));
    if (item_ptr->name == 0) {
        exit(-1);
    }

    read_item(item_ptr);
    print_item(item_ptr);

    free(item_ptr->name);
    free(item_ptr);
    item_ptr->name = NULL;
    item_ptr = NULL;
}
