#!/bin/bash

# 自动构建脚本：生成 config.h + 编译 + 运行

echo "🔧 启动menu ..."
python3 kconfig_menu.py
if [ $? -ne 0 ]; then
    echo "❌ kconfig_menu.py 失败，退出。"
    exit 1
fi
