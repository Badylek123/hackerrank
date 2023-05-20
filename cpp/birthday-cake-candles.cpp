
int birthdayCakeCandles(vector<int> candles) {
    int max=0;
    int count_max=1;
    for(int i=0; i<candles.size(); i++)
    {
        if(max<candles[i])
        {
            count_max=1;
            max=candles[i];
        }
        else if(max==candles[i])    count_max++;
    }
    return count_max;
}
