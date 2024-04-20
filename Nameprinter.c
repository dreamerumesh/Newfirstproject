#include<stdio.h>
#include<string.h>
#include <unistd.h>
#include <sys/ioctl.h>
void main(){
 int len;
char name[1000];
printf("Enter any string:- ");
fgets(name,sizeof(name),stdin);
// to get terminal width
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int terminal_width = w.ws_col;
    //printf("Terminal width: %d\n", terminal_width);
    int tersize = terminal_width/11;
len = strlen(name);
printf("Code for this output is written by umesh (you can comment this)\n"); 
// to convert given string from smaller to capital 
int p = 0;
    while (name[p] != '\0') {
        if (name[p] >= 'a' && name[p] <= 'z') {
            name[p] = name[p] - 32; // Subtracting 32 converts lowercase to uppercase in ASCII
        }
        p++;
    }

int  a1=0,b1=0,n,k=1,m=0,m1=0,m2=0,m3=0,m4=0;
for(int v=0;v<=len;v=v+tersize)
        {
             // t0 print first line
             k=1;
            for(int i = 1;i<=tersize;i++){
             for(int l=1;l<=5;l++)
                {
                for(int j=1;j<=1;j++)
                    {   b1=0;
                     if(name[m]=='A')
                        {n=m-v;
                        
                        b1 = (k==5*n+n+1+2);
                        } 
                    else if(name[m]=='B')
                        {n=m-v;
                        b1 = (k<=(5*n+n+1+3));}
                    else if(name[m]=='C')
                        {n=m-v;
                        b1 = ( (k==5*n+n+1+2)||(k==5*n+n+1+3)||(k==5*n+n+1+4)||(k==5*n+n+1+1));}  
                   else if(name[m]=='D')
                        {n=m-v;
                        b1 =  ((k==5*n+n+1)|| (k==5*n+n+1+1)||(k==5*n+n+1+2)||(k==5*n+n+4));}  
                    else if(name[m]=='E')
                        {n=m-v;
                        b1 =( k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m]=='F')
                        {n=m-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m]=='G')
                        {n=m-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+4));}  
                    else if(name[m]=='H')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='I')
                        {n=m-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m]=='J')
                        {n=m-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m]=='K')
                        {n=m-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+5));}  
                    else if(name[m]=='L')
                        {n=m-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m]=='M')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='N')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+5);}  
                    else if(name[m]=='O')
                        {n=m-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+3));}  
                    else if(name[m]=='P')
                        {n=m-v;
                        b1 = (k>=5*n+n+1 && k<=5*n+n+1+3);}  
                    else if(name[m]=='Q')
                        {n=m-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+2));}  
                    else if(name[m]=='R')
                        {n=m-v;
                        b1 = ((k>=5*n+n+1) && (k<=5*n+n+1+3));}  
                    else if(name[m]=='S')
                        {n=m-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+4));}  
                    else if(name[m]=='T')
                        {n=m-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m]=='U')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='V')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='W')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='X')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='Y')
                        {n=m-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m]=='Z')
                        {n=m-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}                                                                                         
                    else
                        continue;
                        
                    }

                        if(b1!=0)
                        printf("* ");
                    
                        else
                        printf("  ");       
                    k++;
                } 
                printf(" ");
            k++;     
            m++;
            } 
            printf("\n"); 
        // to print second line                   
        b1=0,n,k=1;
        for(int i = 1;i<=tersize;i++)
            
            { if(m1==len)
            break;
            
            for(int l=1;l<=5;l++)
                {
                for(int j=1;j<=1;j++)
                    { b1=0;
                    if(name[m1]=='A')
                        {n=m1-v;
                        b1 = (k==5*n+n+1+1||k==5*n+n+1+3);
                        } 
                    else if(name[m1]=='B')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}
                    else if(name[m1]=='C')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='D')
                        {n=m1-v;
                        b1 = ((k==5*n+n+1)|| (k==5*n+n+1+4));}  
                    else if(name[m1]=='E')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='F')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='G')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='H')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='I')
                        {n=m1-v;
                        b1 = (k==5*n+n+1+2) ;}  
                    else if(name[m1]=='J')
                        {n=m1-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m1]=='K')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+3);}  
                    else if(name[m1]=='L')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='M')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+2||k==5*n+n+4||k==5*n+n+5);}  
                    else if(name[m1]=='N')
                        {n=m1-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+2||k==5*n+n+5));}  
                    else if(name[m1]=='O')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='P')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+5);}  
                    else if(name[m1]=='Q')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+3);}  
                    else if(name[m1]=='R')
                        {n=m1-v;
                        b1 =  (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='S')
                        {n=m1-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m1]=='T')
                        {n=m1-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m1]=='U')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='V')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='W')
                        {n=m1-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m1]=='X')
                        {n=m1-v;
                        b1 = (k==5*n+n+2||k==5*n+n+1+3);}  
                    else if(name[m1]=='Y')
                        {n=m1-v;
                        b1 = (k==5*n+n+2||k==5*n+n+1+3);}  
                    else if(name[m1]=='Z')
                        {n=m1-v;
                        b1 = (k==5*n+n+4);} 
                    
                        else
                        continue;
                        
                    }
                    // printf("%d ",a1);
                    if (b1!=0)
                        printf("* ");
                        else
                        printf("  ");       
                    k++;
                }  
                printf(" ");
            k++;       
            m1++;
            }    
        printf("\n") ;
        // to print third line               
        b1=0,n,k=1;
        for(int i = 1;i<=tersize;i++)
            
            {if(m2==len)
            break;
            
            
            for(int l=1;l<=5;l++)
                {
                for(int j=1;j<=1;j++)
                    { b1=0;
                    if(name[m2]=='A')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);
                        } 
                    else if(name[m2]=='B')
                        {n=m2-v;
                        b1 = (k>=5*n+n+1 && k<=5*n+n+1+3);}
                    else if(name[m2]=='C')
                        {n=m2-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m2]=='D')
                        {n=m2-v;
                        b1 = ((k==5*n+n+1)|| (k==5*n+n+1+4));}  
                    else if(name[m2]=='E')
                        {n=m2-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+3);}  
                    else if(name[m2]=='F')
                        {n=m2-v;
                        b1 = ((k>=5*n+n+1)&&(k<=5*n+n+1+2));}  
                    else if(name[m2]=='G')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+3||k==5*n+n+1+2||k==5*n+n+1+4);}  
                    else if(name[m2]=='H')
                        {n=m2-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m2]=='I')
                        {n=m2-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m2]=='J')
                        {n=m2-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m2]=='K')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+1||k==5*n+n+1+2);}  
                    else if(name[m2]=='L')
                        {n=m2-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m2]=='M')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+3||k==5*n+n+5);}  
                    else if(name[m2]=='N')
                        {n=m2-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+3)||(k==5*n+n+5)) ;}  
                    else if(name[m2]=='O')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+5);}  
                    else if(name[m2]=='P')
                        {n=m2-v;
                        b1 = (k>=5*n+n+1 && k<=5*n+n+1+3);}  
                    else if(name[m2]=='Q')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+2||k==5*n+n+4);}  
                    else if(name[m2]=='R')
                        {n=m2-v;
                        b1 = ((k>=5*n+n+1) && (k<=5*n+n+1+3));}  
                    else if(name[m2]=='S')
                        {n=m2-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+3));}  
                    else if(name[m2]=='T')
                        {n=m2-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m2]=='U')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m2]=='V')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m2]=='W')
                        {n=m2-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4||k==5*n+n+3);}  
                    else if(name[m2]=='X')
                        {n=m2-v;
                        b1 = (k==5*n+n+3);}  
                    else if(name[m2]=='Y')
                        {n=m2-v;
                        b1 = (k==5*n+n+3);}  
                    else if(name[m2]=='Z')
                        {n=m2-v;
                        b1 = (k==5*n+n+3);} 
                        else
                        continue;
                        }
                    if (b1!=0)
                        printf("* ");
                        else
                        printf("  ");       
                    k++;
                } 
                printf(" "); 
            k++;       
            m2++;
            }                
        printf("\n");
        // to print fourth line
        b1=0,n,k=1;
        for(int i = 1;i<=tersize;i++)
          {
            for(int l=1;l<=5;l++)
                {
                for(int j=1;j<=1;j++)
                    { b1=0;
                    if(name[m3]=='A')
                        {n=m3-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);
                        } 
                    else if(name[m3]=='B')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}
                    else if(name[m3]=='C')
                        {n=m3-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m3]=='D')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)|| (k==5*n+n+1+4));}  
                    else if(name[m3]=='E')
                        {n=m3-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m3]=='F')
                        {n=m3-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m3]=='G')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+5));}  
                    else if(name[m3]=='H')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m3]=='I')
                        {n=m3-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m3]=='J')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1+2)||(k==5*n+n+1));}  
                    else if(name[m3]=='K')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+4));}  
                    else if(name[m3]=='L')
                        {n=m3-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m3]=='M')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m3]=='N')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+4)||(k==5*n+n+5));}  
                    else if(name[m3]=='O')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m3]=='P')
                        {n=m3-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m3]=='Q')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+4));}  
                    else if(name[m3]=='R')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+3);}  
                    else if(name[m3]=='S')
                        {n=m3-v;
                        b1 = (k==5*n+n+5);}  
                    else if(name[m3]=='T')
                        {n=m3-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m3]=='U')
                        {n=m3-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m3]=='V')
                        {n=m3-v;
                        b1 = (k==5*n+n+2||k==5*n+n+1+3) ;}  
                    else if(name[m3]=='W')
                        {n=m3-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+2)||(k==5*n+n+5)||(k==5*n+n+4));}  
                    else if(name[m3]=='X')
                        {n=m3-v;
                        b1 = (k==5*n+n+2||k==5*n+n+1+3);}  
                    else if(name[m3]=='Y')
                        {n=m3-v;
                        b1 = (k==5*n+n+3);}  
                    else if(name[m3]=='Z')
                        {n=m3-v;
                        b1 = (k==5*n+n+2);} 
                        else
                        continue;
                    }
                        if (b1!=0)
                        printf("* ");
                        else
                        printf("  ");       
                    k++;
                }  
                printf(" ");
            k++;       
            m3++;
            }                
        printf("\n");
        // to print fiveth line
        b1=0,n,k=1;
        for(int i = 1;i<=tersize;i++)
            
            {
            for(int l=1;l<=5;l++)
                {
                for(int j=1;j<=1;j++)
                    { b1=0;
                    if(name[m4]=='A')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==(5*n+n+1+4));
                        } 
                    else if(name[m4]=='B')
                        {n=m4-v;
                        b1 = (k<=(5*n+n+1+3));}
                   else if(name[m4]=='C')
                        {n=m4-v;
                        b1 = ((k==5*n+n+1+2)||(k==5*n+n+1+3)||(k==5*n+n+1+4)||(k==5*n+n+1+1)) ;}  
                   else if(name[m4]=='D')
                        {n=m4-v;
                        b1 = ((k==5*n+n+1)|| (k==5*n+n+1+1)||(k==5*n+n+1+2)||(k==5*n+n+4));}  
                    else if(name[m4]=='E')
                        {n=m4-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4) ;}  
                    else if(name[m4]=='F')
                        {n=m4-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m4]=='G')
                        {n=m4-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+4));}  
                    else if(name[m4]=='H')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4) ;}  
                    else if(name[m4]=='I')
                        {n=m4-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m4]=='J')
                        {n=m4-v;
                        b1 = (k==5*n+n+2||k==5*n+n+1+2) ;}  
                    else if(name[m4]=='K')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m4]=='L')
                        {n=m4-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);}  
                    else if(name[m4]=='M')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m4]=='N')
                        {n=m4-v;
                        b1 = ((k==5*n+n+1)||(k==5*n+n+5));}  
                    else if(name[m4]=='O')
                        {n=m4-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+3));}  
                    else if(name[m4]=='P')
                        {n=m4-v;
                        b1 = (k==5*n+n+1);}  
                    else if(name[m4]=='Q')
                        {n=m4-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+2)||(k==5*n+n+1+4));}  
                    else if(name[m4]=='R')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m4]=='S')
                        {n=m4-v;
                        b1 = ((k>=5*n+n+1)&&(k<=5*n+n+1+3));}  
                    else if(name[m4]=='T')
                        {n=m4-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m4]=='U')
                        {n=m4-v;
                        b1 = ((k>=5*n+n+2)&&(k<=5*n+n+1+3));}  
                    else if(name[m4]=='V')
                        {n=m4-v;
                        b1 = (k==5*n+n+1+2);}  
                    else if(name[m4]=='W')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m4]=='X')
                        {n=m4-v;
                        b1 = (k==5*n+n+1||k==5*n+n+1+4);}  
                    else if(name[m4]=='Y')
                        {n=m4-v;
                        b1 = (k==5*n+n+3);}  
                    else if(name[m4]=='Z')
                        {n=m4-v;
                        b1 = (k>=5*n+n+1||k<=5*n+n+1+4);} 
                        else
                        continue;
                        
                    }
                        if (b1!=0)
                        printf("* ");
                        else
                        printf("  ");       
                    k++;
                }  
                printf(" ");
            k++;       
            m4++;
            }   
        printf("\n");
        printf("\n");
   }                 
  printf("\n"); 
printf("Thank you %s\n",name);  
 // you can change the printing symbol in this lines by replacing star symbol 123 231 336 437 540           
}
