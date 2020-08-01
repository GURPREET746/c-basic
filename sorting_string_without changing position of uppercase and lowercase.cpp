//Given a string S consisting of uppercase and lowercase characters.
//The task is to sort uppercase and lowercase letters separately such that if the ith 
//place in the original string had an Uppercase character then it should not have a lowercase
//character after being sorted and vice versa.


string caseSort(string str, int n){
    
    vector<char> vecA,veca;
		//A=65 Z=90 a=97 z=122
		for(int i=0;i<n;i++)
		{
			if(int(str[i])<97)
			vecA.push_back(str[i]);
			else
			veca.push_back(str[i]);
		}
		sort(vecA.begin(),vecA.end());
		sort(veca.begin(),veca.end());
		int vcA=0,vca=0;
		string answer="";
		for(int i=0;i<n;i++)
		{
			if(int(str[i])<97)
			answer+=vecA[vcA++];
			else
			answer+=veca[vca++];
		}
		return answer;
}
