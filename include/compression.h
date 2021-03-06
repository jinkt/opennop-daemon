#ifndef COMPRESSION_H_
#define COMPRESSION_H_
#define _GNU_SOURCE

#include <linux/types.h>

#include "quicklz.h"

int cli_show_compression(int client_fd, char **parameters, int numparameters);
int cli_compression_enable(int client_fd, char **parameters, int numparameters);
int cli_compression_disable(int client_fd, char **parameters, int numparameters);
unsigned int tcp_compress(__u8 *ippacket, __u8 *lzbuffer, qlz_state_compress *state_compress);
unsigned int tcp_decompress(__u8 *ippacket, __u8 *lzbuffer, qlz_state_decompress *state_decompress);

#endif /*COMPRESSION_H_*/
