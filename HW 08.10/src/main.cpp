#include <iostream>

#include "service.h"

int main() {
  Service sample_service = [](const std::string&, const std::string& data) {
    return "Simulating the processing...\nProcessed: " + data;
  };

  AccessStrategy admin_only = [](const std::string& user) {
    return user == "admin";
  };

  sample_service = WithAuth(sample_service, admin_only);

  std::cout << "Admin tries to access the service\n";
  std::cout << sample_service("admin", "save report") << '\n';

  std::cout << "Non-admin tries to access the service\n";
  std::cout << sample_service("guest", "save report") << '\n';
}
