#!/bin/bash

cd /var/log
tail -f apache2/client-error.log dgd/* userdb/* dgd_server.out tunnel/gables*.log userdb*
