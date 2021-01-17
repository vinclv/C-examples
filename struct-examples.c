#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* \ */


struct node {
    int value;
    struct node *next;
};

typedef struct node node;

int main() {
    node *head = malloc(sizeof(head));
    printf("%d",node->value);

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* \ */


struct student {
    int id;
    char name[10];
};

typedef struct student student;




int struct_info(student student[]);

int main() {
    student std[5];
    for(int i=0;i<5;i++){
        std[i].id = i+10;
        strcpy(std[i].name,"Vinod");
    }
    struct_info(std);
    //printf("%d\n",std[0].id);
    return 0;


}

int struct_info(student *p) {
    //p->id = 100;
    p++;
    printf("%d\n",p->id);

    //printf("%d\n",student.id);
    //printf("%s\n",student.name);
    return 0;
}













