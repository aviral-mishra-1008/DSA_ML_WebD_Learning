# Create your views here.
from django.shortcuts import render, redirect
import random
import json
from django.http import JsonResponse
from .models import Room
import random



def home(request):
    return render(request, 'index.html')

def submit(request):
    if request.method == 'POST':
        username = request.POST.get('username','')
        user_list = []
        user_list.append(username)
        roomID = random.randint(1,10000000)
        Room_inst = Room()
        Room_inst.set_usernames(user_list)
        Room_inst.Room_Id = roomID
        Room_inst.save()
        
        Params = {"RoomID":roomID, "Usernames":user_list}

    return render(request, "Lobby.html", Params)


def startGame(request):
    return render(request, 'room.html')

def joinRoom(request):
    return render(request, 'join.html')

def Lobby(request):
    if request.method == 'POST':
        roomID = request.POST.get('roomID','')
        roomID = int(roomID)
        room_ids = Room.objects.values_list('Room_Id', flat=True)
        roomId_list = list(room_ids)
        if roomID in roomId_list:
            userList = Room.objects.get(Room_Id=roomID) 
            userNames = userList.get_usernames()
            if len(userNames)>=8:
                return render(request,'erono2!')
            else:
                if request.method=='POST':
                    userName = request.POST.get('username', '')
                    userList=list(userNames)
                    userList.append(userName)
                    Room_inst = Room()
                    Room_inst.set_usernames(userList)
                    Room_inst.save()
                    Params = {'Usernames':userList}
                    return render(request, 'playerLobby.html',Params)
        else:
            return render(request, 'erono.html')