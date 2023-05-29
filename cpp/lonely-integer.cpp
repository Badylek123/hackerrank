int lonelyinteger(vector<int> a) {
    sort(a.begin(),a.end());
    int len=a.size();
    for(int i=1; i<len; i+=2)
    {
        if(a[i]!=a[i-1]) return a[i-1];
    }
    return a[len-1];
}

