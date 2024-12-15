int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i=digitsSize-1,f=0;
   int *returnsi;
    *returnSize=digitsSize;
    while(i>=0)
    {
        if(*(digits+i)<9)
        {
            *(digits+i)=*(digits+i)+1;
            f=1;
            break;
        }
        else
        {
            *(digits+i)=0;
            i--;
        }
    }
    if(f==1)
    {
        returnsi=(int*)malloc(sizeof(int)*digitsSize);
        for(int j=0;j<digitsSize;j++)
        {
            *(returnsi+j)=*(digits+j);
        }
        return returnsi;
    }
    else
    {
        returnsi=(int*)malloc(sizeof(int)*(digitsSize+1));
        *returnsi=1;
        *returnSize=digitsSize+1;
        for(int j=0;j<=digitsSize-1;j++){
            *(returnsi+j+1)=*(digits+j);
        }
        return returnsi;
    }
}
