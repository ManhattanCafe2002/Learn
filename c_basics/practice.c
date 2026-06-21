#include<stdio.h>
#include<string.h>


void rotate(unsigned int*, int);
void rotate_real(unsigned int*, int);
char* itobs(unsigned int, char*);
void show_bstr(const char*);

int main(void)
{
    unsigned int n;
    int m;
    char binstr[sizeof(int) * 8 + 1];
    
    printf("Enter an unsigned integer: ");
    scanf("%u", &n);
    itobs(n,binstr);
    printf("Original value: %d\n", n);
    printf("%d is ", n);
    show_bstr(binstr);


    printf("Enter the number of bits to rotate: ");
    scanf("%d", &m);
    rotate_real(&n, m);
    printf("Rotated value: %d\n", n);
    itobs(n, binstr);
    printf("%d is ", n);
    show_bstr(binstr);
    return 0;
}


//Im a idoit to write this code.
void rotate(unsigned int *n, int bits)
{
    int i;
    static int size=8*sizeof(*n);
    unsigned int mask=0;
    unsigned int temp=*n;
    if (bits >=0)
    {
        for(i=0; i<bits; i++)
        {
            mask |=(1<<i);
            
        }
        temp &=mask;
        *n >>=bits;
        temp<<=size-bits;
        *n |=temp;
    }
    else if (bits < 0)
    {
        for(i=0; i<-bits; i++)
        {
            mask |=(1<<(size-1-i));
        }
        temp &=mask;
        *n <<=(-bits);
        temp>>=size+bits;
        *n |=temp;
    }
    else
        printf("Invalid input.\n");
}
//and this
void rotate_1(unsigned int *n, int bits)
{
int i;
static int size=8*sizeof(*n);
if (bits >=0)
    {
*n=(*n>>bits)|(*n<<size-bits);
    }
else if (bits < 0)
    {
*n=(*n<<(-bits))|(*n>>size-(-bits));
    }
else
printf("Invalid input.\n");
} 

// Real roation function without using loops.
void rotate_real(unsigned int *n, int bits)
{
    int size = 8 * sizeof(*n);
    unsigned int val = *n;

    bits %= size;          
    if (bits < 0)
        bits += size;      
    if (bits == 0)
        return;            

    *n = (val >> bits) | (val << (size - bits));
}

char* itobs(unsigned int n, char * str)
{
    int i;
    static int size = 8*sizeof(n);
    static int mask=1;
    unsigned int temp=n;
    for (i=size-1; i>=0; i--)
    {
        str[i]=(temp&mask)+'0';
        temp>>=1;
    };
    str[size] = '\0';
    return str;
}

void show_bstr(const char * str)
{
    int i = 0;
	
    while (str[i])  /* not the null character */
    {
        putchar(str[i]);
        if(++i % 4 == 0 && str[i])
            putchar(' ');
    }
}

