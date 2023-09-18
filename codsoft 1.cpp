#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,guess;

	srand(time(0));
	num =rand()%100+1;

	cout<<"Guessing Game "<<"\n"<<"\n";
while (1){
	cout<<"Enter number from 1 to 100";

	cin>>guess;
	if(guess>num){
        cout<<"too high"<<"\n";
       continue;
	}

else if(guess<num ){
     cout<<"too low"<<"\n";
     continue;
}

else{
    cout<<"correct number"<<"\n";
    break;
}
}

	return 0;
}



