build:
	scons | grep -v "is up to date"

clean:
	scons -c

gen:
	regmap --name=itc      --input-json=ips/itc/itc_v1.json           --header=include/archi/itc/itc_v1.h
	regmap --name=udma_i2s --input-json=ips/udma/i2s/udma_i2s_v2.json --header=include/archi/udma/i2s/udma_i2s_v2.h
	regmap --name=maestro  --input-json=ips/pmu/pmu_v3.json           --header=include/archi/maestro/maestro_v3.h
	regmap --name=maestro  --input-json=ips/pmu/pmu_v1.json           --header=include/archi/maestro/maestro_v1_new.h
	regmap --name=timer    --input-xls=doc/TIMER_UNIT_reference.xlsx  --header=include/archi/timer/timer_v2_new.h

.PHONY: build clean gen