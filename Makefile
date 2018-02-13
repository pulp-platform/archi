ARCHI_FILES = $(shell plpfiles copy --item=archi_files)

ARCHI_FILES += archi/pulp_defs.h archi/pulp.h archi/utils.h

INSTALL_FILES += $(foreach file,$(ARCHI_FILES),include/$(file))

WS_INSTALL_FILES += $(INSTALL_FILES)

debug:
	echo $(ARCHI_FILES)

include $(PULP_SDK_HOME)/install/rules/pulp.mk
