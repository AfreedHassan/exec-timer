#include <iostream>
#include <chrono>

struct Timer
{
  std::chrono::_V2::system_clock::time_point start, end;
  //time in seconds
  std::chrono::duration<double> duration;
  //to time in milliseconds -> std::chrono::duration::<double, std::milli> duration;
  Timer()
  {
    start = std::chrono::high_resolution_clock::now();
  }
  ~Timer()
  {
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "\nTime taken: " << duration.count() << "s\n";
  }
};

//how to use
void functionToBeTimed() {
  Timer timer; //initialise timer at the beginning of the function.
  /*
    do stuff
  */
}
