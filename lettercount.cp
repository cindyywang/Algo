//
//  main.cpp
//  practice
//
//  Created by Cindy on 5/7/17.
//  Copyright © 2017 Ying. All rights reserved.
//


/*
 *  Question: Give data like aaabbccdd
 *  Return: a3b2c2d2
 */

#include <iostream>
#include "string.h"

using namespace std;


void count_char(char* data, int length){
   //int count[] to count the numbers of one letter
   int count[26];
   int c = 0;
   int k = 0;
   int j = 0;
   int len = 0;
   int index = 0;
   //initilize every element in the array is 0
   for(int i = 0; i<26;i++)
   {
      count[i]=0;
   }
   //loop the data to count
   while(data[c]!= '\0')
   {
      index = data[c] -'a';
      count[index]++;
      c++;
      /*cout<<"index: "<<index<<endl;
      cout<<"data[i]: "<<data[i]<<endl;*/
   }
   //len for new char array
   while (count[j]!=0)
   {
      len++;
      j++;
   }
   //cout the original one if not shorter

   int newlen = 2*len+1;
   if (length<newlen)
   {
      for(int i = 0;i<length-1;i++)
      {
         cout<<data[i];
      }
      cout<<endl;
   }
   else
   {
      while(k<26)
      //0~25
      {
         if (count[k]!=0)
         {
            cout<<char(k+'a');
            cout<<count[k];
         }
         k++;
      }
      cout<<endl;
   }

}

int main(int argc, const char * argv[]) {
   char data[11]="aaabbccadd";
   data[10]='\0';
   count_char(data, 11);
   return 0;
}
