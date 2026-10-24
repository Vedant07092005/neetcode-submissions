class Solution{	
public:		
    string largestOddNumber(string num){
        for (int i = static_cast<int>(num.length()) -1; i >= 0; --i){
            int digit = num[i] - '0';
            
            if (digit % 2 != 0){
                string ans = num.substr(0, i + 1);

                int pos = ans.find_first_not_of('0');

                if (pos == string::npos){
                    return "0";
                } 
                return ans.substr(pos);
            }
        }
        return "";
    }
};