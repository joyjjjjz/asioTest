AUTOMAKE_OPTIONS = subdir-objects

noinst_PROGRAMS = \
	tests/performance/client \
	tests/performance/server \
	tests/unit/basic_datagram_socket \
	tests/unit/basic_deadline_timer \
	tests/unit/basic_socket_acceptor \
	tests/unit/basic_stream_socket \
	tests/unit/buffered_read_stream \
	tests/unit/buffered_stream \
	tests/unit/buffered_write_stream \
	tests/unit/buffer \
	tests/unit/completion_condition \
	tests/unit/datagram_socket_service \
	tests/unit/deadline_timer_service \
	tests/unit/deadline_timer \
	tests/unit/error \
	tests/unit/io_service \
	tests/unit/ip/address \
	tests/unit/ip/address_v4 \
	tests/unit/ip/address_v6 \
	tests/unit/ip/basic_endpoint \
	tests/unit/ip/basic_resolver \
	tests/unit/ip/basic_resolver_entry \
	tests/unit/ip/basic_resolver_iterator \
	tests/unit/ip/basic_resolver_query \
	tests/unit/ip/host_name \
	tests/unit/ip/multicast \
	tests/unit/ip/resolver_query_base \
	tests/unit/ip/resolver_service \
	tests/unit/ip/tcp \
	tests/unit/ip/udp \
	tests/unit/ip/unicast \
	tests/unit/ip/v6_only \
	tests/unit/is_read_buffered \
	tests/unit/is_write_buffered \
	tests/unit/placeholders \
	tests/unit/read \
	tests/unit/read_until \
	tests/unit/socket_acceptor_service \
	tests/unit/socket_base \
	tests/unit/strand \
	tests/unit/stream_socket_service \
	tests/unit/thread \
	tests/unit/time_traits \
	tests/unit/write \
	examples/allocation/server \
	examples/buffers/reference_counted \
	examples/chat/chat_client \
	examples/chat/chat_server \
	examples/echo/async_tcp_echo_server \
	examples/echo/async_udp_echo_server \
	examples/echo/blocking_tcp_echo_client \
	examples/echo/blocking_tcp_echo_server \
	examples/echo/blocking_udp_echo_client \
	examples/echo/blocking_udp_echo_server \
	examples/http/client/async_client \
	examples/http/client/sync_client \
	examples/http/server/http_server \
	examples/http/server2/http_server \
	examples/http/server3/http_server \
	examples/invocation/prioritised_handlers \
	examples/iostreams/daytime_client \
	examples/iostreams/daytime_server \
	examples/multicast/receiver \
	examples/multicast/sender \
	examples/services/daytime_client \
	examples/socks4/sync_client \
	examples/timeouts/accept_timeout \
	examples/timeouts/connect_timeout \
	examples/timeouts/datagram_receive_timeout \
	examples/timeouts/stream_receive_timeout \
	examples/timers/time_t_timer \
	examples/tutorial/timer1/timer \
	examples/tutorial/timer2/timer \
	examples/tutorial/timer3/timer \
	examples/tutorial/timer4/timer \
	examples/tutorial/timer5/timer \
	examples/tutorial/daytime1/client \
	examples/tutorial/daytime2/server \
	examples/tutorial/daytime3/server \
	examples/tutorial/daytime4/client \
	examples/tutorial/daytime5/server \
	examples/tutorial/daytime6/server \
	examples/tutorial/daytime7/server

if HAVE_OPENSSL

noinst_PROGRAMS += \
	tests/unit/ssl/basic_context \
	tests/unit/ssl/context_base \
	tests/unit/ssl/context_service \
	tests/unit/ssl/context \
	tests/unit/ssl/stream_base \
	tests/unit/ssl/stream_service \
	tests/unit/ssl/stream \
	examples/ssl/client \
	examples/ssl/server

endif

TESTS = \
	tests/unit/basic_datagram_socket \
	tests/unit/basic_deadline_timer \
	tests/unit/basic_socket_acceptor \
	tests/unit/basic_stream_socket \
	tests/unit/buffered_read_stream \
	tests/unit/buffered_stream \
	tests/unit/buffered_write_stream \
	tests/unit/buffer \
	tests/unit/completion_condition \
	tests/unit/datagram_socket_service \
	tests/unit/deadline_timer_service \
	tests/unit/deadline_timer \
	tests/unit/error \
	tests/unit/io_service \
	tests/unit/ip/address \
	tests/unit/ip/address_v4 \
	tests/unit/ip/address_v6 \
	tests/unit/ip/basic_endpoint \
	tests/unit/ip/basic_resolver \
	tests/unit/ip/basic_resolver_entry \
	tests/unit/ip/basic_resolver_iterator \
	tests/unit/ip/basic_resolver_query \
	tests/unit/ip/host_name \
	tests/unit/ip/multicast \
	tests/unit/ip/resolver_query_base \
	tests/unit/ip/resolver_service \
	tests/unit/ip/tcp \
	tests/unit/ip/udp \
	tests/unit/ip/unicast \
	tests/unit/ip/v6_only \
	tests/unit/is_read_buffered \
	tests/unit/is_write_buffered \
	tests/unit/placeholders \
	tests/unit/read \
	tests/unit/read_until \
	tests/unit/socket_acceptor_service \
	tests/unit/socket_base \
	tests/unit/strand \
	tests/unit/stream_socket_service \
	tests/unit/thread \
	tests/unit/time_traits \
	tests/unit/write

if HAVE_OPENSSL

TESTS += \
	tests/unit/ssl/basic_context \
	tests/unit/ssl/context_base \
	tests/unit/ssl/context_service \
	tests/unit/ssl/context \
	tests/unit/ssl/stream_base \
	tests/unit/ssl/stream_service \
	tests/unit/ssl/stream

endif

noinst_HEADERS = \
	tests/unit/unit_test.hpp \
	examples/chat/chat_message.hpp \
	examples/services/basic_logger.hpp \
	examples/services/logger.hpp \
	examples/services/logger_service.hpp \
	examples/services/stream_socket_service.hpp

AM_CXXFLAGS = -I$(srcdir)/../include

tests_performance_client_SOURCES = tests/performance/client.cpp
tests_performance_server_SOURCES = tests/performance/server.cpp
tests_unit_basic_datagram_socket_SOURCES = tests/unit/basic_datagram_socket.cpp
tests_unit_basic_deadline_timer_SOURCES = tests/unit/basic_deadline_timer.cpp
tests_unit_basic_socket_acceptor_SOURCES = tests/unit/basic_socket_acceptor.cpp
tests_unit_basic_stream_socket_SOURCES = tests/unit/basic_stream_socket.cpp
tests_unit_buffer_SOURCES = tests/unit/buffer.cpp
tests_unit_buffered_read_stream_SOURCES = tests/unit/buffered_read_stream.cpp
tests_unit_buffered_stream_SOURCES = tests/unit/buffered_stream.cpp
tests_unit_buffered_write_stream_SOURCES = tests/unit/buffered_write_stream.cpp
tests_unit_completion_condition_SOURCES = tests/unit/completion_condition.cpp
tests_unit_datagram_socket_service_SOURCES = tests/unit/datagram_socket_service.cpp
tests_unit_deadline_timer_service_SOURCES = tests/unit/deadline_timer_service.cpp
tests_unit_deadline_timer_SOURCES = tests/unit/deadline_timer.cpp
tests_unit_error_SOURCES = tests/unit/error.cpp
tests_unit_io_service_SOURCES = tests/unit/io_service.cpp
tests_unit_ip_address_SOURCES = tests/unit/ip/address.cpp
tests_unit_ip_address_v4_SOURCES = tests/unit/ip/address_v4.cpp
tests_unit_ip_address_v6_SOURCES = tests/unit/ip/address_v6.cpp
tests_unit_ip_basic_endpoint_SOURCES = tests/unit/ip/basic_endpoint.cpp
tests_unit_ip_basic_resolver_SOURCES = tests/unit/ip/basic_resolver.cpp
tests_unit_ip_basic_resolver_entry_SOURCES = tests/unit/ip/basic_resolver_entry.cpp
tests_unit_ip_basic_resolver_iterator_SOURCES = tests/unit/ip/basic_resolver_iterator.cpp
tests_unit_ip_basic_resolver_query_SOURCES = tests/unit/ip/basic_resolver_query.cpp
tests_unit_ip_host_name_SOURCES = tests/unit/ip/host_name.cpp
tests_unit_ip_multicast_SOURCES = tests/unit/ip/multicast.cpp
tests_unit_ip_resolver_query_base_SOURCES = tests/unit/ip/resolver_query_base.cpp
tests_unit_ip_resolver_service_SOURCES = tests/unit/ip/resolver_service.cpp
tests_unit_ip_tcp_SOURCES = tests/unit/ip/tcp.cpp
tests_unit_ip_udp_SOURCES = tests/unit/ip/udp.cpp
tests_unit_ip_unicast_SOURCES = tests/unit/ip/unicast.cpp
tests_unit_ip_v6_only_SOURCES = tests/unit/ip/v6_only.cpp
tests_unit_is_read_buffered_SOURCES = tests/unit/is_read_buffered.cpp
tests_unit_is_write_buffered_SOURCES = tests/unit/is_write_buffered.cpp
tests_unit_placeholders_SOURCES = tests/unit/placeholders.cpp
tests_unit_read_SOURCES = tests/unit/read.cpp
tests_unit_read_until_SOURCES = tests/unit/read_until.cpp
tests_unit_socket_acceptor_service_SOURCES = tests/unit/socket_acceptor_service.cpp
tests_unit_socket_base_SOURCES = tests/unit/socket_base.cpp
tests_unit_strand_SOURCES = tests/unit/strand.cpp
tests_unit_stream_socket_service_SOURCES = tests/unit/stream_socket_service.cpp
tests_unit_thread_SOURCES = tests/unit/thread.cpp
tests_unit_time_traits_SOURCES = tests/unit/time_traits.cpp
tests_unit_write_SOURCES = tests/unit/write.cpp
examples_allocation_server_SOURCES = examples/allocation/server.cpp
examples_buffers_reference_counted_SOURCES = examples/buffers/reference_counted.cpp
examples_chat_chat_client_SOURCES = examples/chat/chat_client.cpp
examples_chat_chat_server_SOURCES = examples/chat/chat_server.cpp
examples_echo_async_tcp_echo_server_SOURCES = examples/echo/async_tcp_echo_server.cpp
examples_echo_async_udp_echo_server_SOURCES = examples/echo/async_udp_echo_server.cpp
examples_echo_blocking_tcp_echo_client_SOURCES = examples/echo/blocking_tcp_echo_client.cpp
examples_echo_blocking_tcp_echo_server_SOURCES = examples/echo/blocking_tcp_echo_server.cpp
examples_echo_blocking_udp_echo_client_SOURCES = examples/echo/blocking_udp_echo_client.cpp
examples_echo_blocking_udp_echo_server_SOURCES = examples/echo/blocking_udp_echo_server.cpp
examples_http_client_async_client_SOURCES = examples/http/client/async_client.cpp
examples_http_client_sync_client_SOURCES = examples/http/client/sync_client.cpp
examples_http_server_http_server_SOURCES = \
	examples/http/server/connection.cpp \
	examples/http/server/connection_manager.cpp \
	examples/http/server/mime_types.cpp \
	examples/http/server/reply.cpp \
	examples/http/server/request_handler.cpp \
	examples/http/server/request_parser.cpp \
	examples/http/server/server.cpp
if WINDOWS_TARGET
examples_http_server_http_server_SOURCES += \
	examples/http/server/win_main.cpp
else
examples_http_server_http_server_SOURCES += \
	examples/http/server/posix_main.cpp
endif
examples_http_server2_http_server_SOURCES = \
	examples/http/server2/connection.cpp \
	examples/http/server2/io_service_pool.cpp \
	examples/http/server2/mime_types.cpp \
	examples/http/server2/reply.cpp \
	examples/http/server2/request_handler.cpp \
	examples/http/server2/request_parser.cpp \
	examples/http/server2/server.cpp
if WINDOWS_TARGET
examples_http_server2_http_server_SOURCES += \
	examples/http/server2/win_main.cpp
else
examples_http_server2_http_server_SOURCES += \
	examples/http/server2/posix_main.cpp
endif
examples_http_server3_http_server_SOURCES = \
	examples/http/server3/connection.cpp \
	examples/http/server3/mime_types.cpp \
	examples/http/server3/reply.cpp \
	examples/http/server3/request_handler.cpp \
	examples/http/server3/request_parser.cpp \
	examples/http/server3/server.cpp
if WINDOWS_TARGET
examples_http_server3_http_server_SOURCES += \
	examples/http/server3/win_main.cpp
else
examples_http_server3_http_server_SOURCES += \
	examples/http/server3/posix_main.cpp
endif
examples_invocation_prioritised_handlers_SOURCES = examples/invocation/prioritised_handlers.cpp
examples_iostreams_daytime_client_SOURCES = examples/iostreams/daytime_client.cpp
examples_iostreams_daytime_server_SOURCES = examples/iostreams/daytime_server.cpp
examples_multicast_receiver_SOURCES = examples/multicast/receiver.cpp
examples_multicast_sender_SOURCES = examples/multicast/sender.cpp
examples_services_daytime_client_SOURCES = \
	examples/services/daytime_client.cpp \
	examples/services/logger_service.cpp
examples_socks4_sync_client_SOURCES = examples/socks4/sync_client.cpp
examples_timeouts_accept_timeout_SOURCES = examples/timeouts/accept_timeout.cpp
examples_timeouts_connect_timeout_SOURCES = examples/timeouts/connect_timeout.cpp
examples_timeouts_datagram_receive_timeout_SOURCES = examples/timeouts/datagram_receive_timeout.cpp
examples_timeouts_stream_receive_timeout_SOURCES = examples/timeouts/stream_receive_timeout.cpp
examples_timers_time_t_timer_SOURCES = examples/timers/time_t_timer.cpp
examples_tutorial_timer1_timer_SOURCES = examples/tutorial/timer1/timer.cpp
examples_tutorial_timer2_timer_SOURCES = examples/tutorial/timer2/timer.cpp
examples_tutorial_timer3_timer_SOURCES = examples/tutorial/timer3/timer.cpp
examples_tutorial_timer4_timer_SOURCES = examples/tutorial/timer4/timer.cpp
examples_tutorial_timer5_timer_SOURCES = examples/tutorial/timer5/timer.cpp
examples_tutorial_daytime1_client_SOURCES = examples/tutorial/daytime1/client.cpp
examples_tutorial_daytime2_server_SOURCES = examples/tutorial/daytime2/server.cpp
examples_tutorial_daytime3_server_SOURCES = examples/tutorial/daytime3/server.cpp
examples_tutorial_daytime4_client_SOURCES = examples/tutorial/daytime4/client.cpp
examples_tutorial_daytime5_server_SOURCES = examples/tutorial/daytime5/server.cpp
examples_tutorial_daytime6_server_SOURCES = examples/tutorial/daytime6/server.cpp
examples_tutorial_daytime7_server_SOURCES = examples/tutorial/daytime7/server.cpp

if HAVE_OPENSSL

tests_unit_ssl_basic_context_SOURCES = tests/unit/ssl/basic_context.cpp
tests_unit_ssl_context_base_SOURCES = tests/unit/ssl/context_base.cpp
tests_unit_ssl_context_service_SOURCES = tests/unit/ssl/context_service.cpp
tests_unit_ssl_context_SOURCES = tests/unit/ssl/context.cpp
tests_unit_ssl_stream_base_SOURCES = tests/unit/ssl/stream_base.cpp
tests_unit_ssl_stream_service_SOURCES = tests/unit/ssl/stream_service.cpp
tests_unit_ssl_stream_SOURCES = tests/unit/ssl/stream.cpp
examples_ssl_client_SOURCES = examples/ssl/client.cpp
examples_ssl_server_SOURCES = examples/ssl/server.cpp

endif

EXTRA_DIST = \
	Makefile.bor \
	Makefile.mgw \
	Makefile.msc \
	examples/http/server/connection.hpp \
	examples/http/server/connection_manager.hpp \
	examples/http/server/header.hpp \
	examples/http/server/mime_types.hpp \
	examples/http/server/reply.hpp \
	examples/http/server/request.hpp \
	examples/http/server/request_handler.hpp \
	examples/http/server/request_parser.hpp \
	examples/http/server/server.hpp \
	examples/http/server/win_main.cpp \
	examples/http/server2/connection.hpp \
	examples/http/server2/io_service_pool.hpp \
	examples/http/server2/header.hpp \
	examples/http/server2/mime_types.hpp \
	examples/http/server2/reply.hpp \
	examples/http/server2/request.hpp \
	examples/http/server2/request_handler.hpp \
	examples/http/server2/request_parser.hpp \
	examples/http/server2/server.hpp \
	examples/http/server2/win_main.cpp \
	examples/http/server3/connection.hpp \
	examples/http/server3/header.hpp \
	examples/http/server3/mime_types.hpp \
	examples/http/server3/reply.hpp \
	examples/http/server3/request.hpp \
	examples/http/server3/request_handler.hpp \
	examples/http/server3/request_parser.hpp \
	examples/http/server3/server.hpp \
	examples/http/server3/win_main.cpp \
	examples/serialization/client.cpp \
	examples/serialization/server.cpp \
	examples/serialization/connection.hpp \
	examples/serialization/stock.hpp \
	examples/services/basic_logger.hpp \
	examples/services/logger.hpp \
	examples/services/logger_service.hpp \
	examples/services/stream_socket_service.hpp \
	examples/socks4/socks4.hpp \
	examples/ssl/README \
	examples/ssl/ca.pem \
	examples/ssl/server.pem \
	examples/ssl/dh512.pem \
	examples/timers/tick_count_timer.cpp

MAINTAINERCLEANFILES = \
	$(srcdir)/Makefile.in
