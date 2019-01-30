import os
import subprocess
import shlex
import pulp_config as plpconfig
import SCons.Util

install_dir = os.environ.get('INSTALL_DIR')
target_install_dir = os.environ.get('TARGET_INSTALL_DIR')

if install_dir is None:
  install_dir = 'install'

if target_install_dir is None:
  target_install_dir = 'install'

files = [ 'archi/pulp_defs.h', 'archi/pulp.h', 'archi/utils.h' ]

files += subprocess.check_output(shlex.split('plpfiles copy --item=archi_files')).decode('UTF-8').split()

configs = plpconfig.get_configs_from_env()

def append_file(file):
  global files
  if not file in files:
    files.append(file)


for config in configs:

  # The old system is storing the path to archi files in the json file
  # This has to be migrated so that only IP information is stored in the
  # json file and this build system is them copying the archi files according
  # to the IP information found in the json file.

  chip = config.get('**/chip/pulp_chip_family').get()

  # UDMA I2S
  udma_i2s = config.get_child_int('**/udma/i2s/version')
  if udma_i2s is not None:
    append_file('archi/udma/i2s/udma_i2s_v%d.h' % udma_i2s)

  # RTC
  rtc = config.get('**/soc/rtc')
  if rtc is None:
    rtc = config.get('**/chip/rtc')
  if rtc is not None:
    rtc_version = config.get_child_int('**/rtc/version')
    if rtc_version == 1 or rtc_version is None:
      append_file('archi/vendors/dolphin/rtc.h')
    else:
      append_file('archi/rtc/rtc_v%d.h' % (rtc_version))
  
  # PMU
  pmu = config.get_child_int('**/soc/pmu/version')
  if pmu is None:
    pmu = config.get_child_int('**/chip/pmu/version')

  if pmu is not None:
    append_file('archi/maestro/maestro_v1_new.h')
    if pmu >= 3:
      append_file('archi/maestro/maestro_v%d.h' % pmu)
    else:
      append_file('archi/maestro/maestro_v%d.h' % pmu)
      append_file('archi/maestro/maestro_v%d_new.h' % pmu)

  # ITC
  itc = config.get_child_int('**/soc/fc_itc/version')
  if itc is not None:
    append_file('archi/itc/itc_v%d.h' % itc)

  # GPIO
  gpio = config.get_child_int('**/gpio/version')
  if gpio is not None and gpio == 2:
    append_file('archi/gpio/gpio_v%d.h' % gpio)
    append_file('archi/gpio/gpio_v%d_new.h' % gpio)

  # TIMER
  timer = config.get_child_int('**/timer/version')
  if timer is not None:
    append_file('archi/timer/timer_v%d.h' % timer)


  # Chip specific files can be included here
  if chip == 'vega':
    append_file('archi/pwm/pwm_v1.h')
  elif chip == 'gap':
    append_file('archi/pwm/pwm_v1.h')
  elif chip == 'wolfe':
    append_file('archi/pwm/pwm_v1.h')
    append_file('archi/chips/wolfe/pmu.h')
    append_file('archi/chips/wolfe/apb_soc.h')
    append_file('archi/chips/wolfe/apb_soc_ctrl_new.h')
  elif chip == 'wolfe':
    append_file('archi/pwm/pwm_v1.h')
  elif chip == 'vivosoc3':
    append_file('archi/chips/vivosoc3/fll.h')
    append_file('archi/chips/vivosoc3/freq.h')
  elif chip == 'vivosoc3_5':
    append_file('archi/chips/vivosoc3_5/fll.h')
    append_file('archi/chips/vivosoc3_5/freq.h')

targets = []

for file in files:
  file_path = os.path.join('include', file)
  targets.append(InstallAs(os.path.join(install_dir, file_path), file_path))
  targets.append(InstallAs(os.path.join(target_install_dir, file_path), file_path))


Default(targets)
