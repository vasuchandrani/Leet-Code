// // 27/7/2024
// // Floyd warshall algo
// #include <bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<vector>
// #include<climits>
// using namespace std;

// void FloydWarshall(vector<vector<long long>>& adjMatrix, vector<char>& original, vector<char>& changed, vector<int>& cost){

//     for(int i=0;i<original.size();i++){
//         int s = original[i] - 'a';
//         int t = changed[i] - 'a';

//         adjMatrix[s][t] = min(adjMatrix[s][t],(long long)cost[i]);
//     }

//     //Apply floyd Warshall
//     for(int k=0;k<26;k++){
//         for(int i=0;i<26;i++){
//             for(int j=0;j<26;j++){
//                 adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
//             }
//         }
//     }
// }

// class Solution {
// public:
//     long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        
//         vector<vector<long long>> adjMatrix(26, vector<long long>(26, INT_MAX));

//         // update adj Matrix with shortest path using Floyd Warshall
//         FloydWarshall(adjMatrix, original, changed, cost); 

//         long long ans = 0;

//         for(int i=0; i<source.length(); i++){
//             if(source[i] == target[i]){
//                 continue;
//             }
//             if(adjMatrix[source[i]-'a'][target[i]-'a'] == INT_MAX){
//                 return -1;
//             }

//             ans += adjMatrix[source[i]-'a'][target[i]-'a'];
//         }
//         return ans;
//     }
// };


#include <iostream>
#include <string>
using namespace std;
 
// Driver code
int main()
{
    string str2 = "1234567890M5657";
    string s = str2.substr(11,12);
    int myint2 =stoi(s);
        
 
    cout<<myint2<<endl;
    if (myint2 == 56){
        cout<<"it's work ";
    }
    return 0;
}