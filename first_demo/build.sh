#!/bin/bash

# 自动构建脚本：生成 config.h + 编译 + 运行

echo "🔧 正在生成 config.h ..."
python3 gen_config.py
if [ $? -ne 0 ]; then
    echo "❌ gen_config.py 失败，退出。"
    exit 1
fi

echo "🔨 正在编译 main.c ..."
gcc main.c -o app
if [ $? -ne 0 ]; then
    echo "❌ 编译失败，退出。"
    exit 1
fi

echo "✅ 构建成功！正在运行程序："
./app