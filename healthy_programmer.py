from pygame import mixer

from  datetime import  datetime
import  time

def musiconloop(file, stopper):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while True:
        a = input()
        if a == stopper:
            mixer.music.stop()
            break

def log_now(msg):
    with open("mylogs.txt", "a") as f:
         f.write(f"{msg} {datetime.now()}\n")

def IsOfficeTime(currenttime):
    if currenttime > '09:00:00' and currenttime < '17:00:01':
        return True
    else:
        print("Sorry we only play this application in office hours i.e. in between 9 am to 5 pm ")
        return False

if __name__ == '__main__':
    # musiconloop("water.mp3", "stop")
    init_water = time.time()
    init_eyes = time.time()
    init_exercise = time.time()
    currenttime = time.strftime('%H:%M:%S')
    watersecs = 20*60 # Every 20 minutes
    exesecs = 30*60 # Every 30 minutes
    eyessecs = 45*60 # Every 45 minutes
    SleepTime = 60 # Time gap of 1 minute after each task is performed

    while (IsOfficeTime(currenttime)):

        if time.time() - init_water > watersecs:
            print("Water Drinking time. Enter 'D' to stop the alarm.")
            musiconloop('water.mp3', 'D')
            init_water = time.time()
            log_now("Drank water at")
            time.sleep(SleepTime)

        if time.time() - init_eyes > eyessecs:
            print("Eyes exercise time. Enter 'E' to stop the alarm.")
            musiconloop('rush.mp3','E')
            init_eyes = time.time()
            log_now("Eyes exercise done at")
            time.sleep(SleepTime)

        if time.time() - init_exercise > exesecs:
            print("Body Exercise time. Enter 'B' to stop the alarm.")
            musiconloop('physical-exercise.mp3','B')
            init_exercise = time.time()
            log_now("Body exercise done at")
            time.sleep(SleepTime)

        time.sleep(SleepTime)
        currenttime = time.strftime('%H:%M:%S')
