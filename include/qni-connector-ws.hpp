#pragma once
#include <qni/qni-connector.hpp>

extern "C"
{
  int qni_connector_ws_start(std::shared_ptr<qni::Hub> *hub, const char *host, uint16_t port, int epoll_size);
}