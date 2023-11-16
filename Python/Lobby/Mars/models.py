from django.db import models
import json

# Create your models here.
class Room(models.Model):
    Id = models.AutoField
    Room_Id = models.IntegerField(default=0)
    usernames = models.TextField(default='')
    vacany = models.BooleanField(default=True)

    def set_usernames(self, usernames_list):
        self.usernames = json.dumps(usernames_list)

    def get_usernames(self):
        return json.loads(self.usernames)
