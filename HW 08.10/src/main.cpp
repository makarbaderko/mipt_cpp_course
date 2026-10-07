#include <iostream>

#include "service.h"

int main() {
  Service sample_service = [](const std::string&, const std::string& data) {
    return "Simulating the processing...\n Processed: " + data;
  };

  std::cout << "Admin tries to access the service\n";
  std::cout << sample_service("admin", "save report") << '\n';
}
