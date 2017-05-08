//
//  main.cpp
//  Algo
//
//  Created by Cindy on 5/7/17.
//  Copyright © 2017 Ying. All rights reserved.
//

/*
 * If given string has unique charcters or not.
 */

#include <iostream>
#include <unordered_map>


using namespace std;

bool hasUnique(char* data){
   bool isUnique = false;
   unordered_map<char, int> count;
   /*count['a'] = 3;
    cout<<"count['a']: "<<count['a']<<endl;
    */
   int i = 0;
   int j = 0;

   // initilize table
   while (data[i]!='\0')
   {
      count[data[i]]=0;
      i++;
   }
   //avoid reinitialization
   while( data[j]!='\0')
   {
      count[data[j]]++;
      if(count[data[j]]>1)
      {
         isUnique = false;
         j = i;
      }
      else
      {
         isUnique = true;
         j++;
      }

   }
   //using hashmap
   return isUnique;

}


bool has_unique(char* data){
   bool is_unique = false;
   //---
   int i = 0;
   int j = 0;
   int index = 0;
   int count[26];
   while ( j<26)
   {
      count[j]=0;
      j++;
   }
   while (data[i]!='\0'&&count[index]<2)
   {
      index = data[i]-'a';
      count[index]++;
      if(count[index]>1) {
         is_unique = false;
      } else {
         is_unique = true;
      }
      i++;
   }
   //----
   return is_unique;
}

int main(int argc, const char * argv[]) {
   char data[6]="heelo";
   bool is_unique = false;
   data[5]='\0';
   is_unique = hasUnique(data);
   cout<<is_unique<<endl;
   return 0;
}
