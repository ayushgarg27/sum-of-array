#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans + a[i];
    }
    printf("The sum of the array is: ");
    printf("%d", ans);
}