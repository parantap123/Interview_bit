vector<int> Solution::plusOne(vector<int> &A) {
    int num=0;
    vector<int> ans;
    int carry=1;
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]==9 && carry==1)
        {
            ans.push_back(0);
            carry=1;
        }
        else
        {
            if(i!=0  || A[i]!=0 || carry!=0)
                ans.push_back(A[i]+carry);
            carry=0;
        }
    }
    if(carry==1)
        ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    while(ans[0]==0)
        ans.erase(ans.begin());
    return ans;
}
