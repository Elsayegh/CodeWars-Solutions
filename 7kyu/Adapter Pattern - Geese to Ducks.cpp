/*
Given an interface IDuck, you are to create an Object Adapter (using Composition) in order to adapt the Goose class to support the IDuck interface.

IDuck Interface
class IDuck
{
public:
    virtual std::string Quack() = 0;

    virtual void Fly() = 0;
};
Goose Class
class Goose
{
public:
    std::string Honk();

    void Fly();
}

*/

//Solution

class GooseToIDuckAdapter : public IDuck {
public:
    GooseToIDuckAdapter(Goose* goose) : goose(goose) {
    }
    
    std::string Quack() override {
      return goose->Honk();
    }
    
    void Fly() override {
      goose->Fly();
    }
    
private:
  Goose* goose;
};
