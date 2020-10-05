
#include <iostream>

using namespace std;

int main()
{
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int n = 4;
    int w = 7;
    int t[5][8];
    
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < w+1;  j++ ){
            if(i == 0 || j == 0)
              t[i][j] = 0;
              else t[i][j] = -1;
        }
    }
    
    // for(int i = 0; i < n+1; i++){
    //     for(int j = 0; j < w+1;  j++ ){
    //         cout << t[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < w+1; j++){
            if(wt[i-1] <= j){
                //we can include element or not 
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    cout << "Matrix(TopDown approach) will look like\n";
     for(int i = 0; i < n+1; i++){
        for(int j = 0; j < w+1;  j++ ){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << t[n][w];
    return 0;
}
