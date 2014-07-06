#include <iostream>

using namespace std;


int main(){
  // Get the first line:                                                                                                                                                             
  int N, T;
  cin >> N >> T;

  // Get the lane widths:                                                                                                                                                            
  int width[N];
  for (int i = 0; i < N; i++){
    cin >> width[i];
  }

  // Get the testcases and process:                                                                                                                                                  
  int entry, exit, min;
  for (int i = 0; i < T; i++) {
    cin >> entry >> exit;
    min = width[entry];
    for (int j = entry; j <= exit; j++) {
      if(width[j] < min) min = width[j];
    }
    cout << min << endl;                                                                                                                                                          
  }
  // cout << endl;                                                                                     
}
