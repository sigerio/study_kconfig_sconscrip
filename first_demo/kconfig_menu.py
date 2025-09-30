#!/usr/bin/env python3
# 文件名：kconfig_menu.py

from kconfiglib import Kconfig
from menuconfig import menuconfig

kconf = Kconfig('Kconfig')

# 尝试加载 .config，如果不存在也不报错（新版行为已更友好）
try:
    kconf.load_config('.config')
except FileNotFoundError:
    print("No .config found, using default configuration.")

# 启动菜单配置
menuconfig(kconf)

# 保存配置
kconf.write_config('.config')
print("✅ Configuration saved to .config")