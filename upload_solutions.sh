#!/bin/bash
cd ~/Desktop/a2oj

git add .
git commit -m "Auto-upload Codeforces solutions $(date +"%Y-%m-%d %H:%M:%S")"
git push origin main

