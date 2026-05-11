#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list {int data;struct list *next;}list;

int is_empty(const list *l){return (l==NULL);}

list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d;
    head->next = NULL;
    return head;
}

list* addToFront(int d,list* h)
{
    list * head = create_list(d);
    head->next = h;
    return head;
}

list* arrayToList (int d[],int size)
{
    list* head = create_list(d[0]);
        int i;
        for ( i = 0; i < size; i++)
        {
            head = addToFront(d[i],head);
        }
        return head;
        
}

void print_list(list *h,char *title)
{
    printf("%s\n",title);
    while (h!=NULL)
    {
        printf("%d :",h->data);
        h=h->next   ;
    }
    
}

int main()
{
    list list_of_int;
    list *head = NULL;
    int data[6] = {4,5,6,7,8,9};
    head = arrayToList(data,6);
    print_list(head,"data[6 ] made into 6 element list");
    printf("\n\n");

        
}