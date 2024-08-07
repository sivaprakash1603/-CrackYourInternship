int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int i=0;
        while(arr[i]<=0){
            i++;
        }
        if(i>n-1)
        return 1;
        int j=1;
        for(;j<n-i&&i<n;j++,i++){
            if(arr[i]!=j){
            return j;}
        }
        return j;
        
    } 
