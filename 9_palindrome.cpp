#define ll long long
#define optimize() ios_base::signc_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
class Solution {
public:
    bool isPalindrome(int x) {
        
         if(x<0) return false;
        
        ll a=0,b=x;
        while(b){
            a=a*10+b%10;
            b/=10;
        }
        return a==x;
    }
};
