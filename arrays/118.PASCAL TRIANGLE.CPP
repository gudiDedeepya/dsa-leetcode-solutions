class Solution {
public:
vector<int> generaterow(int row){
    int ans=1;
    vector<int>rows;
    rows.push_back(1);
    for( int i=1;i<row;i++){
               ans=ans*(row-i);
               ans=ans/i;
               rows.push_back(ans);
    }
    return rows;
}
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>triangle;
         for(int i=1;i<=numRows;i++){
            triangle.push_back(generaterow(i));
         }
         return triangle;
    }

};