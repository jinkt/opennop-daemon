# -*- Makefile -*-

AM_CPPFLAGS = ${libnfnetlink_CFLAGS} ${libnetfilter_queue_CFLAGS} \
              ${libnl_CPPFLAGS} -Iinclude
AM_CFLAGS   = -Wall -Wcast-align -Wcast-qual

bin_PROGRAMS = opennop/opennop
sbin_PROGRAMS = opennopd/opennopd

opennop_opennop_SOURCES = \
	opennop/opennop.c opennop/subsystems/messages.c
opennop_opennop_LDADD = -lpthread

opennopd_opennopd_SOURCES = \
	opennopd/commands.c opennopd/compression.c opennopd/csum.c \
	opennopd/eventmanager.c opennopd/help.c opennopd/logger.c \
	opennopd/opennopd.c opennopd/packet.c opennopd/queuemanager.c \
	opennopd/sessionmanager.c opennopd/signals.c opennopd/tcpoptions.c \
	opennopd/qlzc/quicklz.c opennopd/libcli/libcli.c \
	opennopd/subsystems/fetcher.c opennopd/subsystems/healthagent.c \
	opennopd/subsystems/messages.c opennopd/subsystems/sessioncleanup.c \
	opennopd/subsystems/worker.c
opennopd_opennopd_LDADD = \
	-lcrypt -lpthread ${libnetfilter_queue_LIBS}