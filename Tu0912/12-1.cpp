#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
#define MAX_WORDS 1000

char **foo(char *filename)
{
    char tmp[100];
    char *list[MAX_WORDS];
    int i = 0;
    FILE *fp = fopen(filename,”r”);
    while (fscanf(fp,”% s”, tmp) > 0)
    {
        list[i] = malloc(strlen(tmp) + 1);
        strcpy(list[i++], tmp);
    }
    return list;
}
