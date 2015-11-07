#include "simhash.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *a = "I";
    char *b = "like";
    char *c = "you";
    char *d = "baby";

    char *x = "don't";
    char *y = "like";
    char *z = "you";
    char *w = "baby";

    char *test1[4];
    char *test2[4];
    test1[0] = a, test1[1] = b, test1[2] = c, test1[3] = d;
    test2[0] = x, test2[1] = y, test2[2] = z, test2[3] = w;
    ul_int hash1 = sh_simhash(test1, 4);
    ul_int hash2 = sh_simhash(test2, 4);
    float similarity = 0.0f;
    if(hash1 < hash2)
        similarity = hash1 * 1.0f / hash2;
    else
        similarity = hash2 * 1.0f / hash1;
    printf("hash1=%x, hash2=%x, similarity=%f\n", hash1, hash2, similarity);
    exit(0);
}
