#include <iostream>
#include <thread>
#include <chrono>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool not_space(char c)
{
  return !isspace(c);
}

bool is_space(char c)
{
  return isspace(c);
}

vector<string>
split(const string &str)
{
  typedef string::const_iterator
      iter;

  vector<string> ret; // ret for return

  iter i = str.begin();

  while (i != str.end())
  {
    // ignore leading blanks
    i = find_if(i, str.end(),
                not_space);

    // find end of next word
    iter j = find_if(i, str.end(),
                     is_space);
    // copy the characters
    // in [i, j)
    if (i != str.end())
      ret.push_back(string(i, j));
      
    i = j;
  }
  return ret;
}

int main()
{
  // std::equal_to
  // std::unordered_set<{.Pred = Pred}> s();
  return 0;
}