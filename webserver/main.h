struct sockaddr_in {
sa_family_t
sin_family ; /* address family : AF_INET */
in_port_t
sin_port ;
/* port in network byte order */
struct in_addr sin_addr ;
/* internet address */
};
/* Internet address . */
struct in_addr {
uint32_t
s_addr ;
};
