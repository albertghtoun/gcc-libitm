// { dg-options "-std=gnu++11 -g" }
template<typename... T>
void eat(T...) { }

void f()
{
  eat();
  eat(1);
  eat(1, 2);
  eat(17, 3.14159, "Hello, World!");
}
