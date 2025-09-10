LIBIEC_HOME ?= ../..

PROJECT := sntp_example
SRCS    := sntp_example.c

# 把 SNTP 源文件并进来（路径按你的树实际调整）
SRCS    += /home/water/work/hyiec61850/src/sntp/sntp_client.c

# 如果有平台适配文件，也一起加（存在才加）
ifneq ("$(wildcard $(LIBIEC_HOME)/src/common/sntp/sntp_platform_posix.c)","")
  SRCS += $(LIBIEC_HOME)/src/common/sntp/sntp_platform_posix.c
endif

include $(LIBIEC_HOME)/make/target_system.mk
include $(LIBIEC_HOME)/make/stack_includes.mk

.PHONY: all clean
all: $(PROJECT)

$(PROJECT): $(SRCS) $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $(SRCS) $(INCLUDES) $(LIB_NAME) $(LDLIBS)

clean:
	rm -f $(PROJECT)
