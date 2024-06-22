void reverseArray(vector<int> &arr , int m){
        // trying with swap method
        int l = arr.size();
        int brr[l];

        for(int i = 0;i<l;i++){
            brr[i] = arr[i];
        }

        for(int i = m+1 , j = l-1 ; i<=l-1 && j >= m+1 ; i++ , j-- ){
            arr[i] = brr[j];
        }
        
}