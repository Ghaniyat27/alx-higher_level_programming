#!/bin/bash
# Script that takes an URL and Display the Allowed OPTIONS
curl -sI -X OPTIONS "$1" | grep "Allow:" | cut -d " " -f 2-
