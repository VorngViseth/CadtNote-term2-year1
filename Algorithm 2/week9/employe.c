#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char name[50];
    int salary;

} Employe;

void checkMemory(Employe* employe){
    if(employe == NULL) {
        printf("Memory allocation faild !\n");
        exit(1);
    }
}

int main() {
    
    int employeAmount = 2;

    Employe *employe = malloc(employeAmount * sizeof(Employe));
    checkMemory(employe);

    for (int i = 0; i < employeAmount; i++){
        printf("Enter the name for employe%d : ", i+1);
        fgets(employe[i].name, sizeof(employe[i].name), stdin);
        employe[i].name[strcspn(employe[i].name, "\n")] = '\0';
        printf("Enter employe's salary : ");
        scanf("%d", &employe[i].salary);
        getchar();
    }

    int temp = employeAmount;
    employeAmount = 5;

    employe = realloc(employe, employeAmount * sizeof(Employe));
    checkMemory(employe);

    for(int i = temp; i < employeAmount; i++){
        printf("Enter the name for employe %d : ", i+1);
        fgets(employe[i].name, sizeof(employe[i].name), stdin);
        employe[i].name[strcspn(employe[i].name, "\n")] = '\0';
        printf("Enter employe's salary : ");
        scanf("%d", &employe[i].salary);
        getchar();
    }

    for(int i = 0; i < employeAmount; i++){
        printf("Employe %s salary %d\n", employe[i].name, employe[i].salary);
    }

    free(employe);
    return 0;
}