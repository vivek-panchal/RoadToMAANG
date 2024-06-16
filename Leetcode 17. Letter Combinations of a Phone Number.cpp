class Solution {
public:
    vector<string> result;
    void solve(string digits, string output, string mapping[], int index){
        if(index>=digits.length()){
            result.push_back(output);
            return;
        }

        int number= digits[index]-'0';

        string temp=mapping[number];
        for(int i=0;i<temp.length();i++){
            output.push_back(temp[i]);
            solve(digits,output,mapping,index+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string output;
        if(digits.length()==0){
            return result;
        }

        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,output,mapping,0);
        return result;
    }
};
