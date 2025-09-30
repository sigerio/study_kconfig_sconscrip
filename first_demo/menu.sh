#!/bin/bash

# menu.sh - 一键开发脚本：配置 → 构建 → 运行

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VENV_DIR="$SCRIPT_DIR/my_first_env"

# 激活虚拟环境
if [ -f "$VENV_DIR/bin/activate" ]; then
    echo "🔌 激活虚拟环境..."
    source "$VENV_DIR/bin/activate"
else
    echo "❌ 虚拟环境未找到: $VENV_DIR"
    exit 1
fi

echo "🎨 启动 Kconfig 配置界面..."
python kconfig_menu.py

echo ""
echo "🚀 开始构建项目..."
./build.sh