// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int main()
// {
//     // Enter your code below
//     int n, m, a, b, c, d;
//     double f;
//     cin >> n >> m;
//     cin >> a >> b;
//     cin >> c >> d;
//     // cout<<n<<m<<a<<b<<c<<d;
//     int arr[3] = {n, a, c};
//     int arr1[3] = {m, b, d};
//     for (int i = 0; i < 3; i++)
//     {
//         switch (arr[i])
//         {
//         case 1:
//             f += (5.99 * arr1[i]);
//             // cout<<f;
//             break;
//         case 2:
//             f += (3.99 * arr[i]);
//             break;
//         case 3:
//             f += (2.49 * arr1[i]);
//             break;
//         case 4:
//             f += (3.29 * arr[i]);
//             break;
//         case 5:
//             f += (1.79 * arr1[i]);
//             break;
//         case 6:
//             f += (4.99 * arr1[i]);
//             break;
//         default:
//             f += (4.99 * arr1[i]);
//             break;
//         }
//     }
//     if (f > 20.00)
//     {
//         std::cout << "Total Cost: $" << (round(f * 0.90 * 100.0) / 100.0);
//     }
//     else
//         cout << "Total Cost: $" << f;

// //     return 0;
// // } 
// #include <iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]==target-nums[j]){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
    
// };
// int main(){
//     int s;
//     cin>>s;
//     vector<int> nums(s);
//     int target;
//     for (int i=0;i<s;i++){
//         cin>>nums[i];
//     }
//     Solution so;
       
//    std::cin>>target;
// std:: vector<int>result=so.twoSum(nums,target);

// cout<<'['<<result[0]<<','<<result[1]<<']';
//    return 0;


// }
#include<iostream>
int main(){
    std::cout<<"hello";
}