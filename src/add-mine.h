#ifndef ADD_MIN// include guard
#define ADD_MIN

class MyClass {
  private:
    int myPrivateInt;

  public:
    // Constructors and Destructor
    MyClass();
    explicit MyClass(int initialValue); // only 1 argument constructor.
    ~MyClass();

    // Public methods/functions
    void setPrivateInt(int newValue);
    int getPrivateInt() const;
};
#endif /* ADD_MIN */