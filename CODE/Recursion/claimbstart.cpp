#include <iostream>
using namespace std;

int climbstar(int n){
      if(n==1 || n==0){
            return 1;
      }
      int answer = climbstar(n-1) + climbstar(n-2);
      return answer;
}
int main() {

	int n;
	cout << "Enter the star that you want to calculate the no of ways to reach that particular star " << endl;
	cin >> n;
      int ans = climbstar(n);
      cout<<"answer is :"<<ans<<endl;
      return 0;
}
