#include <iostream>
#include <string>

using namespace std;
int main() {
  int rows= 1,a=0,j=0,spaces=0,stars=0;
  cout<<"Enter the number of rows desired to make a diamond pattern(0 to quit): ";
  cin>>rows;
  
  while(rows>0) {
    for(a=0;a<rows;a++){
      if(a<rows/2){
        if(rows%2==1) spaces=rows/2-a,stars=2*a +1;
        else
        spaces=rows/2-a-1,stars=2*a +1;
        for(j=0;j<spaces;j++) cout<<" ";
        for(j=0;j<stars;j++) cout<<"*";
        cout<<endl;}
        else {
          spaces=a-rows/2,stars=(2*rows)-(2*a +1);
          for(j=0;j<spaces;j++)
          cout<<" ";
          for(j=0;j<stars;j++)
          cout<<"*";
          cout<<endl;}
        }
        cout<<endl;
        cout<<"Enter the number of rows desired to make a diamond pattern(0 to quit): ";
        cin>>rows;
      }
    }

/* sample output:
 Enter the number of rows desired to make a diamond pattern(0 to quit): 3
  *
 ***
  *

 Enter the number of rows desired to make a diamond pattern(0 to quit): 5
   *
  ***
 *****
  ***
   *

 Enter the number of rows desired to make a diamond pattern(0 to quit): 8
    *
   ***
  *****
 *******
 *******
  *****
   ***
    *

 Enter the number of rows desired to make a diamond pattern(0 to quit): 10
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *

 Enter the number of rows desired to make a diamond pattern(0 to quit): 0
 Program ended with exit code: 0
 */
