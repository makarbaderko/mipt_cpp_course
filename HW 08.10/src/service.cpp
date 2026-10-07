#include "service.h"

Service WithAuth(Service service, AccessStrategy access) {
  return [service, access](const std::string& user, const std::string& data) {
    return access(user) ? service(user, data) : "Error. Access denied.";
  };
}
