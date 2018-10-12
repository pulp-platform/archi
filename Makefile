ARCHI_FILES = $(shell plpfiles copy --item=archi_files)

ARCHI_FILES += archi/pulp_defs.h archi/pulp.h archi/utils.h

INSTALL_FILES += $(foreach file,$(ARCHI_FILES),include/$(file))

WS_INSTALL_FILES += $(INSTALL_FILES)

gen:
	cd include && plpdoc --name=itc --config=ips/itc/itc_v1.json --header=archi/itc/itc_v1.h memmap --regs --fields
	cd include && plpdoc --name=udma_i2s --config=ips/udma/i2s/udma_i2s_v2.json --header=archi/udma/i2s/udma_i2s_v2.h memmap --regs --fields

include $(PULP_SDK_HOME)/install/rules/pulp.mk
