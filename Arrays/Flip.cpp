vector<int> Solution::flip(string A) {
    vector<int> B;
    vector<int> ans;
    for(int i=0;i<A.length();i++)
    {
        B.push_back((int)A[i]);
    }
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='1')
        {
            B[i]=-1;
        }
        else
            B[i]=1;
    }
    int max_ending_here=0;
    int max_so_far=0;
    int l=0,r=0,L=0,R=0;
    int flag=0;
    for(int i=0;i<B.size();i++)
    {
        max_ending_here +=B[i];
        if(max_so_far<max_ending_here)
        {
            flag=0;
            R=i;
            ans.clear();
            ans.push_back(L+1);
            ans.push_back(R+1);
            max_so_far=max_ending_here; 
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
            L=i+1;
            //flag=1;
        }
        
    }
    return ans;
    
}
