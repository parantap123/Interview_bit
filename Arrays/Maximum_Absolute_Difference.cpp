int Solution::maxArr(vector<int> &A) {
    vector<int> plus;
    vector<int> minus;
    for(int i=0;i<A.size();i++)
    {
        plus.push_back(A[i]+i);
        minus.push_back(A[i]-i);
    }
    int min1=INT_MAX;
    int max1=INT_MIN;
    int min2=INT_MAX;
    int max2=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        if(min1>plus[i])
            min1=plus[i];
        if(max1<plus[i])
            max1=plus[i];
        if(min2>minus[i])
            min2=minus[i];
        if(max2<minus[i])
            max2=minus[i];    
    }
    return max(max1-min1,max2-min2);
}
