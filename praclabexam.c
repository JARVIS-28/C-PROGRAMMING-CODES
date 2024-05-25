//#include <stdio.h>
/*
int main() {
    int rows, i, j, k,number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        for (k = 0; k <= rows - i; k++) 
        {
            printf(" "); // Print spaces for pyramid shape
        }

        for (j = 1; j <= i; j++) 
        {
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}
*/

// #include<stdio.h>

// int isprime(int n)
// {
//     if(n<=1)
//     {
//         return 0;
//     }
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%2==0)
//         {
//             return 0;
//         }
        
//     }return 1;
// }
//  int isPrime(int n) {
//     if (n ==1)
//         return 0;
//     else{
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0)
//             return 0;
//     }

//     return 1;
// }
// }

// int main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     isprime(n);
//     if(!isprime(n))
//     {
//         printf("no");
//     }
//     else{
//         printf("yes");
//     }
    
//     return 0;

//}

// #include <stdio.h>

// int isPrime(int n) {
//     if (n ==1)
//         return 0;
//     else{
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0)
//             return 0;
//     }

//     return 1;
// }
// }

// int nextPrime(int n) {
//     n++;
//     while (!isPrime(n))
//         n++;

//     return n;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPrime(num))
//         printf("%d is a prime number.\n", num);
//     else
//         printf("%d is not a prime number.\n", num);

//     int next = nextPrime(num);
//     printf("The next prime number is: %d\n", next);

//     return 0;
// }


// #include <stdio.h>

// // Function to check if an element is already present in the array
// int isPresent(int arr[], int size, int element) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             return 1;  // Element is present
//         }
//     }
//     return 0;  // Element is not present
// }

// // Function to print the Union of two arrays
// void printUnion(int arr1[], int size1, int arr2[], int size2) {
//     int unionSize = size1 + size2;
//     int unionArr[unionSize];
//     int index = 0;

//     printf("Union of the arrays: ");

//     // Copy elements of the first array to the union array
//     for (int i = 0; i < size1; i++) {
//         unionArr[index++] = arr1[i];
//         printf("%d ", arr1[i]);
//     }

//     // Copy elements of the second array to the union array if not already present
//     for (int i = 0; i < size2; i++) {
//         if (!isPresent(unionArr, unionSize, arr2[i])) {
//             unionArr[index++] = arr2[i];
//             printf("%d ", arr2[i]);
//         }
//     }

//     printf("\n");
// }

// // Function to print the Intersection of two arrays
// void printIntersection(int arr1[], int size1, int arr2[], int size2) {
//     printf("Intersection of the arrays: ");

//     // Iterate through the elements of the first array
//     for (int i = 0; i < size1; i++) {
//         // Check if the current element is present in the second array
//         if (isPresent(arr2, size2, arr1[i])) {
//             printf("%d ", arr1[i]);
//         }
//     }

//     printf("\n");
// }

// int main() {
//     int size1, size2;

//     printf("Enter the size of the first array: ");
//     scanf("%d", &size1);

//     int arr1[size1];

//     printf("Enter the elements of the first array: ");
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the size of the second array: ");
//     scanf("%d", &size2);

//     int arr2[size2];

//     printf("Enter the elements of the second array: ");
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     printUnion(arr1, size1, arr2, size2);
//     printIntersection(arr1, size1, arr2, size2);

//     return 0;
// }

#include <stdio.h>

// Function to print the Union of two arrays
void printUnion(int arr1[], int size1, int arr2[], int size2) {
    printf("Union of the arrays: ");

    // Traverse the first array and print its elements
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    // Traverse the second array and print its elements if not already present in the Union
    for (int j = 0; j < size2; j++) {
        int isDuplicate = 0;
        
        // Check if the element from the second array is already present in the Union
        for (int i = 0; i < size1; i++) {
            if (arr2[j] == arr1[i]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            printf("%d ", arr2[j]);
        }
    }

    printf("\n");
}

// Function to print the Intersection of two arrays
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the arrays: ");

    // Traverse the first array
    for (int i = 0; i < size1; i++) {
        int isCommon = 0;

        // Check if the element from the first array is present in the second array
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                isCommon = 1;
                break;
            }
        }

        // If the element is common, print it
        if (isCommon) {
            printf("%d ", arr1[i]);
        }
    }

    printf("\n");
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printUnion(arr1, size1, arr2, size2);
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}



