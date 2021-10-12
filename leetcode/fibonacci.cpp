class Solution {
public:
    int fib(int n) {
        
      int fibArr[31] = {0};
        if(n<=1)
        {
            fibArr[n] = n;
            return n;
        }
        else
        {
            if(fibArr[n-2] == 0)
                fibArr[n-2] = fib(n-2);
            if(fibArr[n-1] == 0)
                fibArr[n-1] = fib(n-1);
            
            return fibArr[n-2] + fibArr[n-1];
        }
    }
        
};