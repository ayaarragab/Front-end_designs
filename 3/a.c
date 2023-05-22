Q1:
#include<stdio.h>
void sort(int arr[],int i,int n,int &x,int &y) {
for(i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
        x++;   }
    else if(arr[i]<arr[i+1])
        y++; }
if(x>=n) {
    printf("The array is sorted\n"); }
else if (y>=n){
    printf("The array is sorted\n"); }
else
    printf("The array is not sorted\n");}
int main() {
    int arr[100];
    int i,n,x=1,y=1;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);  }
    sort(arr,i,n,x,y);
    return 0; }



Q2:
#include<stdio.h>
int bubble_sort(int arr[], int n) {
int i, j, temp;
int swapped;
for (i = 0; i < n-1; i++) {
swapped = 0;
for (j = 0; j < n-i-1; j++) {
    if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = 1;}
}
if (!swapped) 
    break;}
}
int main() {
int i,j,temp,swapped,n;
int arr[1000];
printf("Enter size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&arr[i]);}
bubble_sort(arr, n);
for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
return 0;}

Q3:
#include<stdio.h>
int linear(int arr[],int n,int i,int k,int &x) {
if (n!=0){
if(arr[i]==k){
        printf("array[%d]=%d ",i,k);
        x=1;   }
else
linear(arr,n-1,i+1,k,x);
}
else
    x=0;
}
int main() {
int arr[1000];
int i,k,x,n;
printf("Enter size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&arr[i]);
}
printf("Enter number: ");
scanf("%d",&k);
linear(arr,n,0,k,x);
if(x==0)
    printf("Number is not found");
}


Q4:
#include<stdio.h>
float mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  }
    return (float) sum / n;
}
int mode(int arr[], int n) {
int maxCount = 0, mode = arr[0];
for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] == arr[i]) 
            count++;  }
    if (count > maxCount) {
        maxCount = count;
        mode = arr[i]; } }
    return mode;
}
float median(int arr[], int n) {
int temp, i, j;
for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;} } }
if (n % 2 == 0) 
    return (float)(arr[n/2 - 1] + arr[n/2]) / 2;
else 
    return (float)arr[n/2];
}
int main() {
int arr[100], n, choice;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter the elements of the array: ");
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);}
printf("Choose an option:\n");
printf("1. Mean\n");
printf("2. Mode\n");
printf("3. Median\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
        case 1:
            printf("The mean is %f\n", mean(arr, n));
            break;
        case 2:
            printf("The mode is %d\n", mode(arr, n));
            break;
        case 3:
            printf("The median is %f\n", median(arr, n));
            break;
        default:
            printf("Invalid choice\n");}
    return 0;}

Q5:
#include<stdio.h>
#include <string.h>
int replace(char str[]) {
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
            count++;}
}
printf("The number of space in string= %d\n", count);
return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    replace(str);
    printf("The resulting string is: %s", str);
    return 0;
}