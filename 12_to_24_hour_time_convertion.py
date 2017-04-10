"""
Descritption : Python Program TO Convert  12 Hour Time Format to Military Time (24 Hour) Format
Author : Ayokunle Ade-Aina
Problem Source : Hacker Rank 
email: ayokunlle.adeaina@gmail.com
(c) April 2017
"""

import re
import ctypes, ctypes.util
whereislib = ctypes.util.find_library('c')
clib = ctypes.cdll.LoadLibrary(whereislib)


def process_prefix_zero(tt):
    tt_string = ""
    
    if (tt <10 ) & (tt >1):
       tt_string = "0%d"%tt
    
    if tt == 0:
       tt_string = "00"
    
    if tt >10:
       tt_string ="%d"%tt
    
    return tt_string


#load test set
time = "12:01:23AM"

# stripoff 12Hour Format
tmod=""

if  "AM" in time :
    time = time.replace("AM","")
    tmod = "AM"
    

if "PM" in time:
    time = time.replace("PM","")
    tmod = "PM"

# split time into segments
time_seg = time.split(':')

#validate input
if len(time_seg) != 3 :
   print "invalid input"
   exit()
  


# segment data
time_seg = filter(None,time.split(":"))

# create placeholder for result
result    = ""
hh    = 0
t_seg = 0

#print help(clib.atoi)
for seg in time_seg :
   
   
    if t_seg == 0: 
       seg1 = seg
       if tmod == "AM"  :     #  test for AM PM mod
           hh = 12 +  int(seg1)
           hh =  hh % 24
       
       if tmod =="PM"  :
          hh = int(seg1);
               
       if (hh <10 ) & (hh >1): #  1-9 range
              seg2 = "0%d"%tt
    
       if hh == 0:
              seg2 = "00"      # 0 
    
       if hh >10:
              seg2 ="%d"%hh    # 10 -> 60
            
       result = result + seg2
    else :
       result = result + ":" + seg
      
    t_seg  = t_seg + 1
       
           
print result