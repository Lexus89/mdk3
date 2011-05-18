#ifndef HAVE_OSDEP_H
#define HAVE_OSDEP_H

#include "packet.h"

#define MAX_PACKET_SIZE 2048

#ifdef __GNUC__
#define VARIABLE_IS_NOT_USED __attribute__ ((unused))
#else
#define VARIABLE_IS_NOT_USED
#endif

#define VALID_RATE_COUNT 12
static VARIABLE_IS_NOT_USED int VALID_BITRATES[VALID_RATE_COUNT] = { 1000000, 2000000, 5500000, 6000000, 9000000, 11000000, 12000000, 18000000, 24000000, 36000000, 48000000, 54000000 };

int osdep_start(char *interface);

int osdep_send_packet(struct packet *pkt);

struct packet osdep_read_packet();

void osdep_set_channel(int channel);

int osdep_get_channel();

#endif
