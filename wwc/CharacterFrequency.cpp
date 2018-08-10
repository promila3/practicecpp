
#include <iostream>
#include <string>
using namespace std;


void CalcFreq(const char* input)
{
    int count[26] = {};
    
   /* for(auto ch=  input.begin(); ch != input.end(); ++ch)
    {
      count[*ch - 'a'] +=1 ;   
    } */
    
    for(; *input != '\0'; input++)
    {
      count[*input - 'a']++ ;   
    }
    
    int j = 0;
    for(auto i: count)
    {
        cout << char(j++ + 'a') << i << endl; 
    }
}
int main()
{
   char* input = "donotworrybehappy";
   
  CalcFreq(input);
  
}

//http://cpp.sh/4bev3
