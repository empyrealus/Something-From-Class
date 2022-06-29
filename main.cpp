//Fall 2021
#include <iostream>
using namespace std;

template <typename ElementType>

int myArray[1000];
int myCapacity;
int mySize;

int iterator = -1;

class someClass
{ 
  public:
  	int myConstruct(int x)
  	{
  		if(x < 0)
  		{// size invalid}else
  		{
  		  //typedef int StackElement;
  		  template <typename StackElement>	// Allow an array type of any kind
          StackElement newArray[x];			// to be made, with X capacity

          vector<StackElement> X;
          iterator++;
          // For Array
            StackElement *ptr;
            ptr = StackElement newArray[x];
		    myArray[iterator] = ptr;

		   // For Vector
		   //StackElement *ptr;
           //ptr = vector<StackElement> X;
		   //myArray[iterator] = ptr;

		  myCapacity = x;
		  mySize = 0;
	    }
  	}
   
   // template <typename ElementType> // arbitrary element type
    template <typename NewDataType> // arbitrary data type
    // add a new element or expand one.
  	void add(ElementType array[], NewDataType newdata)
	{	
		template <typename StackElement2>
		int builtCapacity;
		int builtSize;
		int position;

		// loop through myArray
		for(int i=0;i<iterator;i++)
		{
			// build pointer, to check myArray for the pointer
			StackElement2 *ptr2;
			ptr = array[];
            //if myArray has a pointer equal to the pointer value of 
            // the passed array, then...
			if(myArray[i] == array[])
			{
			        // Get size and capacity
              builtCapacity = array.capacity();
              builtSize = array.size();
        // if size and cap is equal, then array is full
				if(builtSize == builtCapacity)
				{  
					// double constructed capacity
					int finCap = myCapacity * 2;
					StackElement *ptr;
		            ptr = StackElement2 newArray[finCap];
				    myArray[iterator] = ptr;
				    myCapacity = finCap
				}
				else
				{
					// add the item to the array
					array[] = newdata;
				}
			}
			else
			{// unable to locate array, catch or something}
		}
	}

	void remove(ElementType array[], int thisOne)
	{
      for(int i=0;i<mySize;i++)
      {
      	 int removals;
      	if(array[i] == thisOne)
      	{
      		// remove some int at i position,
      		// for every occurence
      		array.erase(i);
      		removals++;
      	}
      	mysize = mysize - removals;
      }
	}
	template <typename ElementType>
    void display(ElementType array[], int mySize)
    {
     for (int i = 0; i < mySize; i++)
      cout << array[i] << "  ";
      cout << endl;
     }
    int sum(ElementType array[])
    {
    	int size;
    	size = sizeof(array[]);
    	return size;
    }
    string at(int xc)
    {   string someData;
    	someData = myArray[xc];
    	return someData;
    }
    void clear()
    {
    	for(int i=0;i<mySize;i++)
    	{
    		//pop each item out of the array until empty
    		myArray.pop();
    	}
    }

    // Getters
    int getSize(){int size;return size;}
	int getCapacity(){int capacity;return capacity;}
};

int main()
{
MyCon<int> a(3);
MyCon<double> b(-10);
cout << "Size of a: " << a.getSize() << endl;
cout << "Capacity of a: " << a.getCapacity() << endl;
cout << "Size of b: " << b.getSize() << endl;
cout << "Capacity of b: " << b.getCapacity() << endl;
a.add(4); a.display();
a.add(2); a.display();
a.add(9); a.display();
a.add(4); a.display();
a.add(8); a.display();
a.add(1); a.display();
a.add(9); a.display();
cout << "a.sum(): " << a.sum() << endl;
cout << "a.at(3): " << a.at(3) << endl;
a.remove(4); a.display();
a.remove(7); a.display();
for (int i = 1; i <= 10; i++) {
if (a.search(i)) {
cout << i << ": FOUND." << endl;
}
else {
cout << i << ": NOT FOUND." << endl;
}
}
a.clear();
a.display();
cout << "Size of a: " << a.getSize() << endl;
cout << "Capacity of a: " << a.getCapacity() << endl;
}
