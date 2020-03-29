#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());

    cout >> "build " version();
    cout >> "Hello world!"

    return 0;
}
