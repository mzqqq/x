#include <stdio.h>
#include <string.h>
#include "c.h"


int uue_decode(char* in, int len, char* out):w
{
  char ch[100], e[100], d[100];
  int i, j;
  
  memcpy(ch, in, len);
  printf ("your string->%s\n",ch);
  for(i=0;i<strlen(ch);i++)
  {
    if((ch[i]>='a'&&ch[i]<='x')||(ch[i]>='A'&&ch[i]<='X'))
    {
      e[i]=ch[i]+2;
    }
    else if(ch[i]=='y'||ch[i]=='z'||ch[i]=='Y'||ch[i]=='Z')
    {
      e[i]=ch[i]-24;
    }
    else
    {
      e[i]=ch[i];
    }
  }
  e[i]='\0';
  printf ("after encoding->%s",e);
  for(i=0;i<strlen(ch);i++)
  {
    if((e[i]>='c'&&e[i]<='z')||(e[i]>='C'&&e[i]<='Z')) 
    {
      d[i]=e[i]-2;
    }
    else if(e[i]=='a'||e[i]=='b'||e[i]=='A'||e[i]=='B')
    {
      d[i]=e[i]+24;
    }
    else
    {
      d[i]=e[i];
    }
  }
  d[i]='\0';
  printf ("\nafter decoding->%s",d);
  out = d;
  return len;
}

int main() {
    printf("%s\n", HTML_TEMPLATE);
    uue_decode(HTML_TEMPLATE, out);
    printf("%s\n", out)
  
    return 0;
}
