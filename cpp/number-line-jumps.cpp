string kangaroo(int x1, int v1, int x2, int v2) {
    int i=0;
    while(x1+v1*i<x2+v2*i) i++;
    if(x1+v1*i==x2+v2*i) return YES;
    else                 return NO;
}
