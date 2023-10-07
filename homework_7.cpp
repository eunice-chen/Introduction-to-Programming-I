#include<iostream>
#include<fstream>
#include <fstream>
#include <stdio.h>
#include <map>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;



void readfile(string text, map<string, int>&wordmap);
bool sorting (const pair<string,int>&x,const pair<string,int>&y);


int main()
{

	map<string,int>wordmap;
	map<string,int>::iterator it;


    ifstream file("picasso.txt");
    string word;
    int tline =0;
    getline(file, word);
    while (!word.empty()){
   		 readfile(word,wordmap);
    	tline++;
    	getline(file,word);
	}
	cout<<"Total no. of lines: "<<tline<<endl;


	vector<pair<string,int> >v(wordmap.begin(), wordmap.end());
	cout<<"The total number of words in ''" << "picasso.txt'' : " <<v.size()  <<endl;
	sort(v.begin(),v.end(),sorting);
	for(int i=0;i<10;i++){
		cout<<"The "<<i<<"-th frequent word is ("<<v[i].first<<") with no. appearances ("<<v[i].second<<")\n";
	}


    return 0;
}


void readfile(string word, map<string, int>& wordmap){
	char c[100000], *font;
	string words;
	map<string,int>::iterator it;
	strcpy(c,word.c_str());
	font=strtok(c,"\",.-;:() ");
	while (font!=0){
		words=font;
		it =wordmap.find(words);
		if(it!=wordmap.end())
		it->second=(it->second)+1;
		else wordmap[words]=1;
	font=strtok(NULL,"\"-;:.,() ");
	}
}

bool sorting(const pair<string,int>&v1, const pair<string,int>&v2){
	return v1.second>v2.second;
}

