#include<stdio.h>

int main(){
    int num;
    printf("Enter no of pages:\n");
    scanf("%d",&num);

    int ref[num];
    printf("Enter reference string:\n");
    for(int i = 0; i<num; i++){
        scanf("%d", &ref[i]);
    }

    int f;
    printf("Enter frame number:\n");
    scanf("%d",&f);
    int counter = 0;

    int frame[f];
    for(int i = 0; i<f; i++){
        frame[i] = -1;
    }

    for(int i = 0; i<num; i++){
        int flag = 1;
        for(int j = 0; j<f; j++){
            if(frame[j] == -1){
                frame[j] = ref[i];
                flag = 0;
                break;
            }
            else if(frame[j] == ref[i]){
                flag = 0;
                break;
            }
        }
        if(flag){
            if(counter >= f)
                 counter = 0;
            frame[counter] = ref[i];
            counter = counter + 1;
        }
        for(int i = 0; i<f; i++){
            printf("%d ",frame[i]);
        }
        printf("\n");
    }
}