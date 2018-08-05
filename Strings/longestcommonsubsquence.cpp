#include<iostream>
#include<stdlib.h>
using namespace std;
int lis( int arr[], int n )
{
    int *lis, i, j, max = 0;
    lis = (int*) malloc ( sizeof( int ) * n );
    for (i = 0; i < n; i++ )
        lis[i] = 1;
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ ) 
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
 

    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];
    free(lis);
 
    return max;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    printf("Length of lis is %d ", lis( arr, n ) );
    return 0;
}

