#ifndef PFArrayD_h
#define PFArrayD_h


  class PFArrayD {
  public:
    PFArrayD();
    // Initializes with a capacity of 50.
    PFArrayD(int capacityValue);
    PFArrayD(const PFArrayD &pfaObject);
    void addElement(double element);
    // Precondition: The array is not full.
    // Postcondition: The element has been added.
    bool full() const;
    // Returns true if the array is full, false otherwise.
    int getCapacity() const;
    int getNumberUsed() const;
    void emptyArray();
    // Empties the array.
    double &operator[](int index);
    // Read and change access to elements 0 through numberUsed - 1.
    PFArrayD &operator=(const PFArrayD &rightSide);
    ~PFArrayD();
    // Destructor
  private:
    double *a;    // For an array of doubles
    int capacity; // For the size of the array
    int used;     // For the number of array positions currently in use 26
  };
  void testPFArrayD( );
#endif