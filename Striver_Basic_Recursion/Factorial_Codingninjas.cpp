long long fac1 = 1;
long long factorial = 1;

void calculate(long long x, vector<long long> &ans){
    
    if (fac1 <= x){
        factorial = fac1*factorial;
        if (factorial <= x){
            ans.push_back(factorial);
            fac1++;
            calculate(x,ans);
        }
    }

}



vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    
    vector<long long> v;
    calculate(n, v);    
    return v;
}