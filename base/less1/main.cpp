#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>

using namespace std;

vector<vector<int>> ReadFile(string filename) {
  vector<vector<int>> s;
  int n;
  ifstream fin(filename);
  while (!(fin >> n).eof()) {
    vector<int> k;
    for (int i=0;i<n;++i) {
      int m;
      fin >> m;
      k.push_back(m);
    }
    s.push_back(k);
  }
  return s;
}
vector<vector<int>> ShiftArr(vector<vector<int>>& v) {
  vector<vector<int>> new_vector;
    int size = v.size();
  for (int i =size-1; i>=0;--i) {
      vector<int> m;
    int count = 0;
    if (i!=0) {
    while (count<v[i].size()) {
      if (count==0) {
        m.push_back(v[i][v[i].size()-1]);
      } else {
        m.push_back(v[i][count-1]);
      }
      ++count;
    }
    } else {
    while (count<v[i].size()) {
      if (count+1>=v[i].size()) {
        m.push_back(v[i][0]);
      } else {
      m.push_back(v[i][count+1]);
      }
      ++count;
    }
    }
    new_vector.push_back(m);
  }
  return new_vector;
}
void SavetoFile(string filename, const vector<vector<int>>& v) {
  ofstream fout ("out.txt");
  for (int i =0; i<v.size();i++) {
    fout << v[i].size() << endl;
    for (int j = 0; j < v[i].size();++j) {
      fout << v[i][j]<< " ";
    }
    fout <<endl;
  }
}
int main(int argc, char const *argv[])
{
  vector<vector<int>> m = ReadFile("in.txt");
  SavetoFile("out.txt",ShiftArr(m));

    return 0;
}