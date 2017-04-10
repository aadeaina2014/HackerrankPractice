#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool range_check(long long int x) {
    if ( (x>=0) && (x<=((long long int) pow(10,10))) ) {
        return true ;
    }
    else {
        return false;
    }
}

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
   
    long long int sum = 0 ;
    if( (n>=1) && (n<=10)) {
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);      
       //printf("%d\n",arr[arr_i]);
    }
    
     for(int arr_i = 0; arr_i < n; arr_i++){
       
        if(range_check(arr[arr_i]) )  {
         sum = sum + ((long long int) arr[arr_i]);
            
       }
    }
    printf("%lld",sum);
    }
       

    
    
    return 0;
}
