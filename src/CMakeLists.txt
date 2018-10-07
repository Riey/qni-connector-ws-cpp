add_library(
    qni.connector.ws.internal STATIC
    internal/qni-handshake.c
)

target_link_libraries(
    qni.connector.ws.internal nettle
)

add_library(
    qni.connector.ws SHARED
    qni-connector-ws.cpp
)

target_link_libraries(
    qni.connector.ws
    qni.connector.ws.internal
    qni.core
    wslay
)

install(
    TARGETS qni.connector.ws
    LIBRARY DESTINATION lib
    )
