#include <iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
 

void printSentence(string str)
{
    
    char nums[][6]
        = { "", "", "ABC2", "DEF3", "GHI4","JKL5", "MNO6", "PQRS7", "TUV8","WXYZ9" };
 
    
    int i = 0;
    while (str[i] != '\0') {
 
        
        if (str[i] == '.') {
            i++;
            continue;
        }
 
        
        int count = 0;
 
        
        while (str[i + 1] && str[i] == str[i + 1]) {
 
            
            if (count == 3 && ((str[i] >= '2' && str[i] <= '6') || (str[i] == '8')))
                break;
 
            
            else if (count == 4 && (str[i] == '7' || str[i] == '9'))
                break;
            count++;
            i++;
 
            
            if (str[i] == '\0')
                break;
        }
 
        
        if (str[i] == '7' || str[i] == '9') {
            cout << nums[str[i] - 48][count % 5];
        }
 
       
        else {
            cout << nums[str[i] - 48][count % 4];
        }
        i++;
    }
}
 

int main()
{
	cout<<"keypads "<<endl;
	cout<<"1 \t"<<"2 abc \t"<<"3 def \t"<<endl;
	cout<<"4 ghi \t"<<"5 jkl \t"<<"6 mno \t"<<endl;
	cout<<"7 pqrs\t"<<"8 tuv \t"<<"9 wxyz \t"<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"\n";
	
	string str;
	cout<<"Enter the series for the input: ";
	cin>>str;
	
    printSentence(str);
    return 0;
}
