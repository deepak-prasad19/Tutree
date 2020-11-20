// C++ program to search all anagrams of a pattern in a text 
#include<iostream> 
#include<cstring> 
#define MAX 256 
using namespace std; 
  
// This function returns true if contents of arr1[] and arr2[] 
// are same, otherwise false. 
bool compare(char arr1[], char arr2[]) 
{ 
    for (int i=0; i<MAX; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
    return true; 
} 
  
// This function search for all permutations of pat[] in txt[] 
void search(char *pat, char *txt) 
{ 
    int M = strlen(pat), N = strlen(txt); 
    char str[M];

    // countP[]:  Store count of all characters of pattern 
    // countTW[]: Store count of current window of text 
    char countP[MAX] = {0}, countTW[MAX] = {0}; 
    for (int i = 0; i < M; i++) 
    { 
        str[i] = txt[i];
        (countP[pat[i]])++; 
        (countTW[txt[i]])++; 
    } 
  
    // Traverse through remaining characters of pattern 
    for (int i = M; i < N; i++) 
    { 
        // Compare counts of current window of text with 
        // counts of pattern[] 
        if (compare(countP, countTW)) 
            printf("Substring '%s' present at Index %d\n", str, (i - M));
  
        // Add current character to current window 
        (countTW[txt[i]])++; 
  
        // Remove the first character of previous window 
        countTW[txt[i-M]]--;

        // Remove the first character of str and take new character at last 
        str[0] = str[1];
        str[1] = str[2];
        str[2] = txt[i];
    } 
  
    // Check for the last window in text 
    if (compare(countP, countTW)) 
        printf("Substring '%s' present at Index %d\n", str, (N - M)); 
} 
  
/* Driver program to test above function */
int main() 
{ 
    char txt[] = "XYYZXZYZXXYZ"; 
    char pat[] = "XYZ"; 

    // For user input
    /*  char txt[MAX];
        char pat[MAX];
        scanf("%s",txt);
        scanf("%s",pat);
    */
    search(pat, txt); 
    return 0; 
} 