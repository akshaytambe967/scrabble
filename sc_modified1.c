#include <stdio.h>
#include <ctype.h>

#define MAX 500

int compute_score(char word[]);

int main()
{
 char word1[MAX],word2[MAX];
 printf("\nEnter the First Word = ");
 scanf("%[^\n]%*c",word1);

 printf("\nEnter the Second Word = ");
 scanf("%[^\n]%*c",word2);


 int score1 = compute_score(word1);
 int score2 = compute_score(word2);

 if (score1 > score2)
 {
  printf("\nPlayer 1 wins!!!!\n\n");
 }

 else if (score1 < score2)
 {
  printf("\nPlayer 2 wins!!!!\n\n");
 }
 else
 {
  printf("\nTie !!!!\n\n");
 }

}

int compute_score(char word[])
{
 int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
 int score = 0;

 for(int i = 0 ; word[i]!='\0' ; i++)
  {
   if(isupper(word[i]))
    {
     score += POINTS[word[i] - 65];//ASCII-> A->65 
    }
   else if(islower(word[i]))
    {
     score += POINTS[word[i] - 97];//ASCII -> a->97        
    }
                
  } 
 return score;
}
