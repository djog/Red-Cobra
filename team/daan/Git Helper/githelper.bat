<<<<<<< HEAD
<<<<<<< HEAD
::[Bat To Exe Converter]
::
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdkqI9UN+CG0U
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdkyc8kg4VWd1kwM=
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdk6G9Eg1C3Bnjy3DhEs=
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdlic6kd+CG0U
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdlic9UN+CG0U
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMA9dfx+Xag41p1Jlv3DFH8KQowrzdluA4UU5FStnjwM=
::fBE1pAF6MU+EWHreyHcjLQlHcCOHPnmvD74Z+tTf6vmMtkINaMU2bIfO2KeyJOoc7XrqdJgixUUIyJpUMBhUexOlaQYgoWtOpmGXecWdp28=
::YAwzoRdxOk+EWAjk
::fBw5plQjdCyDJGyX8VAjFDxRThaXNWC/FIk45//14+WGpl4hXew7fZeV07eBQA==
::YAwzuBVtJxjWCl3EqQJgSA==
::ZR4luwNxJguZRRnk
::Yhs/ulQjdF+5
::cxAkpRVqdFKZSDk=
::cBs/ulQjdF+5
::ZR41oxFsdFKZSTk=
::eBoioBt6dFKZSDk=
::cRo6pxp7LAbNWATEpCI=
::egkzugNsPRvcWATEpSI=
::dAsiuh18IRvcCxnZtBJQ
::cRYluBh/LU+EWAjk
::YxY4rhs+aU+JeA==
::cxY6rQJ7JhzQF1fEqQJQ
::ZQ05rAF9IBncCkqN+0xwdVs0
::ZQ05rAF9IAHYFVzEqQJQ
::eg0/rx1wNQPfEVWB+kM9LVsJDGQ=
::fBEirQZwNQPfEVWB+kM9LVsJDGQ=
::cRolqwZ3JBvQF1fEqQJQ
::dhA7uBVwLU+EWDk=
::YQ03rBFzNR3SWATElA==
::dhAmsQZ3MwfNWATElA==
::ZQ0/vhVqMQ3MEVWAtB9wSA==
::Zg8zqx1/OA3MEVWAtB9wSA==
::dhA7pRFwIByZRRnk
::Zh4grVQjdCyDJGyX8VAjFDxRThaXNWC/FIk47fvw++WXnmoUQOoqepzn3r6BJ98d60vrZql/hisCpOwFGFtwex67ax16rHZH1g==
::YB416Ek+ZG8=
::
::
::978f952a14a936cc963da21a135fa983
=======
>>>>>>> daan
=======
>>>>>>> 8a6fdd8ecaf08e2bcf040e115cdd153dcc5f8e8a
--- loading
echo on
title Git Helper - Loading
echo Loading...
<<<<<<< HEAD
<<<<<<< HEAD
running = 1
ping localhost nul
timeout /t 02
=======
>>>>>>> daan
=======
>>>>>>> 8a6fdd8ecaf08e2bcf040e115cdd153dcc5f8e8a
cls
@echo off
title Git Helper
echo Please enter the path of the folder where this program is installed/Voer het pad van de map in waar dit programma in staat Including /!!!!!!!!!
set /p cpath=Option/Optie: 
echo Please enter the repository directory/Voer het pad van de github repository die je wil gebruiken
set /p path=Option/Optie: 
echo on
copy %path%ghelper.zip %cpath%
copy %path%extract.bat %cpath%
copy %path%extract.vbs %cpath%
pause
cd %path%
:langchoose
--- Choose Lang
@echo off
cls
echo Git Helper
echo 1. Dutch/Nederlands
echo 2. English/Engels
set /p lang=Option/Optie: 
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:dutch
start dutch.bat
exit
:english
cls
echo Git Helper
echo 1. Sign in with GitHub
echo 2. Update/Pull
echo 3. Upload/Push
echo 4. Open Git Bash (BETA)
echo 5. DANGER ZONE
echo 6. EXIT Clean
set /p option=Option: 
if %option% == 1 goto signin
if %option% == 2 goto pull
if %option% == 3 goto push
if %option% == 4 goto openbash
if %option% == 5 goto warningdangerzone
if %option% == 6 goto clean
goto english
:clean
start cleangithelper.bat
exit
:signin
start signin.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:pull
start pull.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:push
start push.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:warningdangerzone
echo WARNING!
echo if you dont know what this is, dont do anything! still continue? Y/N
set /p dangerzone=
if %dangerzone% == Y goto dangerzone
if %dangerzone% == y goto dangerzone
goto langchoose
:dangerzone
echo {{{DANGER ZONE}}}
echo 1. {-FORCE PUSH-}
set /p dangerzone= {{{DANGER!}}} 
if %dangerzone% == 1 goto forcepush
goto langchoose
:forcepush
echo if you dont know what this is, dont do anything! still continue? Y/N
set /p dangerzone=
if %dangerzone% == Y goto startforcepush
if %dangerzone% == y goto startforcepush
goto langchoose
:startforcepush
start forcepush.sh







