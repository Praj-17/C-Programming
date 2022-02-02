#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d", &n);
int arr[1001];
int i =0;
while(i!=n)
{
    scanf("%d", &arr[i]);
    i+=1;
}
int sum =0;
for(int j =0; j<n; j++)
{
    sum += arr[j];
}
 printf("%d", sum);
    return 0;
}