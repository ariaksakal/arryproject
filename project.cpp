#include <stdio.h>

int main(){

    int arry[3][5];
    int vert = 0;
for(int i= 0 ;i<3;i++){
    for(int j = 0;j<5 ;j++){
        scanf("%d",&arry[i][j]);
    }
}
    for(int i = 0; i<3;i++){
        for (int j = 0;j<5; j++){
            printf("%d ",arry[i][j]);

        }
        printf("\n");
    }
    for(int j = 0; j<5;j++){
        for(int i= 0;i<3;i++){
            vert += arry[i][j];
        }
        printf("Vertical total is %d\n",vert);
    }
