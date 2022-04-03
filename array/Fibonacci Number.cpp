//https://leetcode.com/problems/fibonacci-number/
// Fibonacci Number


    int fib(int n) {
        if(n<2)
            return n; 
        int first=0,second=1,sum;
        for(int i=2;i<=n;i++){
            sum=first+second;
            first=second;
            second=sum;
        }
        return sum;
    }
