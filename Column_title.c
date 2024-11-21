int titleToNumber(char* columnTitle) {
    int res=0;
    while(*columnTitle)
    {
        res=res*26;
        res=res+(*columnTitle-'A'+1);
        columnTitle++;
    }
    return res;
    
}
