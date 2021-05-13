#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
#include<unistd.h>
int main()
{
    int k;
    printf("\tGet ready for the blast\n\tLet's go... \n");
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |   A   |  \t|   B   |  \t|   C   |  \t|   D   |  \t|   E   |  \t|   F   |  \t|   G   |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n");
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |   H   |  \t|   I   |  \t|   J   |  \t|   k   |  \t|   L   |  \t|   M   |  \t|   N   |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t  -------    \t -------    \t -------    \t -------    \t -------    \t -------    \t -------\n");
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |   O   |  \t|   P   |  \t|   Q   |  \t|   R   |  \t|   S   |  \t|   T   |  \t|   U   |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
           "\t  -------    \t -------    \t -------    \t -------    \t -------    \t -------    \t -------\n");
    sleep(1);
    printf("\tHey buddy!");
    sleep(1);
    printf("\n\n\tPlease choose a card given above and don't say me.\n\tJust keep the letter card remember on your mind.\n");
    sleep(3);
    printf("\n\tI will play 3 rounds with you and each round will have maximum 2 parts.\n\n\tJust see, I will read your unpredictable mind.\n\n");
    sleep(3);
    printf("\n\tIf you have already chosen the card, press y: ");
    char f;
    scanf("%c",&f);
    getchar();
    system("cls");
    int i,j,m[21],c='A';
    for(i=0; i<21; i++)
    {
        m[i]=c;
        c++;
    }
    int x[7],y[7],z[7],r=0,s=1,t=2;

    for(i=0; i<7; i++)
    {
        x[i]=m[r];
        r+=3;
    }
    for(i=0; i<7; i++)
    {
        y[i]=m[s];
        s+=3;
    }
    for(i=0; i<7; i++)
    {
        z[i]=m[t];
        t+=3;
    }
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
           x[0],x[1],x[2],x[3],x[4],x[5],x[6]);
    printf("\t1st round: \n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
    scanf("%c",&f);
    getchar();
    system("cls");
    int g=0;
    if(f=='y')
    {
        for(i=0; i<7; i++)
        {
            m[g]=y[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=x[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=z[i];
            g++;
        }
    }
    else
    {
        sleep(1);

        printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
               y[0],y[1],y[2],y[3],y[4],y[5],y[6]);
        printf("\t1st round: \n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
        scanf("%c",&f);
        getchar();
        system("cls");
        int g=0;
        if(f=='y')
        {
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
        }
        else
        {
            int g=0;
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
        }

    }
    r=0;
    s=1;
    t=2;

    for(i=0; i<7; i++)
    {
        x[i]=m[r];
        r+=3;
    }
    for(i=0; i<7; i++)
    {
        y[i]=m[s];
        s+=3;
    }
    for(i=0; i<7; i++)
    {
        z[i]=m[t];
        t+=3;
    }
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
           x[0],x[1],x[2],x[3],x[4],x[5],x[6]);
    printf("\t2nd round: \n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
    scanf("%c",&f);
    getchar();
    system("cls");
    g=0;
    if(f=='y')
    {
        for(i=0; i<7; i++)
        {
            m[g]=y[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=x[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=z[i];
            g++;
        }
    }
    else
    {
        sleep(1);
        printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
               y[0],y[1],y[2],y[3],y[4],y[5],y[6]);
        printf("\t2nd round: \n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
        scanf("%c",&f);
        getchar();
        system("cls");
        int g=0;
        if(f=='y')
        {
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
        }
        else
        {
            int g=0;
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
        }

    }
    r=0;
    s=1;
    t=2;

    for(i=0; i<7; i++)
    {
        x[i]=m[r];
        r+=3;
    }
    for(i=0; i<7; i++)
    {
        y[i]=m[s];
        s+=3;
    }
    for(i=0; i<7; i++)
    {
        z[i]=m[t];
        t+=3;
    }
    sleep(1);
    printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
           x[0],x[1],x[2],x[3],x[4],x[5],x[6]);
    printf("\tLast round\n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
    scanf("%c",&f);
    getchar();
    system("cls");
    g=0;
    if(f=='y')
    {
        for(i=0; i<7; i++)
        {
            m[g]=y[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=x[i];
            g++;
        }
        for(i=0; i<7; i++)
        {
            m[g]=z[i];
            g++;
        }
    }
    else
    {
        sleep(1);
        printf("\t  _______   \t _______   \t _______   \t _______   \t _______   \t _______   \t _______\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |  \t|   %c   |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t |       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |  \t|       |\n"
               "\t  -------   \t -------   \t -------   \t -------   \t -------   \t -------   \t -------\n",
               y[0],y[1],y[2],y[3],y[4],y[5],y[6]);
        printf("\tLast round\n\tIs there the card you have chosen?\n\n\tTo say yes press y and press n to say no:");
        scanf("%c",&f);
        getchar();
        system("cls");
        int g=0;
        if(f=='y')
        {
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
        }
        else
        {

            int g=0;
            for(i=0; i<7; i++)
            {
                m[g]=y[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=z[i];
                g++;
            }
            for(i=0; i<7; i++)
            {
                m[g]=x[i];
                g++;
            }
        }

    }
    sleep(1);
    printf("\tThough you have not told me the position or the name of your chosen card\n\tBut I have already read your mind..\n\n");
    sleep(4);
    printf("\tDo you want to see the proof?\n\tHold on...\n");
    sleep(5);
    printf("\n\n\tBang Bang!\n\tYou have chosen this card.\n\tHahahahahahah...\n");
    printf("\t  _______\n"
           "\t |       |\n"
           "\t |       |\n"
           "\t |       |\n"
           "\t |   %c   |\n"
           "\t |       |\n"
           "\t |       | \n"
           "\t |       |\n"
           "\t  ------- \n",
           m[10]);
    return 0;
}
