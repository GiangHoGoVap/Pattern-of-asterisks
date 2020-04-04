/*
*        *
**      **
***    ***
****  ****
**********
*/
#include <iostream>
using namespace std;
int main(){
	int N,i,j;
	
	do {
		cout << "Input the number of rows: ";
		cin >> N;
		if (!cin.good()){
			cin.clear();
			cin.ignore(1024,'\n');
		}
	} while (N<=0);
		
	for(i=1;i<=N;i++){
    		for(j=1;j<=N;j++){
    			if(j<=i){
        			cout<<"*";
      			}
      			else{
       				cout<<" ";
      			} 
    		}

    		for(j=N;j>=1;j--){
      			if(j<=i){
       				cout<<"*";
      			}
      			else{
       				cout<<" ";
      			}
    		}
    	
 		cout << "\n" ;
 	}
 	
	return 0;
}
	

