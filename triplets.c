include <stdio.h> 
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
    int l, r; 
int t;
for int(t=0;t<l;t++)
{
    for (int i = 0; i < arr_size - 2; i++) { 
        for (int j = i + 1; j < arr_size - 1; j++) { 
            for (int k = j + 1; k < arr_size; k++) { 
                if (A[i] + A[j] + A[k] == sum) { 
                    printf("%d, %d, %d", 
                           A[i], A[j], A[k]); 
                    return true; 
                } 
            } 
        } 
    } 

    return false; 
} 
int main() 
{ 
    int A[50];
    scanf("%d",A[i]);
    int sum;
    int arr_size = sizeof(A) / sizeof(A[0]); 
    find3Numbers(A, arr_size, sum); 
    return 0; 
}
