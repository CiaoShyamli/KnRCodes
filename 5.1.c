#define SIZE 1000
int getch(void);
void ungetch(int);

#define bufsize 100
char buf[bufsize];
int bufp = 0;
void main()
{
    int n,string,array[SIZE],getint(int *);

    for(n=0;n<SIZE && getint(&array[n]) !=EOF; n++){
       /* For debug purposes */
       printf(" n = %d, getint %d\n", n, array[n]);
    }
    
    printf("n = %d, getint %d\n", n, array[n]);

    for(string=0;string<=n; string++)
        printf("%d",array[string]);

    _getch();
}

int getint(int *pn)
{
    int c,sign;

    while(isspace(c=getch()))
    ;
    
    if(!isdigit(c) && c !=EOF && c!='+' && c!='-')
    {
        ungetch(c); /* it's not a number */
        return 0;
    }
    
    sign = (c == '-') ? -1 : 1;

    if(c=='+' || c=='-')
        c = getch();
    
    for(*pn = 0; isdigit(c);c=getch())
        *pn = 10 * *pn + (c-'0');
    
    *pn *= sign;
        
    if(c!=EOF)
        ungetch(c);

    return c;
}


int getch(void)
{
    return(bufp > 0)? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= bufsize)
        printf("too many characters\n");
    else
        buf[bufp++]=c;
}
