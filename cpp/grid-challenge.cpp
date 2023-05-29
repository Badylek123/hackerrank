string gridChallenge(vector<string> grid) {
    int words=grid.size();
    int len=grid[0].size();
    for(int i=0; i<words; i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<words-1; j++)
        {
            if(grid[j+1][i]<grid[j][i]) return NO;
        }
    }

    return YES;
    
}
