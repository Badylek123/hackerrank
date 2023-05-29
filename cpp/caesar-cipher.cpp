bool isBetween(int x, int a, int b)
{
    if(a<=x&&x<=b||a>=x&&x>=b) return true;
    return false;
}


string caesarCipher(string s, int k) {
    for(int i=0; i<s.size(); i++)
    {
        if (isBetween(s[i], 65, 90))
        s[i]=(s[i]+k-65)%26+65;
        else if (isBetween(s[i], 97, 122))
        s[i]=(s[i]+k-97)%26+97;
    }
    return s;
}
