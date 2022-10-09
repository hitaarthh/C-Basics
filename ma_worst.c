#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("Enter no of blocks:\n");
    scanf("%d",&n);

    int memory[n];
    printf("Enter memory of blocks:\n");
    for(int i = 0; i<n; i++){
        scanf("%d",&memory[i]);
        
    }

    int p;
    printf("Enter no of blocks:\n");
    scanf("%d",&p);

    int process[p];
    printf("Enter memory of blocks:\n");
    for(int i = 0; i<p; i++){
        scanf("%d",&process[i]);
    }

    for(int i = 0; i<p; i++){
        
        int max = INT_MIN;
        int max_index = -1;
        for(int j = 0; j<n; j++){
            if(process[i]<=memory[j] && memory[j]>max){
                max = memory[j];
                max_index = j;
            }
        }
        if(max != INT_MIN){
            printf("Memory block %d allocated for %d process\n",max_index+1, i+1);
            memory[max_index] = memory[max_index] - process[i];
        }
        else
            printf("No memory block free for process %d\n",i+1);
    }
    return 0;
}