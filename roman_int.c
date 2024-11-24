int romanToint(char*s){
  int i=0,arr[20],C=0;
  while(*(s+1)!='\0')
  {
    C++;
    switch(*(s+i))
    {
      case 'I':
      {
        arr[i]=1;
        break;
      }
      case 'V':
      {
        arr[i]=5;
        break;
      }
      case 'X':
      {
        arr[i]=10;
        break;
      }
      case 'L':
      {
        arr[i]=50;
        break;
      }
      case 'C':
      {
        arr[i]=100;
        break;
      }
      case 'D':
      {
       arr[i]=500;
       break;
      }
      case 'M':
      {
        arr[i]=1000;
        break;
      }
    }i++;
  }
int j=0,sum=0;
for(j=0;j<C;j++)
{
 if(j+1)!=C && arr[i]<arr[j+1])
   {
      arr[j+1]=arr[j+1]-arr[j];
j++;
 }
sum=sum+arr[j];
}
return sum;
}
   
      
