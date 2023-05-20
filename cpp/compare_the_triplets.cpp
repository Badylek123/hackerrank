vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int ap=0, bp=0;
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i]) ap++;
        else if(a[i]<b[i]) bp++;
    }
    return{ap,bp};
}
