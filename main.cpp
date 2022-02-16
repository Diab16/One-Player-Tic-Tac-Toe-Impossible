#include <bits/stdc++.h>

using namespace std;
void shp (char m[]);
void imp (char m[],int i);
bool win (char m[]);
int main()
{
    system("color e0") ;
    char m[9]= {'1','2','3','4','5','6','7','8','9'} ;
    int i=0,t ;
    do
    {
        system ("cls") ;
        if (i==0)
            cout << endl << "\t\t\t\t YOU ARE X" ;
        shp(m);
        cout << "\t\t\t         YOUR TURN " ;
        cin >> t ;
        i++ ;
        if (t>0&&t<10&&m[t-1]!='X'&&m[t-1]!='O')
            m[t-1]= 'X' ;
        else
        {
            system("color 0e") ;
            cout << "\t\t\t       WRONG PLACE" ;
            break ;
        }
        if (win(m))
        {
            break ;
        }
        else if (i==9)
        {
            system("color 0e") ;
            cout << "\t\t\t  GAME END WITH TIE" ;
            break ;
        }
        system ("cls") ;
        shp(m) ;
        imp(m,i) ;
        i++ ;
        if (win(m))
            break ;
    }
    while (1) ;

    return 0 ;
}
void shp(char m[])
{
    cout << endl ;
    cout << "\t\t\t  _______________________ " << endl ;
    cout << "\t\t\t |       |       |       |" << endl ;
    cout << "\t\t\t |   " << m[0] << "   |   " << m[1] << "   |   " << m[2] << "   |" << endl ;
    cout << "\t\t\t |       |       |       |" << endl ;
    cout << "\t\t\t |-------|-------|-------|" << endl ;
    cout << "\t\t\t |       |       |       |" << endl ;
    cout << "\t\t\t |   " << m[3] << "   |   " << m[4] << "   |   " << m[5] << "   |" << endl ;
    cout << "\t\t\t |       |       |       |" << endl ;
    cout << "\t\t\t |-------|-------|-------|" << endl ;
    cout << "\t\t\t |       |       |       |" << endl ;
    cout << "\t\t\t |   " << m[6] << "   |   " << m[7] << "   |   " << m[8] << "   |" << endl ;
    cout << "\t\t\t |_______|_______|_______|" << endl << endl ;
    cout << "\t\t\t  ENTER THE PLACE NUMBER\n" ;
}
void imp (char m[],int i)
{
    if (i==1)
    {
        if (m[4]=='5')
            m[4]='O';
        else
        {
            int u = (rand()%5)*2 ;
            if (u==4)
                u=8 ;
            m[u]='O';
        }
    }
    else if (m[0]=='O'&&m[1]=='O'&&m[2]=='3') //att
        m[2]='O' ;
    else if (m[0]=='O'&&m[1]=='2'&&m[2]=='O')
        m[1]='O' ;
    else if (m[0]=='1'&&m[1]=='O'&&m[2]=='O')
        m[0]='O' ;
    else if (m[3]=='O'&&m[4]=='O'&&m[5]=='6')
        m[5]='O' ;
    else if (m[3]=='O'&&m[4]=='5'&&m[5]=='O')
        m[4]='O' ;
    else if (m[3]=='4'&&m[4]=='O'&&m[5]=='O')
        m[3]='O' ;
    else if (m[6]=='O'&&m[7]=='O'&&m[8]=='9')
        m[8]='O' ;
    else if (m[6]=='O'&&m[7]=='8'&&m[8]=='O')
        m[7]='O' ;
    else if (m[6]=='7'&&m[7]=='O'&&m[8]=='O')
        m[6]='O' ;
    else if (m[0]=='O'&&m[3]=='O'&&m[6]=='7')
        m[6]='O' ;
    else if (m[0]=='O'&&m[3]=='4'&&m[6]=='O')
        m[3]='O' ;
    else if (m[0]=='1'&&m[3]=='O'&&m[6]=='O')
        m[0]='O' ;
    else if (m[1]=='O'&&m[4]=='O'&&m[7]=='8')
        m[7]='O' ;
    else if (m[1]=='O'&&m[4]=='5'&&m[7]=='O')
        m[4]='O' ;
    else if (m[1]=='2'&&m[4]=='O'&&m[7]=='O')
        m[1]='O' ;
    else if (m[2]=='O'&&m[5]=='O'&&m[8]=='9')
        m[8]='O' ;
    else if (m[2]=='O'&&m[5]=='6'&&m[8]=='O')
        m[5]='O' ;
    else if (m[2]=='3'&&m[5]=='O'&&m[8]=='O')
        m[2]='O' ;
    else if (m[0]=='O'&&m[4]=='O'&&m[8]=='9')
        m[8]='O' ;
    else if (m[0]=='O'&&m[4]=='5'&&m[8]=='O')
        m[4]='O' ;
    else if (m[0]=='1'&&m[4]=='O'&&m[8]=='O')
        m[0]='O' ;
    else if (m[2]=='O'&&m[4]=='O'&&m[6]=='7')
        m[6]='O' ;
    else if (m[2]=='O'&&m[4]=='5'&&m[6]=='O')
        m[4]='O' ;
    else if (m[2]=='3'&&m[4]=='O'&&m[6]=='O')
        m[2]='O' ;
    else if (m[0]=='X'&&m[1]=='X'&&m[2]=='3') //d
        m[2]='O' ;
    else if (m[0]=='X'&&m[1]=='2'&&m[2]=='X')
        m[1]='O' ;
    else if (m[0]=='1'&&m[1]=='X'&&m[2]=='X')
        m[0]='O' ;
    else if (m[3]=='X'&&m[4]=='X'&&m[5]=='6')
        m[5]='O' ;
    else if (m[3]=='X'&&m[4]=='5'&&m[5]=='X')
        m[4]='O' ;
    else if (m[3]=='4'&&m[4]=='X'&&m[5]=='X')
        m[3]='O' ;
    else if (m[6]=='X'&&m[7]=='X'&&m[8]=='9')
        m[8]='O' ;
    else if (m[6]=='X'&&m[7]=='8'&&m[8]=='X')
        m[7]='O' ;
    else if (m[6]=='7'&&m[7]=='X'&&m[8]=='X')
        m[6]='O' ;
    else if (m[0]=='X'&&m[3]=='X'&&m[6]=='7')
        m[6]='O' ;
    else if (m[0]=='X'&&m[3]=='4'&&m[6]=='X')
        m[3]='O' ;
    else if (m[0]=='1'&&m[3]=='X'&&m[6]=='X')
        m[0]='O' ;
    else if (m[1]=='X'&&m[4]=='X'&&m[7]=='8')
        m[7]='O' ;
    else if (m[1]=='X'&&m[4]=='5'&&m[7]=='X')
        m[4]='O' ;
    else if (m[1]=='2'&&m[4]=='X'&&m[7]=='X')
        m[1]='O' ;
    else if (m[2]=='X'&&m[5]=='X'&&m[8]=='9')
        m[8]='O' ;
    else if (m[2]=='X'&&m[5]=='6'&&m[8]=='X')
        m[5]='O' ;
    else if (m[2]=='3'&&m[5]=='X'&&m[8]=='X')
        m[2]='O' ;
    else if (m[0]=='X'&&m[4]=='X'&&m[8]=='9')
        m[8]='O' ;
    else if (m[0]=='X'&&m[4]=='5'&&m[8]=='X')
        m[4]='O' ;
    else if (m[0]=='1'&&m[4]=='X'&&m[8]=='X')
        m[0]='O' ;
    else if (m[2]=='X'&&m[4]=='X'&&m[6]=='7')
        m[6]='O' ;
    else if (m[2]=='X'&&m[4]=='5'&&m[6]=='X')
        m[4]='O' ;
    else if (m[2]=='3'&&m[4]=='X'&&m[6]=='X')
        m[2]='O' ;
    else if (i==3&&m[4]=='O')
    {
        int s=rand()%9 ;
        if (s%2==0&&s!=8)
            s++ ;
        else if (s==8)
            s-- ;
        m[s]='O';
    }
    else
        for (int j=0 ; j<9 ; j++ )
        {
            if (m[j]!='X'&&m[j]!='O')
            {
                m[j]='O' ;
                break ;
            }
        }
}
bool win (char m[])
{
    bool b=0 ;
    if ( m[0]==m[1] && m[1]==m[2] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[0] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[3]==m[4] && m[4]==m[5] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[3] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[6]==m[7] && m[7]==m[8] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[6] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[0]==m[3] && m[3]==m[6] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[0] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[1]==m[7] && m[7]==m[4] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[1] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[2]==m[5] && m[5]==m[8] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[2] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[6]==m[4] && m[4]==m[2] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[6] << " WIN\n" ;
        b=1 ;
    }
    else if ( m[0]==m[4] && m[4]==m[8] )
    {
        system("color 0e") ;
        system("cls") ;
        shp(m) ;
        cout << "\t\t\t       THE " << m[0] << " WIN\n" ;
        b=1 ;
    }
    return b ;
}
