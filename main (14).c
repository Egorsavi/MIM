#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    int n, k1=0, k2=0;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = rand()%201 - 100;
    }
    for(int i=0;i<n;i++){
        printf("%d: %d\n", i, arr[i]);
    }
    int minn = abs(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]<0) k1++;
        if(abs(arr[i])==minn) k2++;
        if(minn>abs(arr[i])){
            minn = abs(arr[i]);
            k2=1;
        }
    }
    printf("1) %d\n2) %d", k1, k2);
    return 0;
}