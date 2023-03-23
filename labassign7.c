#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    int tmp; 
    int numSwaps[n];
    
	for (i = 0; i < n; i++)
	{
		numSwaps[i] = 0;
	}

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                numSwaps[j]++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("This is how many swaps are needed: %d\n", numSwaps[i]);
    };
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}

// I had to copy and paste it form my VSC because i forgot how to make a new file in my repo
