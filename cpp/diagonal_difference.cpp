int diagonalDifference(vector<vector<int>> arr) {
    int diag1=0, diag2=0;
    int len=arr.size()-1;
    for(int i=0; i<arr.size(); i++)
    {
        diag1+=arr[i][i];
        diag2+=arr[len-i][i];
    }
    return abs(diag1-diag2);
}
int abs(int n)
{
    if(n>0) return n; else return -n;
}
