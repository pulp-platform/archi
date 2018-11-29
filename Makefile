build:
	scons | grep -v "is up to date"

clean:
	scons -c

gen:
	cd include && plpdoc --name=itc --config=ips/itc/itc_v1.json --header=archi/itc/itc_v1.h memmap --regs --fields
	cd include && plpdoc --name=udma_i2s --config=ips/udma/i2s/udma_i2s_v2.json --header=archi/udma/i2s/udma_i2s_v2.h memmap --regs --fields
	cd include && plpdoc --name=maestro --config=ips/pmu/pmu_v3.json --header=archi/maestro/maestro_v3.h memmap --regs --fields

.PHONY: build clean gen