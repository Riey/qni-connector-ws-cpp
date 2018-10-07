#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

  int http_handshake(int fd);
  int make_non_block(int fd);

#ifdef __cplusplus
}
#endif
