// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, count = 1;
    cin >> n;

    while(n/2 != 0 ){
		if(n % 2 == 1){
			count++;
		}
		n /= 2;
    }

	cout << count;

	return 0;
}
