#!/bin/bash
# Script that takes in a URL as an argument, send a GET request, and displays the body of the response URL with a header variable.
curl -sH "X-HolbertonSchool-User-Id: 98" "${1}"
