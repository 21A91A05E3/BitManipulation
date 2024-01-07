   int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int s1=((x>>p1)&((1<<n)-1));
        int s2=((x>>p2)&((1<<n)-1));
        int xr=s1^s2;
        xr=((xr<<p1)|(xr<<p2));
        return x^xr;
    }
