// PR c++/47277
// { dg-options -std=c++11 }

int main(void) {
  enum e {};
  e ev;
  ev.e::~e_u();	// { dg-error "e_u. has not been declared" }
}
