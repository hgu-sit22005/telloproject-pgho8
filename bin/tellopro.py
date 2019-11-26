from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff', -1))
command_lst.append(TelloPro.get_instance('up',50))
command_lst.append(TelloPro.get_instance('forward',50))
command_lst.append(TelloPro.get_instance('down',30))
command_lst.append(TelloPro.get_instance('land', -1))

for command in command_lst:
	tello.send_command_instance(command)
