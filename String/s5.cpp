// valid palendrome

#include <bits/stdc++.h>
using namespace std;
bool ValidPalindrome(char word[])
{

    int start = 0;
    int end = strlen(word)-1;

    while (start <= end)
    {
        if (word[start] != word[end])
        {
            cout << "Not a valid palindrome";
            return false;
            
        }

        start++;
        end--;
           
    }

    cout<<"It is a valid palindrome";
      return true;
}       

    
   

   

  


int main()
{

    char word[] = "moam";

     ValidPalindrome(word) ;
    

    return 0;
}