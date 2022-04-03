class Solution{
public:

void segregateEvenOdd(int arr[], int n) {
    // code here
    sort(arr,arr+n);
    int j=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;j++;
        }
    }
    sort(arr+j,arr+n);
}
};