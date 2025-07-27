#include<limits>
#include<ios>
#include<iostream>
#include<string>

// class Solution {
// public:
//     int climbStairs(int n) {
//         int vetor[45];    
//         for(int i  = 0; i <=45; i++){
//             if(vetor[i] != 0){
//                 std::cout << i << " Step + "; 
//             }
//         }
//     }
// }
class Solution{
    public:
    int climbStairs(int n) {
        if (n <= 3) return n;

        int prev1 = 3;
        int prev2 = 2;
        int cur = 0;

        for (int i = 3; i < n; i++) {
            cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }

        return cur;        
    }
};

int main(){
    Solution p1;
    std::cout << p1.climbStairs(4);
    return 0;
}