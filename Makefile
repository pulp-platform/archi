build:
	scons

clean:
	scons -c

udma_i2s_v2:
	regmap --name=udma_i2s --input-xls=doc/I2S_V2_reference.xlsx --header=include/archi/udma/i2s/udma_i2s_v2.h
	
vega: udma_i2s_v2
	regmap --name=apb_soc  --input-xls=doc/VEGA_APB_SOC_CTRL_reference.xlsx  --header=include/archi/chips/vega/apb_soc_ctrl.h

pulpissimo: udma_i2s_v2
	regmap --name=apb_soc  --input-xls=doc/PULPISSIMO_APB_SOC_CTRL_reference.xlsx  --header=include/archi/chips/pulpissimo/apb_soc_ctrl.h

gen:
	regmap --name=itc      --input-json=ips/itc/itc_v1.json           --header=include/archi/itc/itc_v1.h
	regmap --name=udma_i2s --input-xls=doc/I2S_V1_reference.xlsx      --header=include/archi/udma/i2s/udma_i2s_v1_new.h
	regmap --name=maestro  --input-json=ips/pmu/pmu_v3.json           --header=include/archi/maestro/maestro_v3.h
	regmap --name=maestro  --input-json=ips/pmu/pmu_v2.json           --header=include/archi/maestro/maestro_v2_new.h
	regmap --name=pmu      --input-json=chips/wolfe/pmu.json           --header=include/archi/chips/wolfe/pmu.h
	regmap --name=maestro  --input-json=ips/pmu/pmu_v1.json           --header=include/archi/maestro/maestro_v1_new.h
	regmap --name=timer    --input-xls=doc/TIMER_UNIT_reference.xlsx  --header=include/archi/timer/timer_v2.h
	regmap --name=rtc      --input-xls=doc/RTC_UNIT_reference.xlsx    --header=include/archi/rtc/rtc_v2.h
	regmap --name=apb_soc  --input-xls=doc/WOLFE_APB_SOC_CTRL_reference.xlsx  --header=include/archi/chips/wolfe/apb_soc_ctrl_new.h
	regmap --name=apb_soc  --input-xls doc/gap/APB_SOC_CTRL_reference.xlsx    --header=include/archi/chips/gap/apb_soc.h
	regmap --name=gpio     --input-xls=doc/APB_GPIO_reference.xlsx    --header=include/archi/gpio/gpio_v2_new.h

.PHONY: build clean gen