// 1- Write a function to find index of greatest value element in an array

// #include <stdio.h>
// void greatest(int A[],int  size);

// void greatest(int A[],int size)
// {
//     int count=0,mark=A[0];
//     for(int i=0;i<size;i++)
//     {
//         if(A[i]>mark)
//         {
//             mark=A[i];
//             count=i;
//         }
//     }
//     printf("Index no: %d\nGreatest element : %d",count,mark);
// }

// int main()
// {
//     int n;
//     printf("Enter the size of an array: ");
//     scanf("%d",&n);

//     int arr[n];
    
//     printf("Enter the value of element(%d): ",n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     greatest(arr,n);

//     return 0;
// }

// 2- Write a function to rotate an array elements by one position towards right


// #include<stdio.h>

// void rotateRight(int A[], int size);

// int main()
// {
//     int n;

//     printf("Enter the size of an array: ");
//     scanf("%d", &n);

//     int arr[n];
    
//     printf("Enter the values of the array elements (%d):\n", n);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("\tOriginal array:\n");
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     rotateRight(arr, n);
    
//     printf("\n\tRotated array:\n");
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// void rotateRight(int A[], int size)
// {
//     int lastElement = A[size - 1]; // Store the last element
//     for(int i = size - 2; i >= 0; i--) // Shift elements to the right
//     {
//         A[i + 1] = A[i];
//     }
//     A[0] = lastElement; // Place the last element at the first position
// }

//  3- Wite a program to rotate an array elements by  n positions towards right
// #include<stdio.h>
// int sorting(int [],int);
// int sorting(int a[],int size)
// {
//     int temp=a[0];
//     // size=size-1;
//     for(int i=1;i<siz e;i++)
//     {
//         for(int j=1;i<size;j++)
//         {
//             if(temp>a[j])
//             {
//                 if(a[j]>a[j-1])
//                 {
//                     temp=a[i];
//                     a[i]=a[j];
//                     a[j]=temp; 
//                 } 
//             }  
//             else 
//             {
//                 if(a[j]>a[j+1] && a[]) 
//             }
//         }
//     }
// }


// 1- Write a program to reverse a given 1-D array in place (without using an additional array).

// #include<stdio.h>
// void reverseArray(int [],int);
// void reverseArray(int A[],int size)
// {
//     int temp;
//     for(int i=0,j=size-1;i<size/2;i++,j--)
//     {
//         temp=A[j];
//         A[j]=A[i];
//         A[i]=temp;
//     }
// }
// int main() {
//     int n;

   
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int A[n];


//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &A[i]);
//     }

//     reverseArray(A,n);

 
//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// void reverseArray(int A[], int size) {
//     int temp;
//     for (int i = 0, j = size - 1; i < j; i++, j--) {
//         temp = A[i];
//         A[i] = A[j];
//         A[j] = temp;
//     }
// }


//2- Write a C program to find the second largest element in an array without sorting it.

// #include <stdio.h>

// void secondlargest(int [],int);
// void secondlargest(int A[],int size)
// {
//     int second=A[0],temp,largest=A[0];

// for(int i=1;i<size;i++)
//     if(A[i]>largest)
//     {
//         second=largest; 
//         largest=A[i];
//     }
//     else
//     {
//         temp=A[i];    
//         if(temp>second && temp != largest)
//         {
//             second=temp;
//         }
//     }
//     printf("Second largest : %d",second);
// }
// int main()
// {
//     int n;

//     printf("Enter the size of an array: ");
//     scanf("%d",&n);

//     int num[n];
    
//     printf("Enter the %d elements of an array: ",n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&num[i]);
//     }

//     secondlargest(num,n);

//     return 0;
// }

// 3-Write a C program to perform a left rotation of an array by k positions.
// #include <stdio.h>

// void leftRotation(int [],int,int);
// void leftRotation(int A[],int size,int k)
// {
//     int i=0,Store,j=size-1;
//     for(int x=0;x<k;x++)
//     {
//         Store=A[0];  
//         for( i=1 ; i<size;  i++)
//         {
//             A[i-1]=A[i];
           
//         }
//         A[j]=Store;
//     } 

// }
// int main()
// {
//     int n,k;

//     printf("How many time you want to rotate an array: ");
//     scanf("%d",&k);

//     printf("Enter the size of an array: ");
//     scanf("%d",&n);

//     int num[n];
    
//     printf("Enter the %d elements of an array: ",n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&num[i]);
//     }
    
//     leftRotation(num,n,k);
    
//     printf("Rotated array\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",num[i]);
//     } 
//     return 0;
// }
// 4- Write a C program to count the frequency of each unique element in an array

// #include <stdio.h>

// void frequency(int a[], int size)
//  {
//     int visited[size]; 
//     for (int i = 0; i < size; i++) 
//     {
//         visited[i] = 0; 
//     }

//     for (int i = 0; i < size; i++)
//      {
//         if (visited[i] == 1)
//         {
//             continue; 
//         }

//         int count = 1; 
//         for (int j = i + 1; j < size; j++) 
//         {
//             if (a[i] == a[j]) 
//             {
//                 count++;
//                 visited[j] = 1;
//             }
//         }

     
//         printf("Frequency of %d: %d\n", a[i], count);
//     }
// }

// int main() {
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d values: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     frequency(arr, n);
//     return 0;
// }

// 5- Write a C program to find the contiguous subarray within a 1-D array that has the largest 
// sum(Kadane’s Algorithm).

#include <stdio.h>

int findMaxSubarraySum(int arr[], int size) {
    int max_sum = arr[0]; 
    int current_sum = arr[0];

    for (int i = 1; i < size; i++) {
    
        current_sum = (current_sum + arr[i] > arr[i]) ? (current_sum + arr[i]) : arr[i];
        
    
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    
    return max_sum;
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    int result = findMaxSubarraySum(arr, n);
    

    printf("The largest sum of a contiguous subarray is: %d\n", result);
    
    return 0;
}
