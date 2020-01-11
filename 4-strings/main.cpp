#include <iostream>

int main(int argc, const char *argv[])
{
  using namespace std::literals;
  const char *a = u8"miller"; //UTF-8 // std::string
  const wchar_t *b = L"miller";
  const char16_t *c = u"miller"; //UTF-16 // std::u16string
  const char32_t *d = U"miller"; //UTF-32 // std::u32string

  // string literals
  std::string aa = "miller"s + "miller";
  std::wstring bb = L"miller"s + L"fred";
  std::u16string cc = u"miller"s + u"miller";
  std::u32string dd = U"miller"s + U"miller";

  // multi line string
  const char *str = R"(
  A
  B
  C
  D)";
  std::cout << "mulitline string -> " << str << std::endl;
  return 0;
}