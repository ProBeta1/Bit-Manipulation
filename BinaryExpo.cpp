long long biny(long long int A, long long B,long long M)
{
   if(B==0)
        return 1;                    //As pow(A,0) = 1
   if(B % 2 == 0 )
   {
        long long int x = biny(A,(B-1)/2,M);
        x = (x*x)% M;
        return (x*A)& M;
    }
    else
    {
        long long int y = biny(A,B/2,M);
        return (x*x) % M;
     }
}
