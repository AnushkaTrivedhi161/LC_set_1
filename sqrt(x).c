int mySqrt(int x) {
    if(x==0 || x==1)
    return 0;
    int l=1,r=x,result=0;
    while(l<=r)
    {
        long long m;
        m=l+(r-l);
        if(m*m<=x)
        {
            result=m;
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return result;
}
