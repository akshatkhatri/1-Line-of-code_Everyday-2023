class Solution {
public:
    string largestOddNumber(string num) {
        int count=-1;
        if((num[num.size()-1] -'0')%2==1){
          count=num.size()-1;
          return num;
        }
        else{

        for(int i=0;i<num.size();i++){
            if((num[i]-'0')%2==1){
                count=i+1;
            }   
        }
        if(count==-1){
                return "";
            }
            return num.substr(0,count);
        }
    }
};
