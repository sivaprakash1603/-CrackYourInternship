class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    if(m==1) return 0;
    sort(a.begin(),a.end());
    long long mind=a[m-1]-a[0];
    for(int i=0;i<n-m+1;++i){
        mind=min(mind,a[m+i-1]-a[i]);
    }
    return mind;
    }   
};
