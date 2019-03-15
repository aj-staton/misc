# Written by Austin Staton
# This demonstrates the use of Python as a scripting language.
# I am in a Linux Ext4 filesystem.

import os
import sys
import datetime
import requests

current = datetime.datetime.today()
ver_info = sys.version
print(current)
print(ver_info)

# os.chdir("/home/user0/Documents")
os.mkdir("./NewFolder")
os.rmdir("./NewFolder")

if (not os.path.exists("/etc/passwd")):
	print("I wonder how people secure thier accounts...")

os.chdir("/")
# I would use subprocess for some of these; but, I am writing this on Python 2.0.
os.system("echo 'hello from the root' ") 


resp = requests.get('https://docs.python.org/3/library/sys.html')
# Only print the object with an OK http status.
if (resp.status_code == 200): 
	print(resp.content)
else:
	print("Nothing to see here.")

		



