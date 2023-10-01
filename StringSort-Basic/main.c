#include <stdio.h>
#include <string.h>


void sortStrings(char **array, int num){
    for (int i = 0; i < num-1; i++){
        for(int j = i+1; j < num; j++){
            if (strcmp(array[i], array[j]) > 0 ){
                char *temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < num; i++) {
        printf("%d -> %s\n", i+1, array[i]);
    }
}

void printStrings(char **array, int num){
    for(int i = 0; i < num; i++){
        printf("%d -> %s\n", i+1, array[i]);
    }
}

int main() {

    int n_str, str_size;
    printf("Enter the number of elements: ");
    scanf("%d", &n_str);
    printf("Enter the size of elements: ");
    scanf("%d", &str_size);

    char list[n_str][str_size+1];

    for (int i = 0; i < n_str; i++){
        printf("Enter the string %d ", i+1);
        scanf("%s", list[i]);
    }

    char *stringsArray[n_str];
        for(int i =0; i < n_str; i++){
        stringsArray[i] = list[i];
    }

    printf("\n\n");
    printf("Array before sorting: \n");
    printStrings(stringsArray, n_str );
    printf("\n\n");
    printf("Array after sorting: \n");
    sortStrings(stringsArray, n_str);
    getch();


    return 0;
}
