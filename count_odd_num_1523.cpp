#define optimize() ios_base::signc_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2==0 && low%2==0){
            return (high-low)/2;
        }
        else if (high%2!=0 && low%2!=0 || high%2==0 && low%2!=0 || high%2!=0 && low%2==0 ){
        return (high-low)/2+1;
    }
    
   return {};
    }
    
   
};
/*
// OR

#define optimize() ios_base::signc_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
class Solution {
public:
    int countOdds(int low, int high) {
      return (high+1)/2-low/2;     
    
    }
    
   
};
*/
