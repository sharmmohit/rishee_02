#include <bits/stdc++.h> 
using namespace std; 
  
// function to check for gcd 
bool coprime(int a, int b) 
{    
    return (__gcd(a, b) == 1); 
} 
  
// Recursive function to 
// return gcd of a and b 
int numOfPairs(int n) 
{  int a[n]={0};
int k;
      
    int count = 0;  
    for (int i = 0; i < n - 1; i++) {
	
	 k=0;
    
    
    a[k]=i;
    k++;
        for (int j = i + 1; j < n; j++) {
		
            if (coprime(i,j)) 
                count++; 
                a[k]=j;
            }
            for(int l=0;l<count;l++){printf("%d",&a[l]);
			}}
                  
    return count; 
} 
  
// driver code 
int main() 
{ int n;
//    int arr[] = { 1, 2, 5, 4, 8, 3, 9 }; 
//    int n = sizeof(arr) / sizeof(arr[0]);  
scanf("%d",&n);
    cout << numOfPairs(n); 
    return 0; 
} 
