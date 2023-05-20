void plusMinus(vector<int> arr) {
    float pCount=0, nCount=0, zCount=0, len=(float)arr.size();
    for(int i=0; i<len; i++)
    {
        if(arr[i]>0)        pCount++;
        else if(arr[i]<0)   nCount++;
        else                zCount++;
    }
    float ratio_pos=pCount/len;
    float ratio_neg=nCount/len;
    float ratio_zero=zCount/len;

    printf(%.6fn%.6fn%.6fn, ratio_pos, ratio_neg, ratio_zero);
}
