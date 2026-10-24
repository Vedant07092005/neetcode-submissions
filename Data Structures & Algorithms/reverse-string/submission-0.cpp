class Solution{	
	public:		
		void reverseString(vector<char>& s){
			int high = static_cast<int>(s.size()) -1;
            int low = 0;
            while (high > low){
                swap(s[high], s[low]);
                high--;
                low++;
            }
		}
};