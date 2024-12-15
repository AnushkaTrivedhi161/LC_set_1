int mySqrt(int x)
{
  long  int i,p=1,C;
    if(x==1)return 1;
     else if(x==2|| x==3)
        {
            return 1;
        }
    for(i=1;i<=x;i++)
    {
        p=i*i;
        if(p==x)
        {
            return i;
        }
        else if(p>x)
        {
            return --i;
        }
    }
    return 0;
}
