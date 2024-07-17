class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        if(arr.back()<=x){
        return -1;}
        while(arr[j]>x) j--;
        j++;
        while(j<n){
            if(arr[j]-arr[i]==x&&i!=j) return 1;
            else if(arr[j]-arr[i]>x) i++;
            else{
                j++;
                }
        }
        return -1;
    }
};
