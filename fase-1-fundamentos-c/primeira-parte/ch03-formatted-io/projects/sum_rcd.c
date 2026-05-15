/*******************************************************************
 * Asks the user to enter the numbers from 1 to 16 (in any order)  *
 * and then displays the numbers in a 4 by 4 arrangement, followed *
 * by the sums of the rows, columns and diagonals                  *
 *******************************************************************/

 #include<stdio.h>

 int main(void)
 {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
            n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);
    
    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d/n",
            n1+n2+n3+n4, n5+n6+n7+n8, n9+n10+n11+n12, n13+n14+n15+n16,
            n1+n5+n9+n13, n2+n6+n10+n14, n3+n7+n11+n15, n4+n8+n12+n16,
            n1+n6+n11+n16, n4+n7+n10+n13);

    return 0;
 }