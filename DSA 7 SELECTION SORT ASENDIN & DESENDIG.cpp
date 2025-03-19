#include <climits>
#include<iostream>
using namespace std;
int main()
{
    int arr[]={64,25,12,22,11};
    
     int n=sizeof(arr)/sizeof(arr[0]);
     
    int mn,i;
    for(int i=0;i<n-1;i++)
    {  
        int mn=INT_MAX;
    int mindx=-1;


        for(int j=i;j<n;j++)  
        {
            if(mn>arr[j])
            {
               mn=arr[j];
               mindx=j;              
            }
        } 
        swap(arr[i],arr[mindx]);
    }
   for(int i=0;i<n;i++) 
   {
    cout<<arr[i]<<" ";
   }
}
