#include<iostream>

using namespace std;

int main()

{

   long T, matchstick;

   char N[100];

   cin >> T;

   for(int i = 1; i <= T; i++)

   {

       matchstick = 0;

       cin >> N;

       for(int j = 0; N[j] != '\0'; j++)

       {

           if(N[j] == '0')

               matchstick +=6;

           else if(N[j] == '1')

               matchstick += 2;

           else if(N[j] == '2')

               matchstick += 5;

           else if(N[j] == '3')

               matchstick += 5;

           else if(N[j] == '4')

               matchstick += 4;

           else if(N[j] == '5')

               matchstick += 5;

           else if(N[j] == '6')

               matchstick += 6;

           else if(N[j] == '7')

               matchstick += 3;

           else if(N[j] == '8')

               matchstick += 7;

           else if(N[j] == '9')

               matchstick += 6;

       }

       if(matchstick % 2 == 0)

       {

           int l = matchstick/2;

           while(l)

           {

               cout << 1;

               l--;

           }

           cout << endl;

       }

       else

       {

           int l = (matchstick-3)/2;

           cout << 7;

           while(l)

           {

               cout << 1;

               l--;

           }

           cout << endl;

       }

   }

}

 
