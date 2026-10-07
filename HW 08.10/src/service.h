#pragma once

#include <functional>
#include <string>

using Service =
    std::function<std::string(const std::string&, const std::string&)>;

using AccessStrategy = std::function<bool(const std::string&)>;

Service WithAuth(Service service, AccessStrategy access);
