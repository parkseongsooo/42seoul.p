#!/bin/bash
Find . -type f -name "*.sh" -exec basename {} ".sh" \; 
