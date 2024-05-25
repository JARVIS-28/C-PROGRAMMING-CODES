//Code done by me.

// #include <stdio.h>
// #include<stdbool.h>

// void getArray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
// }

// void printArray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }

// void Checkv(int a[],int n)
// {
//     if(a[0]+a[3]==2*a[1])
//     {
//         int q=1;int *b[2];
//         printf("YES");
//         while(q=1)
//         {
//             *b=a-(a[0],a[3]);
//         }
//         printf("%d",b);
//     }
//     else
//     {
//         printf("NO");
//     }
    
    
// }

// int main()
// {
//     int arr[100];
//     int N;
//     int T;
    
//     scanf("%d ",&T);
//     while(T!=0 && T<=1000)
//     {
//         scanf("%d ",&N);
//         if(N<4)
//         {
//             printf("Enter only even no.of Elements!!");
//         }
//         else
//         {
//             getArray(arr,N);
//             printArray(arr,N);
//             Checkv(arr,N);
//         }
//         T--;
        
//     }
//     return 0;
// }

//Code done by chatGPT                          this code doesnt work properly.

// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>

// int compare(const void* a, const void* b);
// // Function to check if the given array can be formed
// // using the specified operations
// bool checkArray(int arr[], int n) {
//     // Sort the array in non-decreasing order
//     qsort(arr, n, sizeof(int), compare);

//     // Perform binary search
//     int low = 0;
//     int high = n - 1;

//     while (low < high) {
//         int sum = arr[low] + arr[high];
//         int diff = arr[high] - arr[low];

//         if (arr[high] % 2 != 0 || sum % 2 != 0 || diff < 0) {
//             // Invalid conditions, array cannot be formed
//             return false;
//         }

//         int mid = (low + high) / 2;
//         if (arr[mid] == sum / 2 && arr[mid + 1] == diff / 2) {
//             // Found the initial array
//             return true;
//         } else if (arr[mid] < sum / 2) {
//             low = mid + 1;
//         } else {
//             high = mid;
//         }
//     }

//     return false;
// }

// // Function to compare integers (required by qsort)
// int compare(const void* a, const void* b) {
//     return (*(int*)a - *(int*)b);
// }

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T > 0 && T <= 1000) {
//         int N;
//         scanf("%d", &N);

//         int* arr = (int*)malloc(N * sizeof(int));
//         for (int i = 0; i < N; i++) {
//             scanf("%d", &arr[i]);
//         }

//         if (checkArray(arr, N)) {
//             printf("YES\n");
//         } else {
//             printf("NO\n");
//         }

//         free(arr);
//         T--;
//     }

//     return 0;
// }
