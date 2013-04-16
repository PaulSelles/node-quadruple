#include <node.h>
#include <v8.h>
#include <quadmath.h>
using namespace v8;

Handle<Value> Test(const Arguments& args)
{
  HandleScope scope;
  return scope.Close(String::New("pass"));
}

void Init(Handle<Object> target)
{
  NODE_SET_METHOD(target, "test", Test);
  //target->Set(String::NewSymbol("test"),
  //  FunctionTemplate::New(Test)->GetFunction());
}

NODE_MODULE(quadmath, Init);
