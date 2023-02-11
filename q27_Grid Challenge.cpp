/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {


for(int i =0;i<grid.size();i++){
    sort(grid[i].begin(),grid[i].end());
}
    
    for(int i=0;i<grid.size()-1;i++)
    {
       for(int j=0;j<grid.size();j++) 
       {
           if (grid[i][j]> grid[i+1][j]) {
             return  "NO";
           }
       }
    }
    return "YES";

}
