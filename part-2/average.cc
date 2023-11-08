// Jaison Gamboa
// JaisonG2368@csu.fullerton.edu
// @JaisonG2368
// Partners: @edgarp8

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // DONE: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  // DONE: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0};
  int count = static_cast<int>(arguments.size()) - 1;
  bool first(true);
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  // DONE: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{0};
  average = sum / count;
  std::cout << "average =" << average;
  // DONE: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  // std:: string message;
  // std:: cout << "write a message:\n";
  // std:: get line (std::cin, message,"\n");
  // output_stream << message;
  // if( output_average());
  //   std::cout << "____ /n";
  //   return 1;

  return 0;
}
