//There are n people who want to apply for the selections of the basketball team. But the coach has decided to take only n-1 people. Irrespective of the skill of the players, the coach believes that the height of the player is the most important factor. Therefore, by default the shortest of the applicants will be removed. From amongst the line of players (who are in random order), the coach finds it difficult to find the shortest person. Fortunately, you, the person in the front of the line knows programming. He asks you to go find the shortest person in the line and switch places with him.

Formally, swap the first element of the array with the smallest element of the array.

INPUT

The first line of input is n (1≤n≤100000), the number of applicants for the basketball team The second line of input is the heights of the n players (positive numbers) each separated by a space.

OUTPUT

Print the heights of the players in a line after the shortest person has swapped places with the first person.

Sample Input 0

5
3 8 2 5 9
Sample Output 0

2 8 3 5 9 //

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int list[100000], n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++)    scanf("%d",&list[i]);
    unsigned int minIndex = 0, minHeight = list[0];
    for(i=0;i<n;i++)
        if(minHeight > list[i])
        {
            minHeight = list[i];
            minIndex = i;
        }
    int temp = list[minIndex];
    list[minIndex] = list[0];
    list[0] = temp;
    for(i=0;i<n;i++){
         printf("%d ",list[i]);
    }  
    return 0;
}
