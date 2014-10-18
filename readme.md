MaintenanceDB
=============

HackTX 2014 Project

Goal: Design a database that stores the device inventory of a hospital
and schedules regular preventative maintenance. Will send email reminders
via SendGrid. Also looking for a way to implement IBM Bluemix API.

Implementing the MongoDB API.

=============

Server is up and running, located at:

alexgerome.me


Users:
- agerome
- reece
- kawaiijr
- davebarks

=============

Program Outline:

User inputs a inventory in .xls or .csv format.

Python script will parse the inventory file for the data we need (device name, 
serial no., date last serviced). Notification system will primarily use the 
installed os notification library (libnotify for linux, systray for Windows and Mac)

User interface will be coded in Python using QT
