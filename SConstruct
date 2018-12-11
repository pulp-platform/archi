import os
import subprocess
import shlex
import plpconfig
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

  chip = config.get_child_str('**/pulp_chip_family')

  # UDMA I2S
  udma_i2s = config.get_child_int('**/udma/i2s/version')
  if udma_i2s is not None:
    append_file('archi/udma/i2s/udma_i2s_v%d.h' % udma_i2s)

  # RTC
  rtc = config.get('**/soc/rtc')
  if rtc is not None:
    append_file('archi/vendors/dolphin/rtc.h')
  
  # PMU
  pmu = config.get_child_int('**/soc/pmu/version')
  if pmu is not None:
    if pmu == 3:
      append_file('archi/maestro/maestro_v%d.h' % pmu)

  # ITC
  itc = config.get_child_int('**/soc/fc_itc/version')
  if itc is not None:
    append_file('archi/itc/itc_v%d.h' % itc)

  # TIMER
  timer = config.get_child_int('**/timer/version')
  if timer is not None:
    append_file('archi/timer/timer_v%d.h' % timer)
    if timer == 2:
      append_file('archi/timer/timer_v%d_new.h' % timer)


  # Chip specific files can be included here
  if chip == 'vega':
    append_file('archi/pwm/pwm_v1.h')
  elif chip == 'gap':
    append_file('archi/pwm/pwm_v1.h')
  elif chip == 'wolfe':
    append_file('archi/pwm/pwm_v1.h')

targets = []

for file in files:
  file_path = os.path.join('include', file)
  targets.append(InstallAs(os.path.join(install_dir, file_path), file_path))
  targets.append(InstallAs(os.path.join(target_install_dir, file_path), file_path))


Default(targets)