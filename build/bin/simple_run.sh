#!/bin/bash
# SC_LOG_OP_FILTER=”htp” 
SC_LOG_LEVEL=Debug ./suricata -c /etc/suricata/suricata.yaml -q 0 -q 1  --runmode workers -v
