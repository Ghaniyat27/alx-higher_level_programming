#!/bin/bash
# Script that makes a request to causes a specific response to 0.0.0.0:5000/catch_me that gets the message "You got me!".
curl -sL -X PUT -H "Origin: X-School-User-Id" -d "user_id=98" 0.0.0.0:5000/catch_me
