vector<int> countingSort(vector<int> arr) {
    vector<int> out(100,0);
    for(int i=0; i<arr.size(); i++)
    {
        out[arr[i]]++;
    }
    return out;
}

