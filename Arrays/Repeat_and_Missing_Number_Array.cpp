vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long sumA=0;
    long long sqA=0;
    long long sq=0;
    long long sum=0;
    //long long mult=1;
    long long n=A.size();
    vector<int> ans;
    long long a;
    long long b;
    for(int i=0;i<A.size();i++)
    {
        sumA +=A[i];
        sqA  +=(long long)A[i]*(long long)A[i];
    }
    for(int i=1;i<=A.size();i++)
    {
        sum +=i;
        sq  +=(long long)i*(long long)i;
    }
    long long x =sum-sumA;//b-a
    long long y =sq-sqA;//b2-a2
    long long z =y/x;//b+a
    b=(x+z)/2;
    a=(z-x)/2;
    ans.push_back((int)a);
    ans.push_back((int)b);
    return ans;
}
