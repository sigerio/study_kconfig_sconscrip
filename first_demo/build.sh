#!/bin/bash
# build.sh

echo "🔧 生成 config.h..."
python gen_config.py || { echo "❌ gen_config.py 失败"; exit 1; }

echo "🔨 编译 main.c..."
gcc main.c -o app || { echo "❌ 编译失败"; exit 1; }

echo "✅ 构建成功！运行结果："
./app