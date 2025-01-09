//Longest Consecutive Subsequence

int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> hash;
        
        int Lstreak=0,Cstreak=0;
        hash.insert(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(hash.find((arr[i])-1)==hash.end()){
                int currentNum=arr[i];
                Cstreak=1;
                while(hash.find(currentNum+1)!=hash.end()){
                 Cstreak++;
                 currentNum++;
                }
               Lstreak = max(Cstreak,Lstreak); 
            }
            
            
        }
        return Lstreak;
    }