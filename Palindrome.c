bool isPalindrome(int x) {
    int rem,sum=0,n=x;
    if(x>0)
    {
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==x)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    else
    {
        return false;
    }
}
