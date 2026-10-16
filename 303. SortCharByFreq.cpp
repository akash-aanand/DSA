
// best aproach through hashing 
string frequencySort(string s) {
    unordered_map<char, int>CountCh;
    string st = s;
			for(char c: s ){
                CountCh[c]++;
            }
            sort(s.begin(),s.end(),[&](char a, char b) {
                if(CountCh[a]==CountCh[b]){
                    return a>b;
                }
              else  return CountCh[a]>CountCh[b];
            });
        

            return s;
    }
