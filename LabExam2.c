//1)triangle of numbers.

/*
#include <stdio.h>

int main()
{
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("% -3d", num++);
        }

        for (j = 1; j < i; j++)
        {
            printf("% -3d", num++);
        }

        printf("\n");
    }

    return 0;
}
*/
//2) Write a C program to display the reverse of a number & check if it is palindrome.

/*
#include <stdio.h>

int main() {
    int n, originalNumber, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n =n/10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    // Check if it is a palindrome
    if (originalNumber == reversedNumber) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
*/


//3) Write a C program to check whether a given number is a prime and use that to find the next prime number, greater than a given number.

/*
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Function to find the next prime number greater than a given number
int nextPrime(int number) {
    number++;

    while (!isPrime(number)) {
        number++;
    }

    return number;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    int next = nextPrime(n);
    printf("The next prime number greater than %d is %d.\n", n, next);

    return 0;
}
*/


//4.

/*
#include <stdio.h>

// Function to reverse the array using index notation
void reverseArrayIndex(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function to reverse the array using pointer notation
void reverseArrayPointer(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArrayIndex(arr, size);
    //reverseArrayPointer(arr,size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/

//5. Union and intersection

/*
#include<stdio.h>

void ReadArr(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}


void PrintArr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


void Union(int a1[],int a2[],int n,int m)
{
    int count;
    PrintArr(a1,n);
    
    for(int j=0;j<m;j++)   // 4 2 8
    {
        count=0;
        for(int i=0;i<n;i++) // 1 2 3 4 5 
        {
            if(a1[i]==a2[j])
            {
                count++;
            }
        }
        
        if(count==0)
        {
            printf("%d ",a2[j]);
        }
    }
}


void Intersection(int a1[],int a2[],int n,int m)
{
    int c[100];
    int count=0;
    
    
    for(int i=0;i<n;i++)    // 1 2 3 4 5
    {
        for(int j=0;j<m;j++)  // 4 2 8 
        {
            if(a1[i]==a2[j])
            {
                printf("%d ",a1[i]);
                
            }
        }
    }
    
    
}

int main()
{
    int n;
    printf("Enter number of elements of array 1: ");
    scanf("%d",&n);
    int a[n];
    ReadArr(a,n);
    
    int m;
    printf("Enter number of elements of array 2: ");
    scanf("%d",&m);
    int b[m];
    ReadArr(b,m);
    //PrintArr(b,m);
    printf("\nIntersection is: \n");
    Intersection(a,b,n,m);
    printf("\nUnion is:\n");
    Union(a,b,n,m);
    
}
*/


//6.Inversion Count;
/*
#include<stdio.h>
void ReadArr(int a[],int size)
{
    for(int i =0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
}

void InversionCount(int a[],int size)
{
    int count =0;
    for(int i=0;i<size;i++)   // 8 4 2 1 5
    {
        for(int j=i+1;j<size;j++) // 8 4 2 1 5 
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    
    printf("The inversion count is %d",count);
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    ReadArr(a,n);
    InversionCount(a,n);
}
*/

//7)Write a C function to remove all repeated characters from the given string and display the string without duplicate characters.

/*
#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Function to remove repeated characters from a string
void removeDuplicates(char str[]) {
    int length = strlen(str);
    int index = 0;

    for (int i = 0; i < length; i++)
    {
        char currentChar = str[i];
        int isDuplicate = 0;

        // Check if the character is already encountered before the current position
        for (int j = 0; j < i; j++) 
        {
            if (str[j] == currentChar) 
            {
                isDuplicate = 1;
                break;
            }
        }

        // If the character is not a duplicate, add it to the result
        if (!isDuplicate) 
        {
            str[index++] = currentChar;
        }
    }

    // Add null character at the end to terminate the modified string
    str[index] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character from input

    printf("Original string: %s\n", str);

    removeDuplicates(str);

    printf("String without duplicate characters: %s\n", str);

    return 0;
}*/


//8.Write a C function strend(s, t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.
/*
#include <stdio.h>
#include <string.h>

 int strend(const char s[], const char t[]) {
    int s_len = strlen(s);
    int t_len = strlen(t);

    if (t_len > s_len) {
        return 0;  // t cannot occur at the end of s if t is longer than s
    }

    int s_end = s_len - t_len;

    for (int i = 0; i < t_len; i++) {
        if (s[s_end] != t[i]) {
            return 0;  // characters don't match
        }
        s_end++;
    }

    return 1;  // t occurs at the end of s
}

int main() {
    char s[100];
    char t[100];

    printf("Enter the first string: ");
    scanf("%s", s);

    printf("Enter the second string: ");
    scanf("%s", t);

    int result = strend(s, t);

    if (result) {
        printf("The string '%s' occurs at the end of the string '%s'\n", t, s);
    } else {
        printf("The string '%s' does not occur at the end of the string '%s'\n", t, s);
    }

    return 0;
}
*/


//9.Write a C program to compare 2 dates and print appropriate messages. Use structure to store the date.
/*
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year)
        return 1;
    else if (date1.year < date2.year)
        return -1;
    else {
        if (date1.month > date2.month)
            return 1;
        else if (date1.month < date2.month)
            return -1;
        else {
            if (date1.day > date2.day)
                return 1;
            else if (date1.day < date2.day)
                return -1;
            else
                return 0;
        }
    }
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date (day/month/year): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (day/month/year): ");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    int comparison = compareDates(date1, date2);
    if (comparison == 1)
        printf("The first date is later than the second date.\n");
    else if (comparison == -1)
        printf("The first date is earlier than the second date.\n");
    else
        printf("The two dates are the same.\n");

    return 0;
}
*/

