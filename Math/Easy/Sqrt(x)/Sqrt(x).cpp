class Solution {
public:
    int mySqrt_Binary(int x) {
        
        if(x<=1) return x;
        long h=x,l=1;
        long long m=0;
        while(h>=l){
            m=l+(h-l)/2;
            if(m*m==x)  return m;
            if(m*m<x) l=m+1;
            else h=m-1;
        }

          return h;

    }       
    int mySqrt_Newton(int x){
        if(x<2) return x;
        long r=x;       
        while(r*r>x)
            r=(x/r+r)/2;
        return r;
    }
};