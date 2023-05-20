void miniMaxSum(vector<int> arr) {
    long sum=0;
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<5; i++)
    {
        if(min>arr[i]) min=arr[i];
        if(max<arr[i]) max=arr[i];
        sum+=(long)arr[i];
    }
    cout<<sum-(long)max<< <<sum-(long)min;
}
