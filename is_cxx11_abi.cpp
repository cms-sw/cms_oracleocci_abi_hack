#include <string>
int main()
{
#ifdef _GLIBCXX_USE_CXX11_ABI
  if ( _GLIBCXX_USE_CXX11_ABI == 1 ){return 0;}
#endif
  return 1;
}
