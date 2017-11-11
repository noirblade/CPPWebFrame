#
# Makefile for the Ergon CPPFrame
# 
# @author:	Kail (sickboy@anarchy.name)
# $Id$
#	

PROG=		../index.cgi
CC=		g++
CFLAGS= 	-Wall -pipe -O3

SRC=		index.cpp lib/CPPFrame/base/Request.cpp lib/CPPFrame/base/Utils.cpp lib/CPPFrame/base/Registry.cpp lib/CPPFrame/view/View.cpp lib/Application/Bootstrap.cpp lib/CPPFrame/base/RequestData.cpp lib/CPPFrame/base/AbstractParserFactory.cpp lib/CPPFrame/base/ParserFactory.cpp lib/CPPFrame/base/AbstractParser.cpp lib/CPPFrame/base/URLEncodeParser.cpp lib/CPPFrame/base/AbstractExtractorFactory.cpp lib/CPPFrame/base/ExtractorFactory.cpp lib/CPPFrame/base/GETExtractor.cpp lib/CPPFrame/base/Extractor.cpp
#INCLUDES=	-I. -I/usr/local/include
INCLUDES=	-I. -Ilib/
#LIBS= 		-L/usr/local/lib -L/usr/local/lib/mysql -lmysqlclient -lz -D_REENTRANT -lpthread
#LIBS= 		-L/usr/local/lib -L/usr/local/lib/mysql -lmysqlclient -lz -D_REENTRANT -pthread
#LIBS= 		-L/usr/local/lib -L/usr/local/lib/mysql -lmysqlclient
#LIBS= 		-L/usr/local/lib -L/usr/local/lib/mysql -lmysqlclient -lz -D_REENTRANT -lthr



#
# Set these variables with =yes
# when typing make
#

ifdef WANT_DEBUG_SYMBOLS
CFLAGS += -g
endif

ifndef NO_REGEX
#CFLAGS += -std=gnu++0x
endif

ifdef WANT_DEBUG
CFLAGS += -DWANT_DEBUG
endif

ifdef WANT_OPTIMIZED
CFLAGS += -O3
endif

ifdef WANT_PROFILED
CFLAGS 	+= -pg
LIBS 	+= -lc_p
endif

#
# End of variables
#

install all: 
	@echo ""
	@echo "Building $(PROG) ... "
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(PROG) $(LIBS)
	@echo ""
	
ifdef WANT_DEBUG_SYMBOLS
	@echo "Stripping $(PROG) ..."
	strip $(PROG)
	@echo "done."
	@echo ""
endif

#	@echo ""
#	@echo "--> Don't forget to svn commit all changes! <--"
#	@echo ""



remove uninstall delete deinstall clean:
	@echo ""
	@echo "Deleting executable, profile, object and core files ..."
	@rm -f $(PROG) *.o *.core $(PROG).gmon
	@echo "done."
	@echo ""

options settings:
	@echo ""
	@echo "Options are:"
	@echo "WANT_DEBUG_SYMBOLS - put debugging symbols in the executable"
	@echo "WANT_DEBUG - enable additional debugging code in program"
	@echo "WANT_OPTIMIZED - enable optimization level 3 for the code"
	@echo "WANT_PROFILED - compile program for profiling"
	@echo ""

love:
	@echo "Not war!"
