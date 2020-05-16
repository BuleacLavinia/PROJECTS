#include<iostream>

using namespace std;

char s, t[2500];
int n, k=0;

int main() {
	cout<<"SeCODEcret. Code in Secret.\n\n\n";
	cout<<"Welcome to SeCODEcret.\nThis app will encrypt your text, shifting your letters with exactly as many positions as you desire.\n";
	cout<<"\nFirstly, we kindly ask you to give us the number of letters you want to skip in order to encrypt the text: ";
	cin>>n;
	cout<<"\n\nNOTICE\nThe text must have maximum 2500 characters!\nNow, please enter your text below, followed by '~': \n";
	while(s!='~') {
		cin>>s;
		if(s!='~') {
			if(s+n>255)
				t[k++]=0;
			else
				t[k++]=s+n;
		} else
			cout<<"\nProceeding.. please wait\n.\n.\n.\n\n\n\n";
	}
	cout<<"We have succesfully encrypted your text. Here it is: \n";
	for(int i=0; i<k; i++)
		if(t[i])
			cout<<t[i];
		else
			cout<<"(oops, error)";
	cout<<"\n\n\n";
}
