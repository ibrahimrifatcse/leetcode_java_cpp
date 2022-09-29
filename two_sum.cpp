#include<iostream>
#include<vector>
#define optimize() ios_base::signc_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
using namespace std;
class Solution{
  public:
  vector<int>twoSum(vector<int>&nums,int target){

   for(int i=0;i<nums.size();i++){

   for(int j=i+1;j<nums.size();j++) {
      if(nums[i]+nums[j]==target) {return {i,j};}

   }

   }
    return {};
  }

};
int main(){
Solution s;
vector<int>v;
v={2,7,11,15};
vector<int> result=s.twoSum(v,9);
for(int i: result){
cout<<i<<"\n";
}
return 0;



}
