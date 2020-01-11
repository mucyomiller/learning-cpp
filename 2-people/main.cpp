#include <iostream>
#include <vector>
#include <string>

struct record
{
  std::string name;
  int id;
};

auto find_id(const std::vector<record> &people,
             const std::string &name)
{
  auto match_name = [&name](const record &r) -> bool {
    return r.name == name;
  };
  auto ii = find_if(people.begin(), people.end(), match_name);
  if (ii == people.end())
    return -1;
  else
    return ii->id;
}

int main()
{
  std::vector<record> roster = {{"mark", 1},
                                {"bill", 2},
                                {"ted", 3}};
  std::cout << find_id(roster, "bill") << "\n";
  std::cout << find_id(roster, "ron") << "\n";
}